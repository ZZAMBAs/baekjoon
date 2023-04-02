/*
//
// Created by AppDeveloper on 2022-10-04.
//
#include <iostream>
#include <vector>

using namespace std;

int volume[3];
bool CVol[201], visited[201][201][201];

void dfs(int s, int d, vector<int> curV){ // 0: memory, 1: B, 2: cost
    int movingW, dNeedW = volume[d] - curV[d];
    movingW = min(dNeedW, curV[s]);
    curV[s] -= movingW;
    curV[d] += movingW;

    if (visited[curV[0]][curV[1]][curV[2]])
        return;
    visited[curV[0]][curV[1]][curV[2]] = true;
    if (curV[0] == 0)
        CVol[curV[2]] = true;

    dfs(0, 1, curV);
    dfs(0, 2, curV);
    dfs(1, 2, curV);
    dfs(1, 0, curV);
    dfs(2, 0, curV);
    dfs(2, 1, curV);
}

int main(){
    vector<int> curV(3, 0);
    cin >> volume[0] >> volume[1] >> volume[2];
    curV[2] = volume[2];
    CVol[volume[2]] = true;
    visited[0][0][curV[2]] = true;

    dfs(2, 1, curV);
    bfs(2, 0, curV);

    for (int i = 0; i < 201; ++i) {
        if (CVol[i])
            cout << i << " ";
    }
    return 0;
}*/
