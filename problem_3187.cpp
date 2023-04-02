/*
//
// Created by AppDeveloper on 2022-08-23.
//
#include <iostream>
#include <queue>

using namespace std;

int R, cost, sheepNum, wolvesNum;
char board[250][250];
bool visited[250][250];
vector<pair<int, int>> searchIdx;

void bfs(){
    int searchSize = searchIdx.size();
    for (int i = 0; i < searchSize; ++i) {
        if (visited[searchIdx[i].first][searchIdx[i].second])
            continue;
        int s = 0, w = 0;
        int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
        queue<pair<int, int>> q;
        q.push(searchIdx[i]);

        while(!q.empty()){
            int qSize = q.size();
            for (int j = 0; j < qSize; ++j) {
                int r = q.front().first;
                int c = q.front().second;
                q.pop();
                if (visited[r][c])
                    continue;
                
                visited[r][c] = true;
                if (board[r][c] == 'v')
                    w++;
                if (board[r][c] == 'k')
                    s++;

                for (int k = 0; k < 4; ++k) {
                    int newR = r + dx[k];
                    int newC = c + dy[k];
                    if (newR >= 0 && newR < R && newC >= 0 && newC < cost)
                        q.push({newR, newC});
                }
            }

        }
        if (s > w)
            wolvesNum -= w;
        else
            sheepNum -= s;

    }
    return;
}

int main(){
    cin >> R >> cost;
    for (int i = 0; i < R; ++i)
        for (int j = 0; j < cost; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 'v') {
                searchIdx.push_back({i, j});
                wolvesNum++;
            }
            else if (board[i][j] == 'k') {
                searchIdx.push_back({i, j});
                sheepNum++;
            }
            else if (board[i][j] == '#')
                visited[i][j] = true;
        }

    bfs();

    cout << sheepNum << " " << wolvesNum;
    return 0;
}*/
