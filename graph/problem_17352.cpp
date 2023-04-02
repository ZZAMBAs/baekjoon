/*
//
// Created by cho on 23. 2. 12.
// 최적의 풀이는 Union-Find. (Union도 필요 없는): https://www.acmicpc.net/source/54957424
//
#include <iostream>
#include <queue>

using namespace std;

int N, res, i1 = 2, i2;
vector<vector<int>> adj(300001);
bool visited[300001];

void bfs(int start){
    queue<int> q;
    visited[i1] = true;
    q.push(start);
    while (!q.empty()){
        int cur = q.front();
        q.pop();
        for(int adv : adj[cur])
            if (!visited[adv]){
                visited[adv] = true;
                q.push(adv);
            }
    }
}

int main(){
    cin >> N;
    for (int i = 0; i < N - 2; ++i) {
        cin >> i1 >> i2;
        adj[i1].push_back(i2);
        adj[i2].push_back(i1);
    }
    bfs(i1);

    for (int i = 1; i <= N; ++i) {
        if (!visited[i]){
            res = i;
            break;
        }
    }

    cout << i1 << " " << res;
    return 0;
}*/
