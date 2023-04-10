/*
//
// Created by cho on 23. 4. 10.
//
#include <iostream>
#include <queue>

using namespace std;

int bfs(int start, vector<vector<int>> *list, bool visited[]){
    int res = 0, level = 0;
    queue<int> q;
    q.push(start);
    while (!q.empty() && level < 2){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int cur = q.front();
            q.pop();

            for (auto & adv : (*list)[cur]) {
                if (!visited[adv]){
                    visited[adv] = true;
                    q.push(adv);
                    res++;
                }
            }

        }
        level++;
    }
    return res;
}

int main(){
    int N, m, a, b;
    vector<vector<int>> adj(501);
    bool visited[501] = {false, true, };
    fill(visited + 2, visited + 501, false);
    
    cin >> N >> m;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;
        adj[a].emplace_back(b);
        adj[b].emplace_back(a);
    }
    
    cout << bfs(1, &adj, visited);
    return 0;
}*/
