/*
//
// Created by AppDeveloper on 2022-07-29.
//
#include <iostream>
#include <vector>

using namespace std;

int n, maxH = 0, arr[100][100], state[100][100], team = 0;
vector<pair<int, int>> searching;

void dfs(int x, int y){
    if (state[x][y])
        return;
    
    state[x][y] = 1;
    if (x - 1 >= 0 && !state[x - 1][y])
        dfs(x - 1, y);
    if (x + 1 < n && !state[x + 1][y])
        dfs(x + 1, y);
    if (y - 1 >= 0 && !state[x][y - 1])
        dfs(x, y - 1);
    if (y + 1 < n && !state[x][y + 1])
        bfs(x, y + 1);
}

void stateUpdate(int h){
    searching.clear();
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (arr[i][j] <= h)
                state[i][j] = 1;
            else {
                state[i][j] = 0;
                searching.push_back({i, j});
            }
}

int main(){
    cin >> n;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
            if (maxH < arr[i][j])
                maxH = arr[i][j];
        }

    for (int i = maxH; i >= 0; --i) {
        int tempRes = 0;
        stateUpdate(i);
        for (pair<int, int> s : searching) {
            int x = s.first;
            int y = s.second;
            if (!state[x][y]){
                dfs(x, y);
                tempRes++;
            }

        }
        if (team < tempRes)
            team = tempRes;
    }

    cout << team;
    return 0;
}*/
