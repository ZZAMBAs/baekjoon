/*
//
// Created by cho on 23. 4. 22.
// pow(2의 제곱) 대체 : 1 << n
// 수학적 풀이를 이용하면 O(N)에 풀이가 가능하다고 한다.
#include <iostream>
#include <deque>
#include <vector>
#include <cmath>

using namespace std;

int N, K, arr[1000], res1, res2;

int squareOf2(int k){
    int ret = 1;
    for (int i = 0; i < k; ++i) {
        ret *= 2;
    }
    return ret;
}

void chg(deque<int> &real, deque<int> &temp, int cardNum){
    if (cardNum <= 1) {
        real.emplace_front(temp.back());
        temp.pop_back();
        return;
    }
    int bound = cardNum / 2;
    for (int i = 0; i < cardNum; ++i) {
        int back = temp.back();
        temp.pop_back();
        if (i < bound)
            temp.emplace_front(back);
        else
            real.emplace_front(back);
    }
    chg(real, temp, cardNum / 2);
}

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    for (int i = 1; i < 10 && !res1; ++i) {
        int cardChgNum = squareOf2(i);
        if (pow(2, i) > N)
            break;
        deque<int> d, t;
        for (int j = 1; j <= N; ++j) {
            if (j <= N - cardChgNum)
                d.emplace_back(j);
            else
                t.emplace_back(j);
        }
        chg(d, t, cardChgNum);
        vector<int> v;
        for (int j = 0; j < N; ++j) {
            v.emplace_back(d.front());
            d.pop_front();
        }

        for (int j = 1; j < 10; ++j) {
            bool sw = true;
            cardChgNum = squareOf2(j);
            if (pow(2, j) > N)
                break;
            deque<int> dd;
            for (int k = 0; k < N; ++k) {
                if (k < N - cardChgNum)
                    dd.emplace_back(v[k]);
                else
                    t.emplace_back(v[k]);
            }
            chg(dd, t, cardChgNum);

            for (int k = 0; k < N; ++k) {
                int f = dd.front();
                dd.pop_front();
                if (arr[k] != f) {
                    sw = false;
                    break;
                }
            }

            if (sw){
                res1 = i;
                res2 = j;
                break;
            }
        }
    }

    cout << res1 << " " << res2;

    return 0;
}*/
