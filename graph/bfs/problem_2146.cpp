/*
//
// Created by cho on 23. 6. 12.
// 0이 인접해도 외곽이 아닐 수 있다!
#include <iostream>
#include <queue>

using namespace std;

int N, arr[100][100], color = 2, res = 10000;
int dr[4] = {-1, 0, 1, 0}, dc[4] = {0, 1, 0, -1};
bool isFrame[100][100];

void divideIsland(int r, int c){
    queue<pair<int, int>> q;
    q.emplace(r, c);
    bool visited[100][100];
    fill(visited[0], visited[0] + 100 * 100, false);
    visited[r][c] = true;
    arr[r][c] = color;
    while (!q.empty()){
        int curRow = q.front().first;
        int curCol = q.front().second;
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nextR = curRow + dr[i];
            int nextC = curCol + dc[i];
            if (nextR >= 0 && nextR < N && nextC >= 0 && nextC < N && !visited[nextR][nextC]){
                if (arr[nextR][nextC]) {
                    visited[nextR][nextC] = true;
                    arr[nextR][nextC] = color;
                    q.emplace(nextR, nextC);
                }
                else
                    isFrame[curRow][curCol] = true;
            }
        }
    }
    
}

int bfs(int r, int c){
    int level = 0, thisColor = arr[r][c];
    queue<pair<int, int>> q;
    q.emplace(r, c);
    bool visited[100][100];
    fill(visited[0], visited[0] + 100 * 100, false);
    visited[r][c] = true;
    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int curRow = q.front().first;
            int curCol = q.front().second;
            q.pop();

            for (int j = 0; j < 4; ++j) {
                int nextR = curRow + dr[j];
                int nextC = curCol + dc[j];
                if (nextR >= 0 && nextR < N && nextC >= 0 && nextC < N && !visited[nextR][nextC]){
                    if (!arr[nextR][nextC]){
                        visited[nextR][nextC] = true;
                        q.emplace(nextR, nextC);
                    }
                    else if (arr[nextR][nextC] != thisColor)
                        return level;
                }
            }
        }
        level++;
    }
    return 10000;
}

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (arr[i][j] == 1) {
                divideIsland(i, j);
                color++;
            }
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (isFrame[i][j])
                res = min(bfs(i, j), res);
        }
    }
    
    cout << res;
    return 0;
}*/
