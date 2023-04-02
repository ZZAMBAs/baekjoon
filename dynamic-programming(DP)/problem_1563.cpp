/*
//
// Created by cho on 23. 1. 23.
// 자바 언어 풀이: https://velog.io/@ynoolee/%EB%B0%B1%EC%A4%801563%EB%B2%88-%EA%B0%9C%EA%B7%BC%EC%83%81
#include <iostream>

using namespace std;

int N, res, dp[1001][3][2]; // [day][정상, 전에 A, 전에 AA][L 여부(0: 없음)]

int main(){
    cin >> N;
    dp[1][0][0] = dp[1][1][0] = dp[1][0][1] = 1;
    for (int i = 1; i < N; ++i) {
        dp[i + 1][0][0] = (dp[i][0][0] + dp[i][1][0] + dp[i][2][0]) % 1000000;
        dp[i + 1][0][1] = (dp[i][0][0] + dp[i][1][0] + dp[i][2][0] + dp[i][0][1] + dp[i][1][1] + dp[i][2][1]) % 1000000;
        dp[i + 1][1][0] = dp[i][0][0] % 1000000;
        dp[i + 1][1][1] = dp[i][0][1] % 1000000;
        dp[i + 1][2][0] = dp[i][1][0] % 1000000;
        dp[i + 1][2][1] = dp[i][1][1] % 1000000;
    }

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 2; ++j)
            res = (res + dp[N][i][j]) % 1000000;

    cout << res;
    return 0;
}*/
