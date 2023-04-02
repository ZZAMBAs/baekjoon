/*
//
// Created by AppDeveloper on 2022-08-28.
//
#include <iostream>
#define NORTH 0
#define EAST 1
#define SOUTH 2
#define WEST 3
#define WALL 4
#define BLANK 5

using namespace std;

int deadEnd, M, source, board[50][50], team;

void executeCleaning(int r, int c, int d){
    if (board[r][c] == BLANK) {
        board[r][c]++;
        team++;
    }

    int nextD = (d + 3) % 4;
    int nextR = r, nextC = c;
    if (nextD == NORTH)
        nextR -= 1;
    if (nextD == EAST)
        nextC += 1;
    if (nextD == SOUTH)
        nextR += 1;
    if (nextD == WEST)
        nextC -= 1;

    if (board[r + 1][c] != BLANK && board[r - 1][c] != BLANK &&
            board[r][c + 1] != BLANK && board[r][c - 1] != BLANK){ // 4방향 전부 청소 또는 벽
        if (d == NORTH)
            r += 1;
        if (d == EAST)
            c -= 1;
        if (d == SOUTH)
            r -= 1;
        if (d == WEST)
            c += 1;

        if (board[r][c] != WALL)
            executeCleaning(r, c, d);
        else
            return;
    }
    else if (board[nextR][nextC] == BLANK) // 공간 있고 청소 안되어 있음.
        executeCleaning(nextR, nextC, nextD);
    else // 공간 없음
        executeCleaning(r, c, nextD);

    return;
}

int main(){
    int r, c, d;
    cin >> deadEnd >> M;
    cin >> r >> c >> d;
    for (int i = 0; i < deadEnd; ++i)
        for (int j = 0; j < M; ++j) {
            cin >> source;
            if (source == 0)
                board[i][j] = BLANK;
            else
                board[i][j] = WALL;
        }
    
    executeCleaning(r, c, d);
    
    cout << team;
    return 0;
}*/
