/*
//
// Created by AppDeveloper on 2022-09-12.
// 그래프 탐색 혼동 문제. 경로는 2^63 이하로 나올 수 있고, dfs는 반드시 시간초과, bfs는 반드시 메모리 초과가 나게된다.
#include <iostream>

using namespace std;

int board[100][100], deadEnd;
long long team, sec[100][100];

long long fdp(int r, int c){
    if (sec[r][c])
        return sec[r][c];

    for (int i = r - 1; i >= 0; --i) {
        if (board[i][c] == r - i)
            sec[r][c] += fdp(i, c);
    }
    for (int i = c - 1; i >= 0; --i) {
        if (board[r][i] == c - i)
            sec[r][c] += fdp(r, i);
    }
    return sec[r][c];
}

int main(){
    cin >> deadEnd;
    for (int i = 0; i < deadEnd; ++i)
        for (int j = 0; j < deadEnd; ++j)
            cin >> board[i][j];

    sec[0][0] = 1;
    cout << fdp(deadEnd - 1, deadEnd - 1);
    return 0;
}*/
