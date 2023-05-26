/*
//
// Created by cho on 23. 5. 26.
//
#include <iostream>
#define UP 1
#define DOWN -1

using namespace std;

int R, C, T, board[50][50], upR, downR, res;
int dr[4] = {0, 1, 0, -1}, dc[4] = {1, 0, -1, 0}; // 동남서북

bool inRange(int cleanerR, int direction, int preR, int preC) {
    if (direction == UP)
        return preR >= cleanerR + direction || preR < 0 || preC >= C || preC < 0;
    else
        return preR <= cleanerR + direction || preR >= R || preC >= C || preC < 0;
}

void expandingHere(int r, int c, int temp[50][50]){
    int deleteDust = board[r][c] / 5;

    for (int i = 0; i < 4; ++i) {
        int nextR = r + dr[i];
        int nextC = c + dc[i];
        if (nextR >= 0 && nextR < R && nextC >= 0 && nextC < C
            && board[nextR][nextC] >= 0) {
            temp[nextR][nextC] += deleteDust;
            board[r][c] -= deleteDust;
        }
    }

}

void expanding(){
    int temp[50][50];
    fill(temp[0], temp[0] + 50 * 50, 0);
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if ((i == upR && j == 0) || (i == downR && j == 0))
                continue;
            expandingHere(i, j, temp);
        }
    }
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            board[i][j] += temp[i][j];
        }
    }

}

void windmill(int cleanerR, int direction){
    int r = cleanerR - direction, c = 0, nowD = 2 + direction;

    while (!(r == cleanerR && c == 1)){
        int preR = r + dr[nowD];
        int preC = c + dc[nowD];
        if (inRange(cleanerR, direction, preR, preC)) {
            nowD = (nowD + 4 + direction) % 4;
            continue;
        }
        board[r][c] = board[preR][preC];
        r = preR;
        c = preC;
    }
    board[cleanerR][1] = 0;
}

int main(){
    cin >> R >> C >> T;
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> board[i][j];
            if (board[i][j] == -1){
                if (!upR)
                    upR = i;
                else
                    downR = i;
            }
        }
    }

    while (T--){
        expanding();
        windmill(upR, UP);
        windmill(downR, DOWN);
    }

    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            res += max(0, board[i][j]);
        }
    }

    cout << res;
    return 0;
}*/
