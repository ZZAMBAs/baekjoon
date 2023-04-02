/*
//
// Created by cho on 23. 3. 17.
//
#include <iostream>
#include <queue>

using namespace std;

int N, M, a, b, X;
vector<vector<int>> p(100001);
bool visited[100001];

int bfs(int dest){
    int res = 0;
    queue<int> q;
    q.push(dest);
    visited[dest] = true;
    while (!q.empty()){
        int cur = q.front();
        q.pop();

        for (int par : p[cur]) {
            if (!visited[par]){
                visited[par] = true;
                res++;
                q.push(par);
            }
        }

    }
    return res;
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        cin >> a >> b;
        p[b].push_back(a);
    }
    cin >> X;
    
    cout << bfs(X);
    return 0;
}*/
