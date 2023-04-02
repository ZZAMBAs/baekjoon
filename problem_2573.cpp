/*
//
// Created by AppDeveloper on 2022-11-30.
//
#include <iostream>
#include <queue>

using namespace std;

int board[300][300], N, M, K;
int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
vector<pair<int, int>> vCoor;
bool visited[300][300];

void bfs(pair<int, int> &cur){
    queue<pair<int, int>> q;
    q.push(cur);
    visited[cur.first][cur.second] = true;
    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            pair<int, int> now = q.front();
            q.pop();

            for (int j = 0; j < 4; ++j) {
                int nextC = now.second + dy[j];
                int nextR = now.first + dx[j];
                if (nextR >= 0 && nextR < N && nextC >= 0 && nextC < M && !visited[nextR][nextC] && board[nextR][nextC]){
                    visited[nextR][nextC] = true;
                    q.push({nextR, nextC});
                }
            }
            
        }
    }
    return;
}

void subtract(){
    vector<int> sub;
    int vSize = vCoor.size();
    for (int i = 0; i < vSize; ++i) {
        if (!board[vCoor[i].first][vCoor[i].second]) {
            sub.emplace_back(0);
            continue;
        }

        int s = 0;
        for (int j = 0; j < 4; ++j) {
            int nextC = vCoor[i].second + dy[j];
            int nextR = vCoor[i].first + dx[j];
            if (nextR >= 0 && nextR < N && nextC >= 0 && nextC < M && !board[nextR][nextC])
                s++;
        }
        sub.emplace_back(s);
    }

    for (int i = 0; i < vSize; ++i)
        board[vCoor[i].first][vCoor[i].second] = max(0, board[vCoor[i].first][vCoor[i].second] - sub[i]);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j) {
            cin >> board[i][j];
            if (board[i][j])
                vCoor.emplace_back(i, j);
        }
    while (true){
        fill(visited[0], visited[0] + 300 * 300, false);
        int pieces = 0;
        for (int i = 0; i < vCoor.size(); i++){
            pair<int, int> &cur = vCoor[i];
            if (!board[cur.first][cur.second] || visited[cur.first][cur.second])
                continue;
            else{
                pieces++;
                bfs(cur);
            }
        }
        if (pieces != 1) {
            if (pieces == 0)
                K = 0;
            break;
        }

        subtract();
        K++;
    }
    
    cout << K;
    return 0;
}*/
