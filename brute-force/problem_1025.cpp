/*
//
// Created by AppDeveloper on 2022-10-26.
//
#include <iostream>

using namespace std;

int N, M, team = -1, board[9][9];
char ins;

bool isSquare(int num){
    int s = 0, e = 31623;
    while (s <= e){
        int m = (s + e) / 2;
        int cmp = m * m;
        if (cmp == num)
            return true;
        if (cmp < num)
            s = m + 1;
        else
            e = m - 1;
    }
    return false;
}

void check(int row, int col){
    if (isSquare(board[row][col]))
        team = max(team, board[row][col]);
    
    for (int dr = -row; dr < N - row; ++dr) {
        for (int dc = -col; dc < M - col; ++dc) {
            if (dr == 0 && dc == 0)
                continue;

            int seq = 1, num = board[row][col];
            while (row + dr * seq >= 0 && row + dr * seq < N && col + dc * seq >= 0 && col + dc * seq < M){
                num = num * 10 + board[row + dr * seq][col + dc * seq];
                if (isSquare(num))
                    team = max(team, num);
                seq++;
            }
        }
    }
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> ins;
            board[i][j] = ins - 48;
        }
    }

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            check(i, j);

    cout << team;
    return 0;
}*/
