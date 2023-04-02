/*
//
// Created by AppDeveloper on 2022-11-24.
// 위상 정렬: https://yoongrammer.tistory.com/86
#include <iostream>
#include <vector>

using namespace std;

int N, M;
bool visited[32001];
vector<vector<int>> parents(32001);

void dfs(int idx){
    if (!parents[idx].empty()) {
        int pSize = parents[idx].size();
        for (int i = 0; i < pSize; ++i) {
            if (!visited[parents[idx][i]])
                dfs(parents[idx][i]);
        }
    }
    visited[idx] = true;
    cout << idx << " ";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        int p, c;
        cin >> p >> c;
        parents[c].emplace_back(p);
    }
    for (int i = 1; i <= N; ++i) {
        if (!visited[i])
            bfs(i);
    }

    return 0;
}*/
