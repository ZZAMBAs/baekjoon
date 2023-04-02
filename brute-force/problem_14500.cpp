/*
//
// Created by AppDeveloper on 2022-11-09.
// DFS 풀이: https://9967han.tistory.com/15 더 깔끔하다.
#include <iostream>
#include <queue>

using namespace std;

typedef struct tetromino{
    int row, col, num;
    int sum;
    vector<pair<int, int>> visited;

    tetromino(int row, int col, int sum) : row(row), col(col), sum(sum) {
        this->num = 1;
        this->visited.emplace_back(row, col);
    }

    bool isVisited(pair<int, int> v) {
        for (pair<int, int> p : visited)
            if (p == v)
                return true;
        return false;
    }
};

int N, M, board[500][500], team;
int dr[4] = {1, -1, 0, 0}, dc[4] = {0, 0, 1, -1};

void bfs(int row, int col){
    queue<tetromino> q;
    tetromino t(row, col, board[row][col]);
    q.push(t);
    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            tetromino cur = q.front();
            q.pop();

            if (cur.num == 4){
                team = max(team, cur.sum);
                continue;
            }

            for (int j = 0; j < 4; ++j) {
                int nextR = cur.row + dr[j];
                int nextC = cur.col + dc[j];
                bool isVisited = cur.isVisited({nextR, nextC});
                if (nextR >= 0 && nextR < N && nextC >= 0 && nextC < M && !isVisited){
                    tetromino next = cur;
                    next.row = nextR;
                    next.col = nextC;
                    next.sum += board[nextR][nextC];
                    next.visited.emplace_back(nextR, nextC);
                    next.num++;
                    q.push(next);
                }

                if (cur.num == 2 && isVisited){
                    tetromino next = cur;
                    if (dc[j] && next.row - 1 >= 0 && next.row + 1 < N){
                        next.num += 2;
                        next.sum += board[next.row - 1][next.col] + board[next.row + 1][next.col];
                        q.push(next);
                    }
                    else if (dr[j] && next.col - 1 >= 0 && next.col + 1 < M){
                        next.num += 2;
                        next.sum += board[next.row][next.col - 1] + board[next.row][next.col + 1];
                        q.push(next);
                    }
                }
            }

        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> board[i][j];

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            bfs(i, j); // NM *
    cout << team;
    return 0;
}*/
