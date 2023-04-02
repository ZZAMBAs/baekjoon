/*
//
// Created by AppDeveloper on 2022-10-05.
//
#include <iostream>
#include <map>

using namespace std;

int k, g[13], S, team;
map<int, int> num;

void dfs(int idx, int leftW, int rightW){
    if (idx == k){
        int water = rightW - leftW;
        int &check = num[water];
        if (water <= 0 || check)
            return;
        check++;
        team++;
        return;
    }
    int next = idx + 1;
    dfs(next, leftW + g[idx], rightW);
    dfs(next, leftW, rightW + g[idx]);
    dfs(next, leftW, rightW);
}

int main(){
    cin >> k;
    for (int i = 0; i < k; ++i) {
        cin >> g[i];
        S += g[i];
    }

    bfs(0, 0, 0); // 그릇은 무조건 왼쪽에 둔다.

    cout << S - team;
    return 0;
}*/
