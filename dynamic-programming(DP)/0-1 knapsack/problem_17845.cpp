/*
//
// Created by cho on 23. 4. 15.
// 1차원 DP를 사용하는 배낭문제 풀이: https://www.acmicpc.net/source/57959548
#include <iostream>

using namespace std;

int N, K, I, T, dp[1001][10001];
pair<int, int> subject[1000];

int main(){
    cin >> N >> K;
    for (int i = 1; i <= K; ++i) {
        cin >> I >> T;
        subject[i] = {I, T};
    }

    for (int i = 1; i <= K; ++i) {
        int curI = subject[i].first, curT = subject[i].second;
        for (int j = 0; j <= N; ++j) {
            if (j < curT)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - curT] + curI);
        }
    }

    cout << dp[K][N];
    return 0;
}*/
