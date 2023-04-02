/*
//
// Created by AppDeveloper on 2022-07-30.
//
#include <iostream>
#include <queue>

using namespace std;

int n, K, S, X, Y, test[200][200];
vector<vector<pair<int, int>>> virus(1001);

void bfs(int sec){
    int curSec = 0;
    queue<pair<int, int>> q;
    for (int i = 1; i < 1001; ++i) {
        int size = virus[i].size();
        for (int j = 0; j < size; ++j) {
            q.push(virus[i][j]);
        }
    }

    while (curSec != sec){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int x = q.front().first;
            int y = q.front().second;
            int virusNum = test[x][y];
            q.pop();

            if (x - 1 >= 0 && test[x - 1][y] == 0){
                test[x - 1][y] = virusNum;
                q.push({x - 1, y});
            }
            if (x + 1 < n && test[x + 1][y] == 0){
                test[x + 1][y] = virusNum;
                q.push({x + 1, y});
            }
            if (y - 1 >= 0 && test[x][y - 1] == 0){
                test[x][y - 1] = virusNum;
                q.push({x, y - 1});
            }
            if (y + 1 < n && test[x][y + 1] == 0){
                test[x][y + 1] = virusNum;
                q.push({x, y + 1});
            }

        }

        curSec++;
    }
    return;
}

int main(){
    cin >> n >> K;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> test[i][j];
            virus[test[i][j]].push_back({i, j});
        }
    }
    
    cin >> S >> X >> Y;
    
    bfs(S);
    
    cout << test[X - 1][Y - 1];

    return 0;
}*/
