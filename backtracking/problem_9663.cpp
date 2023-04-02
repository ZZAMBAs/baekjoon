/*
//
// Created by AppDeveloper on 2022-06-28.
// 대표적 백트래킹 문제
// https://chanhuiseok.github.io/posts/baek-1/ 일차원 배열로 푸는 방법.
#include <iostream>

using namespace std;

int n, board[14][14], able[14][14], cnt;

void backtracking(int x, int y, int ableBoard[][14]) {
    if (x == n - 1 && ableBoard[x][y] == 0){
        cnt++;
        return;
    }

    if (ableBoard[x][y] == 1)
        return;

    int ableBoardCopy[14][14];

    for (int i = 0; i < 14; ++i)
        for (int j = 0; j < 14; ++j)
            ableBoardCopy[i][j] = ableBoard[i][j];


    for (int i = 1; i < n - x; ++i) {
        ableBoardCopy[x + i][y] = 1;
        if (y + i < n)
            ableBoardCopy[x + i][y + i] = 1;
        if (y - i >= 0)
            ableBoardCopy[x + i][y - i] = 1;
    }

    for (int i = 0; i < n; ++i)
        backtracking(x + 1, i, ableBoardCopy);
}

int main(){
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
        backtracking(0, i, able);

    printf("%d", cnt);

    return 0;
}*/
