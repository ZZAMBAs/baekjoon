/*
//
// Created by cho on 23. 2. 4.
//
#include <iostream>
#include <queue>

using namespace std;

int N, M, a, b, w;
vector<vector<pair<int, int>>> tree(1001);
bool visited[1001];

int bfs(int source, int destination){
    queue<pair<int, int>> q;
    q.push({source, 0});
    while (!q.empty()){
        pair<int, int> cur = q.front();
        visited[cur.first] = true;
        q.pop();

        if (cur.first == destination)
            return cur.second;

        for (pair<int, int> v : tree[cur.first]) {
            if (!visited[v.first])
                q.push({v.first, cur.second + v.second});
        }
    }
    return -1;
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < N - 1; ++i) {
        cin >> a >> b >> w;
        tree[a].push_back({b, w});
        tree[b].push_back({a, w});
    }

    for (int i = 0; i < M; ++i) {
        fill(visited, visited + 1001, false);
        cin >> a >> b;
        cout << bfs(a, b) << "\n";
    }
    
    return 0;
}*/
