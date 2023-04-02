/*
//
// Created by AppDeveloper on 2022-08-06.
//
#include <iostream>
#include <vector>

using namespace std;

int n, m, paint[500][500], maxVal, paintCnt, area, visited[500][500];
vector<pair<int, int>> locOf1;
int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};

void dfs(int x, int y){
    if (visited[x][y])
        return;
    
    visited[x][y] = true;
    area++;
    for (int i = 0; i < 4; ++i) {
        if (x + dx[i] < 0 || x + dx[i] >= n || y + dy[i] < 0 || y + dy[i] >= m)
            continue;
        if (!visited[x + dx[i]][y + dy[i]] && paint[x + dx[i]][y + dy[i]])
            dfs(x + dx[i], y + dy[i]);
    }
}

int main(){
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
            cin >> paint[i][j];
            if (paint[i][j] == 1)
                locOf1.push_back({i, j});
        }

    for (pair<int, int> loc : locOf1) {
        int x = loc.first;
        int y = loc.second;
        if (!visited[x][y]) {
            area = 0;
            paintCnt++;
            bfs(x, y);
            if (area > maxVal)
                maxVal = area;
        }
    }

    cout << paintCnt << "\n" << maxVal;

    return 0;
}*/
