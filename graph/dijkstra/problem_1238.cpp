/*
//
// Created by AppDeveloper on 2022-12-27.
// 아래 풀이는 2N번( O(N) )의 다익스트라를 진행한다. X의 inDeg를 이용하면 단 2번의 다익스트라로 끝낼 수 있다.
// 최적화 풀이: https://hyeo-noo.tistory.com/138
#include <iostream>
#include <queue>

using namespace std;

int N, M, X, s, e, w, toX[1001], toHome[1001], K;
vector<vector<pair<int, int>>> outDeg(1001);
bool visited[1001];

int dijkstra(int start, int end){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> q;
    fill(visited, visited + 1001, false);
    visited[start] = true;
    for (pair<int, int> adv : outDeg[start])
        q.push(adv);

    while (!q.empty()){
        int wSum = q.top().first;
        int destination = q.top().second;
        q.pop();
        visited[destination] = true;

        if (destination == end)
            return wSum;

        for (pair<int, int> adv : outDeg[destination])
            if (!visited[adv.second])
                q.push({wSum + adv.first, adv.second});
    }
    return -1;
}

int main(){
    cin >> N >> M >> X;
    for (int i = 0; i < M; ++i) {
        cin >> s >> e >> w;
        outDeg[s].emplace_back(w, e);
    }
    fill(toX, toX + 1001, INT32_MAX);
    fill(toHome, toHome + 1001, INT32_MAX);

    for (int i = 1; i <= N; ++i) {
        toX[i] = dijkstra(i, X);
        toHome[i] = dijkstra(X, i);
    }
    for (int i = 1; i <= N; ++i)
        K = max(K, toX[i] + toHome[i]);

    cout << K;

    return 0;
}*/
