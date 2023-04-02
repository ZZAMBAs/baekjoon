/*
//
// Created by AppDeveloper on 2022-07-08.
//
#include <iostream>
#include <queue>

using namespace std;

int dijkstra(int start, int end, vector<vector<pair<int, int>>> &children){
    vector<int> graph(801, 999999999);
    vector<bool> visited(801);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> q;

    graph[start] = 0;
    q.push({0, start}); // 거리, 인덱스

    while (!q.empty()){
        int distance = q.top().first;
        int idx = q.top().second;
        q.pop();

        visited[idx] = true;

        int size = children[idx].size();
        for (int i = 0; i < size; ++i) {
            int adjIdx = children[idx][i].first;
            int weight = children[idx][i].second;
            if (visited[adjIdx])
                continue;

            if (distance + weight < graph[adjIdx]) {
                graph[adjIdx] = distance + weight;
                q.push({distance + weight, adjIdx});
            }
        }
    }
    if (graph[end] == 999999999)
        return -123456789; // 오버플로우 주의
    return graph[end];
}

int main(){
    int n, E, a, b, c, v1, v2;
    
    vector<vector<pair<int, int>>> children(801); // 인접 벡터 {인덱스, 가중치}

    cin >> n >> E;

    for (int i = 0; i < E; ++i) {
        cin >> a >> b >> c;
        children[a].push_back({b, c});
        children[b].push_back({a, c});
    }

    cin >> v1 >> v2;

    int fir = dijkstra(1, v1, children) + dijkstra(v1, v2, children) + dijkstra(v2, n, children);
    int sec = dijkstra(1, v2, children) + dijkstra(v2, v1, children) + dijkstra(v1, n, children);

    if (fir > sec && sec >= 0)
        cout << sec;
    else if (fir <= sec && fir >= 0)
        cout << fir;
    else
        cout << -1;

    return 0;
}*/
