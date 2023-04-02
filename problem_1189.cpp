/*
//
// Created by AppDeveloper on 2022-08-07.
// 백트래킹 + DFS
#include <iostream>

using namespace std;

int R, cost, K, team;
char road[5][5];
int dx[4] = {1, -1, 0 , 0}, dy[4] = {0, 0, 1, -1};
bool visited[5][5];

void dfs(int curR, int curC, int dist){
    if (road[curR][curC] == 'T')
        return;

    dist++;
    visited[curR][curC] = true;

    if (curR == 0 && curC == cost - 1 && dist == K) {
        team++;
        return;
    }

    for (int i = 0; i < 4; ++i) {
        if (curR + dx[i] < 0 || curR + dx[i] >= R || curC + dy[i] < 0 || curC + dy[i] >= cost || visited[curR + dx[i]][curC + dy[i]])
            continue;
        dfs(curR + dx[i], curC + dy[i], dist);
        visited[curR + dx[i]][curC + dy[i]] = false;
    }
}

int main(){
    cin >> R >> cost >> K;

    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < cost; ++j) {
            cin >> road[i][j];
        }
    }

    bfs(R - 1, 0, 0);

    cout << team;

    return 0;
}*/
