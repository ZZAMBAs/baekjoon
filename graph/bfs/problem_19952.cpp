/*
//
// Created by cho on 23. 2. 16.
//
#include <iostream>
#include <queue>

using namespace std;

int T, H, W, O, F, Xs, Ys, Xe, Ye;
int board[101][101], dr[4] = {1, -1, 0, 0}, dc[4] = {0, 0, 1, -1};
bool visited[101][101];

bool bfs(){
    fill(visited[0], visited[0] + 101 * 101, false);
    queue<pair<int, int>> q;
    q.push({Xs, Ys});
    visited[Xs][Ys] = true;
    while (F >= 0){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            pair<int, int> cur = q.front();
            q.pop();
            if (cur.first == Xe && cur.second == Ye)
                return true;

            for (int j = 0; j < 4 && F; ++j) {
                int nextX = cur.first + dr[j];
                int nextY = cur.second + dc[j];
                if (nextX > 0 && nextX <= H && nextY > 0 && nextY <= W && !visited[nextX][nextY]
                        && board[nextX][nextY] - board[cur.first][cur.second] <= F){
                    visited[nextX][nextY] = true;
                    q.push({nextX, nextY});
                }
            }

        }
        F--;
    }
    
    return false;
}

int main(){
    cin >> T;
    while (T--){
        cin >> H >> W >> O >> F >> Xs >> Ys >> Xe >> Ye;
        fill(board[0], board[0] + 101 * 101, 0);
        int obsX, obsY, obsH;
        for (int i = 0; i < O; ++i) {
            cin >> obsX >> obsY >> obsH;
            board[obsX][obsY] = obsH;
        }
        if (bfs())
            cout << "잘했어!!\n";
        else
            cout << "인성 문제있어??\n";
    }
    
    return 0;
}*/
