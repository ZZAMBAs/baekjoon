/*
//
// Created by cho on 23. 1. 6.
// 배낭 문제: https://cocoon1787.tistory.com/319
#include <iostream>

using namespace std;

int N, M, memory[100], cost[100], dp[101][10001];

int fdp(){
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j < 10001; ++j) {
            if (j < cost[i - 1])
                dp[i][j] = dp[i - 1][j];
            else{
                dp[i][j] = max(dp[i - 1][j - cost[i - 1]] + memory[i - 1], dp[i - 1][j]);
            }
        }
    }

    for (int i = 0; i < 10001; ++i) {
        for (int j = 0; j < 101; ++j) {
            if (dp[j][i] >= M)
                return i;
        }
    }
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        cin >> memory[i];
    }
    for (int i = 0; i < N; ++i)
        cin >> cost[i];

    cout << fdp();
    return 0;
}*/
