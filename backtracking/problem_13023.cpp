/*
//
// Created by AppDeveloper on 2022-10-04.
//
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> children(2000);
int team;
bool visited[2000];

void dfs(int idx, int cnt){
    if (cnt == 5) {
        team = 1;
        return;
    }

    for (int next : children[idx]) {
        if (team == 1)
            return;
        if (!visited[next]){
            visited[next] = true;
            dfs(next, cnt + 1);
            visited[next] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M, a, b;
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        cin >> a >> b;
        children[a].emplace_back(b);
        children[b].emplace_back(a);
    }

    for (int i = 0; i < N && team != 1; ++i) {
        visited[i] = true;
        bfs(i, 1);
        visited[i] = false;
    }
    cout << team;
    return 0;
}*/
