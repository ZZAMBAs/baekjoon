/*
//
// Created by cho on 23. 5. 19.

// 플로이드 와샬 풀이 O(V^3)
#include <iostream>

using namespace std;

int V, E, a, b, c, res = INT32_MAX;
int dist[401][401];

int main(){
    fill(dist[0], dist[0] + 401 * 401, 400 * 10001);
    cin >> V >> E;
    for (int i = 0; i < E; ++i) {
        cin >> a >> b >> c;
        dist[a][b] = c;
    }

    for (int i = 1; i <= V; ++i) {
        for (int j = 1; j <= V; ++j) {
            for (int k = 1; k <= V; ++k) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    for (int i = 1; i < V; ++i) {
        for (int j = i + 1; j <= V; ++j) {
            res = min(res, dist[i][j] + dist[j][i])
        }
    }

    if (res <= 8000000)
        cout << res;
    else
        cout << -1;
    return 0;
}*/

// 다익스트라 풀이 O(VElogV). 여기서는 시간복잡도 면에서 좋지 않다.
// dijkstra(int s, int d)로 만들고 res = dijkstra(i, j) + dijkstra(j, i)로 구현하면 시간초과가 난다(중복 방문 포함됨)
// dijkstra(int sd)로 한번에 구하는 것이 시간초과를 해결할 수 있다.
/*
#include <iostream>
#include <queue>

using namespace std;

int V, E, a, b, c, res = INT32_MAX;
vector<vector<pair<int, int>>> adv(401); // {W, D}

int dijkstra(int s){
    bool visited[401];
    fill(visited, visited + 401, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    for (auto &adj : adv[s]) {
        pq.emplace(adj.first, adj.second);
    }
    while (!pq.empty()){
        pair<int, int> cur = pq.top();
        pq.pop();

        if (cur.second == s)
            return cur.first;
        if (visited[cur.second])
            continue;
        visited[cur.second] = true;

        for (auto &adj : adv[cur.second]) {
            if (visited[adj.second])
                continue;
            pq.emplace(cur.first + adj.first, adj.second);
        }
    }
    return 100000000;
}

int main(){
    cin >> V >> E;
    for (int i = 0; i < E; ++i) {
        cin >> a >> b >> c;
        adv[a].emplace_back(c, b);
    }

    for (int i = 1; i <= V; ++i) {
        int temp = dijkstra(i);
        res = min(res, temp);
    }

    if (res <= 8000000)
        cout << res;
    else
        cout << -1;
    return 0;
}*/
