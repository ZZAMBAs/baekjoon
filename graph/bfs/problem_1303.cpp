/*
//
// Created by cho on 23. 2. 21.
//
#include <iostream>
#include <queue>

using namespace std;

int N, M, myStr, oppStr;
int dr[4] = {1, -1, 0, 0}, dc[4] = {0, 0, 1, -1};
char board[100][100];
bool visited[100][100];

void bfs(int r, int c){
    bool sw;
    int num = 0;
    visited[r][c] = true;
    queue<pair<int, int>> q;
    q.push({r, c});
    sw = (board[r][c] == 'W' ? true : false);
    while (!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();
        num++;

        for (int i = 0; i < 4; ++i) {
            int nextR = cur.first + dr[i];
            int nextC = cur.second + dc[i];
            if (nextR >= 0 && nextR < M && nextC >= 0 && nextC < N && !visited[nextR][nextC]
            && board[cur.first][cur.second] == board[nextR][nextC]){
                visited[nextR][nextC] = true;
                q.push({nextR, nextC});
            }
        }
    }
    if (sw)
        myStr += num * num;
    else
        oppStr += num * num;
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (!visited[i][j])
                bfs(i, j);
        }
    }
    
    cout << myStr << " " << oppStr;
    return 0;
}*/
