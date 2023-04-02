/*
//
// Created by AppDeveloper on 2022-10-08.
//
#include <iostream>
#include <queue>

using namespace std;

int N, R, Q, a, b;
vector<vector<int>> children(100001), c(100001);
vector<int> p(100001), sec(100001);

void bfs(int idx){
    bool visited[100001];
    fill(visited, visited + 100001, false);
    queue<int> q;
    q.push(idx);
    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int cur = q.front();
            q.pop();
            visited[cur] = true;

            for (int adjV : children[cur]) {
                if (!visited[adjV]){
                    c[cur].emplace_back(adjV);
                    p[adjV] = cur;
                    q.push(adjV);
                }
            }

        }    
    }
    return;
}

int fdp(int idx){
    if (sec[idx] >= 0)
        return sec[idx];

    sec[idx]++;
    for (int child : c[idx])
        sec[idx] += fdp(child);
    sec[idx]++;
    return sec[idx];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N >> R >> Q;
    fill(sec.begin(), sec.begin() + N + 1, -1);
    for (int i = 1; i <= N - 1; ++i) { // N
        cin >> a >> b;
        children[a].emplace_back(b);
        children[b].emplace_back(a);
    }
    p[R] = 0;
    bfs(R);

    for (int i = 0; i < Q; ++i) {
        cin >> a;
        cout << fdp(a) << "\n";
    }

    return 0;
}*/
