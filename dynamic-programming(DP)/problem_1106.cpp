/*
//
// Created by cho on 23. 1. 14.
// 1차원 배열로도 풀 수 있다.
#include <iostream>

using namespace std;

int C, N, dp[21][1001]; // row: N, col: customer
pair<int, int> cities[21]; // {cost, customer}

int main(){
    fill(dp[0] + 1, dp[0] + 1001, 100000);

    cin >> C >> N;
    for (int i = 1; i <= N; ++i)
        cin >> cities[i].first >> cities[i].second;

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= C; ++j) {
            if (j < cities[i].second)
                dp[i][j] = min(dp[i - 1][j], cities[i].first);
            else
                dp[i][j] = min(dp[i - 1][j - cities[i].second] + cities[i].first,
                               min(dp[i - 1][j], dp[i][j - cities[i].second] + cities[i].first));
        }
    }

    cout << dp[N][C];
    return 0;
}*/
