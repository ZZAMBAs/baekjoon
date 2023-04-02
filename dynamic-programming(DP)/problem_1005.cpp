/*
//
// Created by cho on 23. 1. 26.
//
#include <iostream>
#include <vector>

using namespace std;

int T, N, K, buildTime[1001], obj, p, c, dp[1001];
vector<vector<int>> pre(1001);

int fdp(int num){
    if (dp[num] >= 0)
        return dp[num];

    dp[num] = buildTime[num];
    int maxV = 0;
    for (int preCraft : pre[num])
        maxV = max(maxV, fdp(preCraft));
    dp[num] += maxV;
    return dp[num];
}

int main(){
    cin >> T;
    while (T--){
        fill(dp, dp + 1001, -1);
        for (int i = 1; i < 1001; ++i)
            pre[i].clear();
        cin >> N >> K;
        for (int i = 1; i <= N; ++i)
            cin >> buildTime[i];
        for (int i = 0; i < K; ++i) {
            cin >> p >> c;
            pre[c].push_back(p);
        }

        for (int i = 1; i <= N; ++i) {
            if (pre[i].empty())
                dp[i] = buildTime[i];
        }

        cin >> obj;
        cout << fdp(obj) << "\n";
    }

    return 0;
}*/
