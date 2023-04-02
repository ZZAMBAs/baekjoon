/*
//
// Created by AppDeveloper on 2022-11-11.
//
#include <iostream>
#include <queue>

using namespace std;

int N, Q;
vector<vector<pair<int, int>>> adj(5001);

int bfs(int k, int v){
    int ret = 0;
    bool visited[5001];
    fill(visited, visited + 5001, false);
    queue<int> q;
    q.push(v);
    visited[v] = true;
    while (!q.empty()){
        int cur = q.front();
        q.pop();
        for (pair<int, int> adv : adj[cur]) {
            if (adv.second >= k && !visited[adv.first]){
                ret++;
                q.push(adv.first);
                visited[adv.first]= true;
            }
        }
    }
    
    return ret;
}

int main(){
    int p, q, r, k, v;
    cin >> N >> Q;
    for (int i = 0; i < N - 1; ++i) {
        cin >> p >> q >> r;
        adj[p].emplace_back(q, r);
        adj[q].emplace_back(p, r);
    }

    while (Q--){
        cin >> k >> v;
        cout << bfs(k, v) << "\n";
    }

    return 0;
}*/
