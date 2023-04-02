/*
//
// Created by AppDeveloper on 2022-11-20.
//
#include <iostream>
#include <vector>

using namespace std;

int N, a, b, p[100001];
vector<vector<int>> adj;

void dfs(int idx, int preIdx){
    int adjSize = adj[idx].size();
    for (int i = 0; i < adjSize; ++i) {
        if (adj[idx][i] == preIdx)
            continue;
        int next = adj[idx][i];
        p[next] = idx;
        dfs(next, idx);
    }
}

int main(){
    cin >> N;
    adj.resize(N + 1);
    for (int i = 0; i < N - 1; ++i) {
        cin >> a >> b;
        adj[a].emplace_back(b);
        adj[b].emplace_back(a);
    }

    bfs(1, -1);
    for (int i = 2; i <= N; ++i)
        cout << p[i] << "\n";
    return 0;
}*/
