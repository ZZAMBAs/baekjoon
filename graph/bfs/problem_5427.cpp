/*
//
// Created by cho on 23. 5. 12.
//
#include <iostream>
#include <queue>

using namespace std;

int T, w, h, startW, startH;
int dr[4] = {1, -1, 0, 0}, dc[4] = {0, 0, 1, -1};
char building[1000][1000];
bool visited[1000][1000];

int bfs(int wi, int he, queue<pair<int, int>> fire){
    int level = 0;
    queue<pair<int, int>> sang;
    sang.emplace(he, wi);
    while (!sang.empty()){
        level++;
        const int fSize = fire.size();
        for (int i = 0; i < fSize; ++i) {
            const pair<int, int> curFire = fire.front();
            fire.pop();

            for (int j = 0; j < 4; ++j) {
                const int nextR = curFire.first + dr[j];
                const int nextC = curFire.second + dc[j];
                if (nextR >= 0 && nextR < h && nextC >= 0 && nextC < w && !visited[nextR][nextC]){
                    fire.emplace(nextR, nextC);
                    visited[nextR][nextC] = true;
                }
            }
        }

        const int sSize = sang.size();
        for (int i = 0; i < sSize; ++i) {
            const pair<int, int> curLoc = sang.front();
            sang.pop();
            if (curLoc.first == h - 1 || curLoc.first == 0 || curLoc.second == w - 1 || curLoc.second == 0)
                return level;

            for (int j = 0; j < 4; ++j) {
                const int nextR = curLoc.first + dr[j];
                const int nextC = curLoc.second + dc[j];
                if (nextR >= 0 && nextR < h && nextC >= 0 && nextC < w && !visited[nextR][nextC]){
                    sang.emplace(nextR, nextC);
                    visited[nextR][nextC] = true;
                }
            }
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> T;
    while (T--){
        queue<pair<int, int>> fire;
        fill(visited[0], visited[0] + 1000 * 1000, false);
        cin >> w >> h;
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                cin >> building[i][j];
                if (building[i][j] == '@') {
                    startW = j;
                    startH = i;
                } else if (building[i][j] == '*' || building[i][j] == '#') {
                    visited[i][j] = true;
                    if (building[i][j] == '*')
                        fire.emplace(i, j);
                }
            }
        }
        const int res = bfs(startW, startH, fire);
        if (res < 0)
            cout << "IMPOSSIBLE\n";
        else
            cout << res << "\n";
    }
    
    return 0;
}*/
