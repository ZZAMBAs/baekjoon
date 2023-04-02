/*
//
// Created by cho on 23. 3. 2.
//
#include <iostream>
#include <queue>

using namespace std;

int N, M, maze[50][50], maxDepth, res;
int dr[4] = {1, -1, 0, 0}, dc[4] = {0, 0, 1, -1};
bool visited[50][50];

void bfs(int r, int c){
    fill(visited[0], visited[0] + 50 * 50, false);
    int depth = 1, startVal = maze[r][c];
    queue<pair<int, int>> q;
    q.push({r, c});
    visited[r][c] = true;
    while (!q.empty()){
        int maxV = 0;
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            pair<int, int> cur = q.front();
            q.pop();
            
            maxV = max(maxV, startVal + maze[cur.first][cur.second]);

            for (int j = 0; j < 4; ++j) {
                int nextR = cur.first + dr[j];
                int nextC = cur.second + dc[j];
                if (nextR >= 0 && nextR < N && nextC >= 0 && nextC < M && !visited[nextR][nextC] && maze[nextR][nextC]){
                    visited[nextR][nextC] = true;
                    q.push({nextR, nextC});
                }
            }

        }
        if (maxDepth <= depth) {
            if (maxDepth == depth)
                res = max(res, maxV);
            else
                res = maxV;
            maxDepth = depth;
        }
        depth++;
    }
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> maze[i][j];
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (maze[i][j])
                bfs(i, j);
        }
    }
    
    cout << res;
    return 0;
}*/
