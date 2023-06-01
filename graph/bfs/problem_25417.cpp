/*
//
// Created by cho on 23. 6. 1.
//
#include <iostream>
#include <queue>

using namespace std;

int r, c, board[5][5];
int dr[4] = {1, 0, -1, 0}, dc[4] = {0, 1, 0, -1};
bool visited[5][5];

bool inRange(int row, int col){
    if (row >= 0 && row < 5 && col >= 0 && col < 5)
        return true;
    return false;
}

int bfs(){
    int level = 0;
    queue<pair<int, int>> q;
    q.emplace(r, c);
    visited[r][c] = true;
    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            pair<int, int> cur = q.front();
            q.pop();

            if (board[cur.first][cur.second] == 1)
                return level;

            for (int j = 0; j < 4; ++j) {
                int nextR = cur.first + dr[j];
                int nextC = cur.second + dc[j];
                int nextRunR = nextR;
                int nextRunC = nextC;
                while (board[nextRunR][nextRunC] != 7){
                    if (!inRange(nextRunR, nextRunC) || board[nextRunR][nextRunC] == -1){
                        nextRunR -= dr[j];
                        nextRunC -= dc[j];
                        break;
                    }
                    nextRunR += dr[j];
                    nextRunC += dc[j];
                }

                if (inRange(nextR,nextC) && !visited[nextR][nextC] && board[nextR][nextC] != -1){
                    visited[nextR][nextC] = true;
                    q.emplace(nextR, nextC);
                }

                if (inRange(nextRunR, nextRunC) && !visited[nextRunR][nextRunC]){
                    visited[nextRunR][nextRunC] = true;
                    q.emplace(nextRunR, nextRunC);
                }

            }
        }

        level++;
    }
    return -1;
}

int main(){
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> board[i][j];
        }
    }
    cin >> r >> c;
    
    cout << bfs();
    return 0;
}*/
