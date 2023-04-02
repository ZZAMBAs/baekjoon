/*
//
// Created by cho on 23. 2. 9.
// 내 풀이는 다익스트라 풀이.
// 이분 탐색(중량 고정) + BFS: https://maivve.tistory.com/144 (JAVA), https://poodlepoodle.github.io/posts/algorithm-boj-1939/ (C++)
// (MST) Union-Find + Kruskal: https://www.acmicpc.net/source/52025223 (JAVA), https://www.acmicpc.net/source/50937052 (C++)
// (MST) Prim: https://ongveloper.tistory.com/372

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M, A, B, C, factory[2];
vector<vector<pair<int, int>>> islands(10001);

int dijkstra(){
    int visited[10001];
    fill(visited, visited + 10001, 0);
    visited[factory[1]] = INT32_MAX;
    priority_queue<pair<int, int>, vector<pair<int, int>>, less<>> q;
    q.push({INT32_MAX, factory[1]});
    while (!q.empty()){
        pair<int, int> cur = q.top();
        q.pop();

        if (cur.second == factory[0])
            return cur.first;

        for (pair<int, int> adj : islands[cur.second]) {
            if (visited[adj.second] < min(adj.first, cur.first)){
                q.push({min(adj.first, cur.first), adj.second});
                visited[adj.second] = min(adj.first, cur.first);
            }
        }

    }
    return -1;
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        cin >> A >> B >> C;
        islands[A].push_back({C, B});
        islands[B].push_back({C, A});
    }
    cin >> factory[0] >> factory[1];
    cout << dijkstra();
    return 0;
}
*/
