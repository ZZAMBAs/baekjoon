/*
//
// Created by cho on 23. 2. 24.
// 가로조각, 세로조각 분류를 비트마스킹으로도 할 수 있다: https://code-lab1.tistory.com/101, https://lemonlemon.tistory.com/9
#include <iostream>
#define ROW 1
#define COL -1

int N, M, paper[4][4], res;
bool visited[4][4];

bool checking(int r, int c, int cnt, int direction){
    if (direction == ROW && c + cnt < M){
        for (int i = 0; i <= cnt; ++i) {
            if (visited[r][c + i])
                return false;
        }
        return true;
    }else if (direction == COL && r + cnt < N){
        for (int i = 0; i <= cnt; ++i) {
            if (visited[r + i][c])
                return false;
        }
        return true;
    }
    return false;
}

void dfs(int r, int c, int sum, int visitNum){
    if (visitNum == N * M){
        res = std::max(res, sum);
        return;
    }
    if (c >= M){
        dfs(r + 1, 0, sum, visitNum);
        return;
    }
    if (visited[r][c]){
        dfs(r, c + 1, sum, visitNum);
        return;
    }

    // 가로
    for (int i = M - 1; i > 0; --i) {
        if (checking(r, c, i, ROW)){
            int tempSum = 0;
            for (int j = 0; j <= i; ++j) {
                visited[r][c + j] = true;
                tempSum = tempSum * 10 + paper[r][c + j];
            }
            dfs(r, c + i + 1, sum + tempSum, visitNum + i + 1);
            for (int j = 0; j <= i; ++j)
                visited[r][c + j] = false;
        }
    }

    // 세로
    for (int i = N - 1; i > 0; --i) {
        if (checking(r, c, i, COL)){
            int tempSum = 0;
            for (int j = 0; j <= i; ++j) {
                visited[r + j][c] = true;
                tempSum = tempSum * 10 + paper[r + j][c];
            }
            dfs(r, c + 1, sum + tempSum, visitNum + i + 1);
            for (int j = 0; j <= i; ++j)
                visited[r + j][c] = false;
        }
    }

    // 점
    visited[r][c] = true;
    dfs(r, c + 1, sum + paper[r][c], visitNum + 1);
    visited[r][c] = false;
}

int main(){
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf("%1d", &paper[i][j]);
        }
    }

    dfs(0, 0, 0, 0);

    printf("%d", res);
    return 0;
}*/
