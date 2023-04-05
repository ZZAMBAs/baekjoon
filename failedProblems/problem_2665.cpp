/*
//
// Created by cho on 23. 3. 3. 재시도 23. 4. 5
// 여러 풀이가 있다. bfs (0-1), dijkstra 등
#include <iostream>
#include <queue>

using namespace std;

int n;
int boardNum[50][50];
int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
char board[50][50];

int bfs(){
    queue<pair<int, int>> q;
    q.emplace(0, 0);
    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            pair<int, int> cur = q.front();
            q.pop();
            for (int j = 0; j < 4; ++j) {
                int nextR = cur.first + dx[j];
                int nextC = cur.second + dy[j];
                if (nextR >= 0 && nextR < n && nextC >= 0 && nextC < n
                && boardNum[nextR][nextC] > boardNum[cur.first][cur.second]){
                    q.emplace(nextR, nextC);
                    boardNum[nextR][nextC] = boardNum[cur.first][cur.second] + (board[nextR][nextC] + 1) % 2;
                }
            }
        }
    }
    return boardNum[n - 1][n - 1];
}

int main(){
    fill(boardNum[0] + 1, boardNum[0] + 50 * 50, 2500);
    cin >> n;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            cin >> board[i][j];
            board[i][j] -= 48;
        }

    cout << bfs();
    return 0;
}
*/
