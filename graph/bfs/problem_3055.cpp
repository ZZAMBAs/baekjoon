/*
//
// Created by cho on 23. 6. 28.
//
#include <iostream>
#include <queue>

using namespace std;

int R, C;
int dr[4] = {1, 0, -1, 0}, dc[4] = {0, 1, 0, -1};
char board[50][50];
int visited[50][50]; // 0: 안 지나감 1: S가 지나감 2: 물 혹은 돌
pair<int, int> dest;
queue<pair<int, int>> pool, hedgehog;

void checkSide(int r, int c, queue<pair<int, int>> &q, int restrict){
    for (int j = 0; j < 4; ++j) {
        int nextR = r + dr[j];
        int nextC = c + dc[j];
        if (nextR >= 0 && nextR < R && nextC >= 0 && nextC < C
            && visited[nextR][nextC] < restrict){
            if (restrict == 1 || (restrict == 2 && board[nextR][nextC] != 'D')) {
                q.emplace(nextR, nextC);
                visited[nextR][nextC] = restrict;
            }
        }
    }
}

int bfs(){
    int level = 0;

    while (!hedgehog.empty()){

        if (!pool.empty()){
            int pSize = pool.size();
            for (int i = 0; i < pSize; ++i) {
                int nowWaterRow = pool.front().first;
                int nowWaterCol = pool.front().second;
                pool.pop();

                checkSide(nowWaterRow, nowWaterCol, pool, 2);
            }
        }

        int hSize = hedgehog.size();
        for (int i = 0; i < hSize; ++i) {
            int nowHedgehogRow = hedgehog.front().first;
            int nowHedgehogCol = hedgehog.front().second;
            hedgehog.pop();

            if (dest.first == nowHedgehogRow && dest.second == nowHedgehogCol)
                return level;

            checkSide(nowHedgehogRow, nowHedgehogCol, hedgehog, 1);
        }
        
        level++;
    }
    return -1;
}

int main(){
    cin >> R >> C;
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 'D')
                dest = {i, j};
            else if (board[i][j] == '*') {
                pool.emplace(i, j);
                visited[i][j] = 2;
            }
            else if (board[i][j] == 'S') {
                hedgehog.emplace(i, j);
                visited[i][j] = 1;
            }
            else if (board[i][j] == 'X')
                visited[i][j] = 2;
        }
    }
    int res = bfs();
    if (res > 0)
        cout << res;
    else
        cout << "KAKTUS";
    return 0;
}*/
