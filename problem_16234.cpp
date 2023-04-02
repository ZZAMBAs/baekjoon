/*
//
// Created by cho on 23. 1. 3.
//
#include <iostream>
#include <queue>

using namespace std;

int N, L, R, memory[50][50], alliance = 0, K;
int allianceCnt[2500]; // 각 동맹 개수
int allianceSum[2500]; // 각 동맹 인구 합
vector<vector<pair<int, int>>> alliances(2500); // 동맹 멤버들
int dr[4] = {1, -1, 0, 0}, dc[4] = {0, 0, 1, -1};
bool visited[50][50];

void bfs(int r, int c){
    queue<pair<int, int>> q;
    q.push({r, c});
    visited[r][c] = true;
    alliances[alliance].emplace_back(r, c);
    allianceCnt[alliance]++;
    allianceSum[alliance] += memory[r][c];
    while (!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nextR = cur.first + dr[i];
            int nextC = cur.second + dc[i];
            if (nextR >= 0 && nextR < N && nextC >= 0 && nextC < N && !visited[nextR][nextC]){
                int diff = abs(memory[nextR][nextC] - memory[cur.first][cur.second]);
                if (diff >= L && diff <= R) {
                    visited[nextR][nextC] = true;
                    q.push({nextR, nextC});
                    alliances[alliance].emplace_back(nextR, nextC);
                    allianceCnt[alliance]++;
                    allianceSum[alliance] += memory[nextR][nextC];
                }

            }
        }
    }
    alliance++;
    return;
}

void checkingAlliance(){
    alliance = 0;
    fill(allianceSum, allianceSum + 2500, 0);
    fill(allianceCnt, allianceCnt + 2500, 0);
    fill(visited[0], visited[0] + 2500, false);
    for (int i = 0; i < 2500; ++i)
        alliances[i].clear();

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            if (!visited[i][j])
                bfs(i, j);
}

void move(){
    for (int i = 0; i < alliance; ++i) {
        int p = allianceSum[i] / allianceCnt[i];
        for (pair<int, int> v : alliances[i])
            memory[v.first][v.second] = p;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> L >> R;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> memory[i][j];

    checkingAlliance();
    while (alliance != N * N){
        K++;
        move();
        checkingAlliance();
    }

    cout << K;
    return 0;
}*/
