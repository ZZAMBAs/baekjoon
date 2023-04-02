/*
//
// Created by cho on 23. 2. 3.
//
#include <iostream>
#include <queue>

using namespace std;

int N, M, dr[4] = {1, -1, 0, 0}, dc[4] = {0, 0, 1, -1};
char board[1000][1000];

int bfs(){
    int visited[1000][1000]; // 도달하는 벽 개수.
    visited[0][0] = 0;
    fill(visited[0] + 1, visited[0] + 1000 * 1000, INT32_MAX);
    int dist = 1;
    queue<pair<int, int>> q;
    q.push({0, 0});
    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int curR = q.front().first;
            int curC = q.front().second;
            q.pop();

            if (curR == N - 1 && curC == M - 1)
                return dist;

            for (int j = 0; j < 4; ++j) {
                int nextR = curR + dr[j];
                int nextC = curC + dc[j];
                int nextBlock = visited[curR][curC] + (board[nextR][nextC] - 48);
                if (nextBlock > 1) // 벽 개수가 2 이상이 되면 방문 X
                    continue;
                if (nextR >= 0 && nextC >= 0 && nextR < N && nextC < M
                    && visited[nextR][nextC] > nextBlock){
                    visited[nextR][nextC] = nextBlock;
                    q.push({nextR, nextC});
                }
            }
        }
        dist++;
    }
    return -1;
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> board[i][j];

    cout << bfs();
    return 0;
}
*/
