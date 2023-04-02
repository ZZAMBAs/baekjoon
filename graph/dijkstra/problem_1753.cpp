/*
//
// Created by AppDeveloper on 2022-07-07.
// https://blog.naver.com/kks227/220796029558
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

unsigned V, E, K, u, v, w;
vector<int> graph(20001, 9999999);
vector<vector<pair<short, short>>> children(20001);
vector<bool> isVisited(20001, false);
priority_queue<pair<short, short>, vector<pair<short, short>>, greater<>> q; // 값, 인덱스

int main(){
    cin >> V >> E;
    cin >> K;

    graph[K] = 0;

    for (int i = 0; i < E; ++i) {
        cin >> u >> v >> w;
        children[u].push_back({v, w});
    }

    q.push({0, K});

    while (q.size()) {
        pair<short, short> qTop = q.top();
        isVisited[qTop.second] = true;
        q.pop();
        
        for (pair<short, short> &adjV: children[qTop.second]) {
            int adjVIdx = adjV.first;
            int weight = adjV.second;
            if (isVisited[adjVIdx])
                continue;

            if (graph[adjVIdx] > graph[qTop.second] + weight) {
                graph[adjVIdx] = graph[qTop.second] + weight;
                q.push({graph[adjVIdx], adjVIdx});
            } // 보통 메모리 초과 이유는 크기 제한 없는 것들(큐, 스택 등)에서 일어날 수 있다.
        }

    }

    for (int i = 1; i <= V; ++i)
        if (graph[i] != 9999999)
            cout << graph[i] << "\n";
        else
            cout << "INF\n";

    return 0;
}
*/
