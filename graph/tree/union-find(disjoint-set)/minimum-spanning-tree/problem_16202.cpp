/*
//
// Created by cho on 23. 6. 21.
// 크루스칼 알고리즘. 사이클 판단 최적화를 위해서는 union-find가 필요하다.
// 사이클 판단은 단순히 방문 여부로만 판단하면 안된다. 두 정점 모두 방문이었다 하더라도 사이클이 아닌 경우가 있다.
// 크루스칼: 간선들을 기준으로. 프림: 정점 하나 잡고 확장.
#include <iostream>
#include <queue>

using namespace std;

int N, M, K, x, y;
vector<pair<int, int>> edges; // 가중치 순

int mst(int turn){
    int connectedCnt = 0, weight = 0, color = 1;
    int visited[1001];
    fill(visited, visited + 1001, 0);
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;
    for (int i = 1; i <= edges.size(); ++i) {
        pq.emplace(i + turn, edges[i - 1]);
    }
    for (int i = 0; i < edges.size(); ++i) {
        int nowW = pq.top().first;
        int v1 = pq.top().second.first;
        int v2 = pq.top().second.second;
        pq.pop();

        if (!visited[v1] && !visited[v2]){
            visited[v1] = visited[v2] = color++;
        }else if (!visited[v1] || !visited[v2]){
            visited[v1] = visited[v2] = max(visited[v1], visited[v2]);
        }else if(visited[v1] == visited[v2]){
            continue;
        }else{
            int temp = visited[v2];
            for (int j = 1; j <= N; ++j) {
                if (visited[j] == temp)
                    visited[j] = visited[v1];
            }
        }
        connectedCnt++;
        weight += nowW;
    }
    
    return (connectedCnt == N - 1) ? weight : 0;
}

int main(){
    cin >> N >> M >> K;
    for (int i = 0; i < M; ++i) {
        cin >> x >> y;
        edges.emplace_back(x, y);
    }
    for (int i = 0; i < K; ++i) {
        cout << mst(i) << " ";
        edges.erase(edges.begin());
    }

    return 0;
}*/
