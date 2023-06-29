/*
//
// Created by cho on 23. 6. 29.
// mst라 썼지만 아니다. 이건 다익스트라 문제다.
#include <iostream>
#include <queue>

using namespace std;

int T, n, d, c, a, b, s;

pair<int, int> mst(vector<vector<pair<int, int>>> adj){
    pair<int, int> ret = {0, 0};
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    int visited[10001];
    fill(visited, visited + n + 1, 0);
    pq.emplace(0, c);

    while (!pq.empty()){
        int nowTime = pq.top().first;
        int vertex = pq.top().second;
        pq.pop();

        if (visited[vertex])
            continue;

        visited[vertex] = 1;
        ret.first++;
        ret.second = nowTime;
        for (pair<int, int> adv : adj[vertex]) {
            if (visited[adv.second])
                continue;
            pq.emplace(nowTime + adv.first, adv.second);
        }

    }
    
    return ret;
}

int main(){
    cin >> T;
    while (T--){
        cin >> n >> d >> c;
        vector<vector<pair<int, int>>> adj(n + 1);
        for (int i = 0; i < d; ++i) {
            cin >> a >> b >> s;
            adj[b].emplace_back(s, a);
        }
        pair<int, int> res = mst(adj);
        cout << res.first << " " << res.second << "\n";
    }

    return 0;
}*/
