/*
//
// Created by AppDeveloper on 2022-12-23.
//

#include <iostream>
#include <queue>

using namespace std;

typedef struct hosuk{
    int r;
    int c;
    int sum;
    hosuk(int r, int c, int sum) : r(r), c(c), sum(sum) {}
}hosuk;

int N, M, Sx, Sy, Ex, Ey, board[101][101], boardMin[101][101][3];

int bfs(pair<int, int> start, pair<int, int> end){
    int k = 1;
    boardMin[start.first][start.second][1] = 0;
    queue<hosuk> q;
    q.push(hosuk(start.first, start.second, 0));
    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            hosuk cur = q.front();
            q.pop();
            // boardMin[cur.r][cur.c][k] = min(boardMin[cur.r][cur.c][k], cur.sum);

            if (k == 1 || !k){
                int dR[2] = {1, -1};
                for (int j = 0; j < 2; ++j) {
                    int nextR = cur.r + dR[j];
                    if (nextR >= 0 && nextR < N && boardMin[nextR][cur.c][(k + 1) % 3] > cur.sum + board[nextR][cur.c]) {
                        q.push(hosuk(nextR, cur.c, cur.sum + board[nextR][cur.c]));
                        boardMin[nextR][cur.c][(k + 1) % 3] = cur.sum + board[nextR][cur.c];
                    }
                }
            }
            if (k == 2 || !k){
                int dC[2] = {1, -1};
                for (int j = 0; j < 2; ++j) {
                    int nextC = cur.c + dC[j];
                    if (nextC >= 0 && nextC < M && boardMin[cur.r][nextC][(k + 1) % 3] > cur.sum + board[cur.r][nextC]) {
                        q.push(hosuk(cur.r, nextC, cur.sum + board[cur.r][nextC]));
                        boardMin[cur.r][nextC][(k + 1) % 3] = cur.sum + board[cur.r][nextC];
                    }
                }
            }

        }
        k = (k + 1) % 3;
    }
    return min(boardMin[end.first][end.second][0],
               min(boardMin[end.first][end.second][1], boardMin[end.first][end.second][2]));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    fill(boardMin[0][0], boardMin[0][0] + 101 * 101 * 3, INT32_MAX);
    cin >> N >> M >> Sx >> Sy >> Ex >> Ey;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j) {
            cin >> board[i][j];
            if (board[i][j] == -1)
                boardMin[i][j][0] = boardMin[i][j][1] = boardMin[i][j][2] = -1;
        }

    int K = bfs({Sx - 1, Sy - 1}, {Ex - 1, Ey - 1});

    if (K != INT32_MAX)
        cout << K;
    else
        cout << -1;
    return 0;
}*/