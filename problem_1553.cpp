/*
//
// Created by cho on 23. 1. 25.
//
#include <iostream>

using namespace std;

int board[8][7], res, theBoard[8][7];
bool visited[28], checkBoard[8][7];
pair<int, int> dominoes[28];

void dfs(int r, int c){
    if (r > 7){
        res++;
        return;
    }

    if (c >= 7)
        dfs(r + 1, 0);
    else if (checkBoard[r][c])
        dfs(r, c + 1);
    else{
        for (int i = 0; i < 28; ++i) {
            if (!visited[i]){
                visited[i] = true;
                pair<int, int> &curD = dominoes[i];
                if (c + 1 < 7 && board[r][c] == curD.first && board[r][c + 1] == curD.second && !checkBoard[r][c + 1]){
                    checkBoard[r][c] = checkBoard[r][c + 1] = true;
                    theBoard[r][c] = curD.first;
                    theBoard[r][c + 1] = curD.second;
                    dfs(r, c + 2);
                    checkBoard[r][c] = checkBoard[r][c + 1] = false;
                }
                if (c + 1 < 7 && board[r][c] == curD.second && board[r][c + 1] == curD.first && !checkBoard[r][c + 1]){
                    checkBoard[r][c] = checkBoard[r][c + 1] = true;
                    theBoard[r][c] = curD.second;
                    theBoard[r][c + 1] = curD.first;
                    dfs(r, c + 2);
                    checkBoard[r][c] = checkBoard[r][c + 1] = false;
                }
                if (r + 1 < 8 && board[r][c] == curD.first && board[r + 1][c] == curD.second && !checkBoard[r + 1][c]){
                    checkBoard[r][c] = checkBoard[r + 1][c] = true;
                    theBoard[r][c] = curD.first;
                    theBoard[r + 1][c] = curD.second;
                    dfs(r, c + 1);
                    checkBoard[r][c] = checkBoard[r + 1][c] = false;
                }
                if (r + 1 < 8 && board[r][c] == curD.second && board[r + 1][c] == curD.first && !checkBoard[r + 1][c]){
                    checkBoard[r][c] = checkBoard[r + 1][c] = true;
                    theBoard[r][c] = curD.second;
                    theBoard[r + 1][c] = curD.first;
                    dfs(r, c + 1);
                    checkBoard[r][c] = checkBoard[r + 1][c] = false;
                }
                visited[i] = false;
            }
        }
    }
}

int main(){
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 7; ++j) {
            scanf("%1d", &board[i][j]);
        }
    }
    int dominoesIdx = 0;
    for (int i = 0; i <= 6; ++i)
        for (int j = i; j <= 6; ++j)
            dominoes[dominoesIdx++] = {i, j};

    dfs(0, 0);

    cout << res / 128; // 128이 곱해지는 이유?
    return 0;
}*/
