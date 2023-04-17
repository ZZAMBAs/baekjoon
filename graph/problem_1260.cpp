/*
//
// Created by cho on 23. 4. 17.
//
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int N, M, V, v1, v2;
vector<vector<int>> adv(1001);
bool visited[1001];

void dfs(int idx){
    visited[idx] = true;
    cout << idx << " ";
    int size = adv[idx].size();
    for (int i = 0; i < size; ++i) {
        int adj = adv[idx][i];
        if (!visited[adj])
            dfs(adj);
    }
}

void bfs(){
    fill(visited, visited + 1001, false);
    queue<int> q;
    q.push(V);
    visited[V] = true;
    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int cur = q.front();
            q.pop();

            cout << cur << " ";

            for (auto adj : adv[cur]) {
                if (!visited[adj]){
                    visited[adj] = true;
                    q.push(adj);
                }
            }

        }

    }
}

int main(){
    cin >> N >> M >> V;
    for (int i = 0; i < M; ++i) {
        cin >> v1 >> v2;
        adv[v1].emplace_back(v2);
        adv[v2].emplace_back(v1);
    }
    for (int i = 1; i <= N; ++i)
        sort(adv[i].begin(), adv[i].end());
    
    dfs(V);
    cout << "\n";
    bfs();
    return 0;
}*/
