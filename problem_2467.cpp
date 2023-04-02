/*
//
// Created by AppDeveloper on 2022-09-03.
// 투 포인터 풀이: https://m.blog.naver.com/iambigman97/221860065921, https://codecollector.tistory.com/1076
// 아래는 이분 탐색 풀이.
#include <iostream>
#include <vector>

using namespace std;

int deadEnd, source, diff = 2000000001, res1, res2;
vector<int> liq;

int main(){
    cin >> deadEnd;
    for (int i = 0; i < deadEnd; ++i) {
        cin >> source;
        liq.emplace_back(source);
    }

    int size = liq.size();
    for (int i = 0; i < size - 1; ++i) {
        int s = i + 1, e = size - 1;
        while (s <= e){
            int m = (s + e) / 2;
            int temp = liq[i] + liq[m];
            if (abs(temp) < diff){
                res1 = liq[i];
                res2 = liq[m];
                diff = abs(temp);
            }
            if (temp < 0)
                s = m + 1;
            else
                e = m - 1;
        }

    }

    cout << res1 << " " << res2;

    return 0;
}*/
