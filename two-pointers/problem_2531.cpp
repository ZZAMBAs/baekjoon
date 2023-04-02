/*
//
// Created by AppDeveloper on 2022-08-18.
// 아래 풀이는 슬라이딩 윈도우(브루트 포스) 풀이. 문제 시간이 널널해서 이렇게도 풀수 있었다.
// 투 포인터를 이용해 풀어 보자.
#include <iostream>
#include <vector>

using namespace std;

int n, d, k, c, num, maxVal;
vector<int> sushi;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> d >> k >> c;

    for (int i = 0; i < n; ++i) {
        cin >> num;
        sushi.emplace_back(num);
    }

    for (int i = 0; i < n; ++i) {
        int kindNum = 0;
        bool visited[3001];
        for (int j = 0; j < 3001; ++j)
            visited[j] = false;

        visited[c] = true;
        for (int j = 0; j < k; ++j) { // k
            int curSushi = sushi[(i + j) % n];
            if (!visited[curSushi]){
                visited[curSushi] = true;
                kindNum++;
            }

        }

        kindNum++;
        if (kindNum > maxVal)
            maxVal = kindNum;
    }

    cout << maxVal;
    return 0;
}*/
