/*
//
// Created by cho on 23. 1. 15.
// 최적화 고민. 3차원 배열 dp 풀이도 가능.
#include <iostream>

using namespace std;

int T, n, k, dp[101][101];

int fdp(int bitNum, int bitSeqNum){
    if (dp[bitNum][bitSeqNum] >= 0)
        return dp[bitNum][bitSeqNum];
    if (bitNum <= bitSeqNum || bitSeqNum < 0)
        return 0;

    dp[bitNum][bitSeqNum] = fdp(bitNum - 1, bitSeqNum); // 앞이 0
    for (int i = 0; i < bitSeqNum; ++i)
        dp[bitNum][bitSeqNum] += fdp(bitNum - 2 - i, bitSeqNum - i);
    dp[bitNum][bitSeqNum] += fdp(bitNum - bitSeqNum - 2, 0);
    return dp[bitNum][bitSeqNum];
}

int main(){
    fill(dp[1], dp[1] + 100 * 101, -1);
    for (int i = 1; i <= 100; ++i)
        dp[i][i - 1] = 1;
    dp[0][0] = 1;
    dp[1][0] = 2;
    for (int i = 2; i < 101; ++i)
        dp[i][0] = dp[i - 2][0] + dp[i - 1][0];

    cin >> T;
    while (T--){
        cin >> n >> k;
        cout << fdp(n, k) << "\n";
    }

    return 0;
}*/
