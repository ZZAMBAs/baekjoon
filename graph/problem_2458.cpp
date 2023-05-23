/*
//
// Created by cho on 23. 5. 23.
// 플로이드 와샬 알고리즘으로도 풀 수 있다.
#include <iostream>
#include <queue>

using namespace std;

int N, M, a, b, res;
vector<vector<int>> inDeg(501), outDeg(501);

int bfs(int idx, int inOrOut){ // 0: inDeg, 1: outDeg
    bool visited[501];
    fill(visited, visited + 501, false);
    visited[idx] = true;
    int ret = 0;
    queue<int> q;
    q.emplace(idx);
    while (!q.empty()){
        int cur = q.front();
        q.pop();

        vector<int> *deg;
        if (inOrOut == 0)
            deg = &inDeg[cur];
        else
            deg = &outDeg[cur];

        for (auto &adj : *deg) {
            if (!visited[adj]) {
                visited[adj] = true;
                q.emplace(adj);
                ret++;
            }
        }
    }

    return ret;
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        cin >> a >> b;
        inDeg[b].emplace_back(a);
        outDeg[a].emplace_back(b);
    }

    for (int i = 1; i <= N; ++i) {
        if(bfs(i, 0) + bfs(i, 1) >= N - 1)
            res++;
    }
    
    cout << res;
    return 0;
}*/
