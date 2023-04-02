/*
//
// Created by AppDeveloper on 2022-08-01.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, M, memory, B, team;
vector<vector<int>> children(10001);
vector<pair<int, int>> dfsNum; // {값, 인덱스}
vector<bool> visited;

bool cmp(pair<int, int> &a, pair<int, int> &b){
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}

void dfs(int idx){
    if (visited[idx])
        return;
    visited[idx] = true;
    team++;
    for (int adjIdx : children[idx])
        dfs(adjIdx);

    return;
}

int main(){
    cin >> n >> M;

    for (int i = 0; i < M; ++i) {
        cin >> memory >> B;
        children[B].emplace_back(memory);
    }

    for (int i = 1; i <= n; ++i) {
        visited.assign(n + 1, false);
        team = 0;
        bfs(i);
        dfsNum.push_back({team, i});
    }

    sort(dfsNum.begin(), dfsNum.end(), cmp);

    int maxVal = dfsNum[0].first;

    for (pair<int, int> dfsN : dfsNum) {
        if (dfsN.first == maxVal)
            cout << dfsN.second << " ";
        else
            break;
    }

    return 0;
}*/
