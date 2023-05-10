/*
//
// Created by cho on 23. 5. 10.
// 자바 풀이: https://moonsbeen.tistory.com/227
// DFS 풀이: https://www.acmicpc.net/source/60507748
#include <iostream>
#include <queue>

using namespace std;

int R, C;
int cheese[100][100], hourBefore[100][100];
int dr[4] = {1, -1, 0, 0}, dc[4] = {0, 0, 1, -1};

int bfs(){
    int time = 0;
    bool sw;
    do {
        sw = false;
        time++;
        
        queue<pair<int, int>> q;
        q.emplace(0, 0);
        bool visited[100][100];
        fill(visited[0], visited[0] + 100 * 100, false);
        visited[0][0] = true;

        while (!q.empty()) {
            int qSize = q.size();
            for (int i = 0; i < qSize; ++i) {
                pair<int, int> cur = q.front();
                q.pop();

                for (int j = 0; j < 4; ++j) {
                    int nextR = cur.first + dr[j];
                    int nextC = cur.second + dc[j];
                    if (nextR >= 0 && nextR < R && nextC >= 0 && nextC < C && !visited[nextR][nextC]){
                        visited[nextR][nextC] = true;
                        if (cheese[nextR][nextC] == 1) {
                            cheese[nextR][nextC] = 0;
                            hourBefore[nextR][nextC] = time;
                            sw = true;
                        }
                        else
                            q.emplace(nextR, nextC);
                    }
                }
            }
        }
    } while (sw);
    return time - 1;
}

int main(){
    cin >> R >> C;
    for (int i = 0; i < R; ++i)
        for (int j = 0; j < C; ++j)
            cin >> cheese[i][j];

    int maxDepth = bfs(), resPart = 0;
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if (hourBefore[i][j] == maxDepth)
                resPart++;
        }
    }
    cout << maxDepth << "\n" << resPart;
    return 0;
}*/
