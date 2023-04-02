/*
//
// Created by cho on 23. 3. 28.
//
#include <iostream>
#include <queue>

using namespace std;

int N, M, K, board[100][100];
int dr[4] = {1, -1, 0, 0}, dc[4] = {0, 0, 1, -1};
bool visited[100][100];

void bfs(int r, int c){
    int cnt = 1;
    queue<pair<int, int>> q;
    q.push({r, c});
    visited[r][c] = true;
    while (!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nextR = cur.first + dr[i];
            int nextC = cur.second + dc[i];
            if (nextR >= 0 && nextR < N && nextC >= 0 && nextC < N && board[nextR][nextC] == 0 && !visited[nextR][nextC]){
                q.push({nextR, nextC});
                cnt++;
                visited[nextR][nextC] = true;
            }
        }
    }
    M -= cnt / K;
    if (cnt % K)
        M--;
}

int main(){
    cin >> N >> M >> K;
    int initM = M;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (board[i][j] == 0 && !visited[i][j])
                bfs(i, j);
        }
    }

    if (M >= 0 && initM != M)
        cout << "POSSIBLE\n" << M;
    else
        cout << "IMPOSSIBLE";
    return 0;
}*/
