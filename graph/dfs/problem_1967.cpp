/*
//
// Created by AppDeveloper on 2022-11-13.
//
#include <iostream>
#include <vector>

using namespace std;

int n, team;
vector<vector<pair<int, int>>> adv(10001);

void dfs(int v, int prev, int sum){
    for (pair<int, int> adj : adv[v]) {
        if (adj.first != prev)
            dfs(adj.first, v, sum + adj.second);
    }

    if (sum > team)
        team = sum;
}

int main(){
    int p, c, w;
    vector<int> leaf;
    cin >> n;
    for (int i = 0; i < n - 1; ++i) {
        cin >> p >> c >> w;
        adv[p].emplace_back(c,w);
        adv[c].emplace_back(p,w);
    }

    for (int i = 1; i <= n; ++i) {
        if (adv[i].size() == 1)
            leaf.emplace_back(i);
    }

    for (int l : leaf)
        bfs(l, 0, 0);

    cout << team;
    return 0;
}*/
