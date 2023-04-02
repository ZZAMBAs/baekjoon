/*
//
// Created by AppDeveloper on 2022-07-21.
// 사실 2차원 배열 DP를 안써도 되는 문제다. https://yabmoons.tistory.com/18
#include <iostream>

using namespace std;

int n, wines[10000], sec[10001][3], maxVal = 0; // 0: 0잔, 1: 1잔, 2: 2잔

int fdp(int idx, int seq){
    if (sec[idx][seq] >= 0)
        return sec[idx][seq];

    if (seq != 0)
        sec[idx][seq] = max(fdp(idx - 1, seq - 1) + wines[idx], sec[idx][seq]);
    else
        sec[idx][seq] = max(max(fdp(idx - 1, 2), fdp(idx - 1, 1)), fdp(idx - 1, 0));

    if (maxVal < sec[idx][seq])
        maxVal = sec[idx][seq];

    return sec[idx][seq];
}

int main(){
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> wines[i];

    for (int i = 0; i < 10001; ++i)
        for (int j = 0; j < 3; ++j) {
            sec[i][j] = -1;
        }

    sec[0][0] = sec[0][2] = 0;
    sec[0][1] = wines[0];

    fdp(n, 0);

    cout << maxVal;
    return 0;
}*/
