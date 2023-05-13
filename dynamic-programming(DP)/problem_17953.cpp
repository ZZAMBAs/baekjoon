/*
//
// Created by cho on 23. 5. 13.
//
#include <iostream>

using namespace std;

int N, M, dessert[10][100000], dp[10][100000], res;

int fdp(int idx, int seq){
    if (dp[seq][idx] >= 0)
        return dp[seq][idx];

    for (int i = 0; i < M; ++i) {
        if (i != seq)
            dp[seq][idx] = max(dp[seq][idx], fdp(idx - 1, i) + dessert[seq][idx]);
        else
            dp[seq][idx] = max(dp[seq][idx], fdp(idx - 1, i) + dessert[seq][idx] / 2);
    }
    return dp[seq][idx];
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> dessert[i][j];
        }
    }
    fill(dp[0], dp[0] + 10 * 100000, -1);
    for (int i = 0; i < M; ++i) {
        dp[i][0] = dessert[i][0];
    }

    for (int i = 0; i < M; ++i) {
        res = max(res, fdp(N - 1, i));
    }
    cout << res;
    return 0;
}*/
