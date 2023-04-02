/*
//
// Created by cho on 23. 2. 19.
//
#include <iostream>
#include <queue>

using namespace std;

char board[50][50];
int w, h, res, dr[4] = {1, -1, 0, 0}, dc[4] = {0, 0, 1, -1};
bool visited[50][50];

int bfs(int r, int c){
    int level = -1;
    queue<pair<int, int>> q;
    q.push({r, c});
    visited[r][c] = true;
    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            pair<int, int> cur = q.front();
            q.pop();

            for (int j = 0; j < 4; ++j) {
                int nextR = cur.first + dr[j];
                int nextC = cur.second + dc[j];
                if (nextR >= 0 && nextR < w && nextC >= 0 && nextC < h &&
                !visited[nextR][nextC] && board[nextR][nextC] == 'L'){
                    visited[nextR][nextC] = true;
                    q.push({nextR, nextC});
                }
            }

        }
        level++;
    }
    return level;
}

int main(){
    cin >> w >> h;
    for (int i = 0; i < w; ++i)
        for (int j = 0; j < h; ++j)
            cin >> board[i][j];

    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < h; ++j) {
            if (board[i][j] == 'W')
                continue;
            
            fill(visited[0], visited[0] + 50 * 50, false);
            res = max(res, bfs(i, j));
        }
    }

    cout << res;
    return 0;
}*/
