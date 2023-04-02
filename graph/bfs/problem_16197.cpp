/*
//
// Created by cho on 23. 2. 10.
//
#include <iostream>
#include <queue>

using namespace std;

int N, M, dr[4] = {1, -1, 0, 0}, dc[4] = {0, 0, 1, -1};
char board[21][21];
pair<int, int> coins[2];
bool visited[21][21][21][21];

bool isVisited(pair<int, int> pair1, pair<int, int> pair2){
    if (visited[pair1.first][pair1.second][pair2.first][pair2.second])
        return true;
    visited[pair1.first][pair1.second][pair2.first][pair2.second] = true;
    return false;
}

int bfs(){
    int cnt = 0;
    queue<pair<pair<int, int>, pair<int, int>>> q;
    q.push({
        {coins[0].first, coins[0].second}, {coins[1].first, coins[1].second}
    });

    while (!q.empty()){
        cnt++;

        if (cnt > 10)
            break;

        int qSize = q.size();

        for (int i = 0; i < qSize; ++i) {
            pair<int, int> cur[2] = {q.front().first, q.front().second};
            q.pop();

            for (int j = 0; j < 4; ++j) {
                int fall = 0;
                pair<int, int> next[2];
                
                for (int k = 0; k < 2; ++k) {
                    int nextR = cur[k].first + dr[j];
                    int nextC = cur[k].second + dc[j];

                    if (nextR >= 0 && nextR < N && nextC >= 0 && nextC < M && board[nextR][nextC] == '#')
                        next[k] = {cur[k].first, cur[k].second};
                    else
                        next[k] = {nextR, nextC};
                    
                    if (next[k].first < 0 || next[k].first >= N || next[k].second < 0 || next[k].second >= M)
                        fall++;
                }

                if (fall == 1)
                    return cnt;
                else if (!fall && next[0] != next[1] && !isVisited(next[0], next[1])){
                    q.push({
                        next[0], next[1]
                    });
                }
            }
        }

    }
    return -1;
}

int main(){
    int coinIdx = 0;
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 'o')
                coins[coinIdx++] = {i, j};
        }
    }
    visited[coins[0].first][coins[0].second][coins[1].first][coins[1].second] = true;
    cout << bfs();
    return 0;
}*/
