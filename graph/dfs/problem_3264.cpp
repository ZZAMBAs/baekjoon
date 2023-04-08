/*
//
// Created by cho on 23. 4. 8.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, S, C, A, B, res, maxV;
vector<vector<pair<int, int>>> adj(100001);

void dfs(int idx, int sum, int prev){
    for (auto & adv : adj[idx]) {
        if (adv.second != prev)
            dfs(adv.second, sum + adv.first, idx);
    }
    maxV = max(maxV, sum);
}

int main(){
    cin >> N >> S;
    for (int i = 0; i < N - 1; ++i) {
        cin >> A >> B >> C;
        adj[A].emplace_back(C, B);
        adj[B].emplace_back(C, A);
        res += C * 2;
    }

    dfs(S, 0, -1);

    cout << res - maxV;
    return 0;
}*/
