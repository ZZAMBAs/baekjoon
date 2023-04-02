/*
//
// Created by cho on 23. 3. 27.
//
#include <iostream>
#include <queue>

using namespace std;

int N, M, shed1, shed2, w;
vector<vector<pair<int, int>>> adj(50001);
bool visited[50001];

int dijkstra(){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> q;
    q.push({0, 1});
    while (!q.empty()){
        pair<int, int> cur = q.top();
        q.pop();
        visited[cur.second] = true;

        if (cur.second == N)
            return cur.first;

        for (pair<int, int> i : adj[cur.second])
            if (!visited[i.second])
                q.push({cur.first + i.first, i.second});
    }
    return -1;
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        cin >> shed1 >> shed2 >> w;
        adj[shed1].push_back({w, shed2});
        adj[shed2].push_back({w, shed1});
    }

    cout << dijkstra();
    return 0;
}*/
