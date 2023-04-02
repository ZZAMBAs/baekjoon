/*
//
// Created by AppDeveloper on 2022-09-04.
//
#include <iostream>
#include <queue>

using namespace std;

int deadEnd, M, initBoard[8][8], resBoard[8][8], team;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
pair<int, int> w1, w2, w3;
vector<pair<int, int>> vi, wallCandidate;

void boardClr(){
    for (int i = 0; i < deadEnd; ++i)
        for (int j = 0; j < M; ++j)
            resBoard[i][j] = initBoard[i][j];
}

int calSafe(){
    int sum = 0;
    for (int i = 0; i < deadEnd; ++i)
        for (int j = 0; j < M; ++j)
            if (resBoard[i][j] == 0)
                sum++;
    return sum;
}

void bfs(){
    resBoard[w1.first][w1.second] = resBoard[w2.first][w2.second] = resBoard[w3.first][w3.second] = 1;
    queue<pair<int, int>> q;
    for (pair<int, int> v : vi)
        q.push(v);

    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int curR = q.front().first;
            int curC = q.front().second;
            q.pop();

            for (int j = 0; j < 4; ++j) {
                int nextR = curR + dx[j];
                int nextC = curC + dy[j];
                if (nextR >= 0 && nextR < deadEnd && nextC >= 0 && nextC < M && !resBoard[nextR][nextC]) {
                    resBoard[nextR][nextC] = 2;
                    q.push({nextR, nextC});
                }
            }
            
        }
    }
    return;
}

int main(){
    cin >> deadEnd >> M;
    for (int i = 0; i < deadEnd; ++i)
        for (int j = 0; j < M; ++j) {
            cin >> initBoard[i][j];
            if (initBoard[i][j] == 2)
                vi.emplace_back(i, j);
            else if (initBoard[i][j] == 0)
                wallCandidate.emplace_back(i, j);
        }

    int wSize = wallCandidate.size();
    for (int i = 0; i < wSize - 2; ++i) {
        w1 = wallCandidate[i];
        for (int j = i + 1; j < wSize - 1; ++j) {
            w2 = wallCandidate[j];
            for (int k = j + 1; k < wSize; ++k) {
                w3 = wallCandidate[k];
                boardClr();
                bfs();
                int safeNum = calSafe();
                if (safeNum > team)
                    team = safeNum;
            }
        }
    }

    cout << team;
    return 0;
}*/
