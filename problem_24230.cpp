/*
//
// Created by cho on 23. 4. 1.
// 탐색 없이도 풀이가 가능하다. 규칙 찾기 가능.
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, C[200001], res, a, b;
vector<vector<int>> adj(200001);
bool visited[200001];

void bfs(){
    queue<int> q;
    q.emplace(1);
    visited[1] = true;
    if (C[1] != 0)
        res++;
    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int cur = q.front();
            q.pop();
            
            for(int adv : adj[cur]){
                if (!visited[adv]){
                    visited[adv] = true;
                    q.emplace(adv);
                    if (C[cur] != C[adv])
                        res++;
                }
            }

        }

    }
}

int main(){
    cin >> N;
    for (int i = 1; i <= N; ++i)
        cin >> C[i];
    for (int i = 0; i < N - 1; ++i) {
        cin >> a >> b;
        adj[a].emplace_back(b);
        adj[b].emplace_back(a);
    }
    bfs();

    cout << res;
    return 0;
}*/
