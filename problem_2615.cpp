/*
//
// Created by AppDeveloper on 2022-12-08.
//
#include <iostream>
#include <queue>

using namespace std;

int arr[19][19], K, resR = 20, resC = 20;
int dr[8] = {0, 0, 1, -1, 1, -1, 1, -1};
int dc[8] = {1, -1, 1, -1, 0, 0, -1, 1};
vector<pair<int, int>> b, w;
bool visited[19][19];

bool bfs(int r, int c, int color, int d){
    int sum = 1;
    fill(visited[0], visited[0] + 19 * 19, false);
    queue<pair<int, int>> q;
    q.push({r,c});
    visited[r][c] = true;
    while (!q.empty()){
        int curR = q.front().first;
        int curC = q.front().second;
        q.pop();
        for (int i = d * 2; i < (d * 2) + 2; ++i) {
            int nextR = curR + dr[i];
            int nextC = curC + dc[i];
            if (nextR >= 0 && nextR < 19 && nextC >= 0 && nextC < 19
                    && !visited[nextR][nextC] && arr[nextR][nextC] == color){
                sum++;
                visited[nextR][nextC] = true;
                q.push({nextR, nextC});
            }
        }
    }

    if (sum == 5)
        return true;
    return false;
}

int main(){
    for (int i = 0; i < 19; ++i) {
        for (int j = 0; j < 19; ++j) {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
                b.emplace_back(i, j);
            else if (arr[i][j] == 2)
                w.emplace_back(i, j);
        }
    }

    for (pair<int, int> black : b) {
        for (int i = 0; i < 4; i++) {
            if(bfs(black.first, black.second, 1, i)){
                K = 1;
                if (resC > black.second) {
                    resR = black.first;
                    resC = black.second;
                }
                else if (resC == black.second)
                    resR = min(resR, black.first);
            }
        }
    }
    for (pair<int, int> white : w) {
        for (int i = 0; i < 4; i++) {
            if(bfs(white.first, white.second, 2, i)) {
                K = 2;
                if (resC > white.second) {
                    resR = white.first;
                    resC = white.second;
                }
                else if (resC == white.second)
                    resR = min(resR, white.first);
            }
        }
    }

    cout << K;
    if (K != 0)
        cout << "\n" << resR + 1 << " " << resC + 1;
    return 0;
}*/
