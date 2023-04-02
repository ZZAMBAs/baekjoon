/*
//
// Created by cho on 23. 1. 27.
// floyd-warshall 풀이: https://imnotabear.tistory.com/337
#include <iostream>
#include <queue>

using namespace std;

int N, M, h, l;
vector<vector<int>> p(101), c(101);

int bfs(int idx){
    int ret = 1;
    bool visited[101];
    fill(visited, visited + 101, false);
    visited[idx] = true;
    queue<int> up, down; 
    up.push(idx);
    down.push(idx);
    while (!up.empty() || !down.empty()){
        int upSize = up.size();
        int downSize = down.size();
        for (int i = 0; i < upSize; ++i) {
            int front = up.front();
            up.pop();

            for (int u: p[front]) {
                if (!visited[u]){
                    ret++;
                    visited[u] = true;
                    up.push(u);
                }
            }
        }
        for (int i = 0; i < downSize; ++i) {
            int front = down.front();
            down.pop();

            for (int d: c[front]) {
                if (!visited[d]){
                    ret++;
                    visited[d] = true;
                    down.push(d);
                }
            }

        }

    }
    return N - ret;
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        cin >> h >> l;
        c[h].push_back(l);
        p[l].push_back(h);
    }

    for (int i = 1; i <= N; ++i)
        cout << bfs(i) << "\n";

    return 0;
}*/
