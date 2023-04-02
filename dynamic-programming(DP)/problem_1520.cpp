/*
//
// Created by cho on 23. 2. 20.
// dp 초기화에 따른 시간초과 주의: https://simsimjae.tistory.com/23
#include <iostream>

using namespace std;

int M, N, board[500][500], dp[500][500];
int dr[4] = {1, -1, 0, 0}, dc[4] = {0, 0, 1, -1};

int fdp(int r, int c){
    if (dp[r][c] >= 0)
        return dp[r][c];

    dp[r][c] = 0;
    for (int i = 0; i < 4; ++i) {
        int prevR = r + dr[i];
        int prevC = c + dc[i];
        if (prevR >= 0 && prevR < M && prevC >= 0 && prevC < N && board[prevR][prevC] > board[r][c]){
            dp[r][c] += fdp(prevR, prevC);
        }
    }
    return dp[r][c];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie();
    fill(dp[0], dp[0] + 500 * 500, -1);
    dp[0][0] = 1;

    cin >> M >> N;
    for (int i = 0; i < M; ++i)
        for (int j = 0; j < N; ++j)
            cin >> board[i][j];

    cout << fdp(M - 1, N - 1);
    return 0;
}*/
