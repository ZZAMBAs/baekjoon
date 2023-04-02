/*
//
// Created by AppDeveloper on 2022-12-12.
//
#include <iostream>
#include <queue>

using namespace std;

int N, M, s, e, w;
int dist[1001];
vector<vector<pair<int, int>>> adj(1001);

int dijkstra(){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> q;
    for (pair<int, int> adv : adj[s])
        q.push(adv);
    while (true){
        pair<int, int> top = q.top();
        q.pop();

        if (top.second == e)
            return top.first;

        if (top.first < dist[top.second]) {
            dist[top.second] = top.first;
            for (pair<int, int> adv: adj[top.second]) {
                q.push({dist[top.second] + adv.first, adv.second});
            }
        }
    }
}

int main(){
    fill(dist, dist + 1001, INT32_MAX);
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        cin >> s >> e >> w;
        adj[s].emplace_back(w, e);
    }
    cin >> s >> e;
    dist[s] = 0;
    cout << dijkstra();
    return 0;
}*/
