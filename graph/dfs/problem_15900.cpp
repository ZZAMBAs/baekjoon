/*
//
// Created by AppDeveloper on 2022-10-01.
//
#include <iostream>
#include <vector>

using namespace std;

int N, a, b, sum;
vector<vector<int>> adv(500001);
bool visited[500001];

void dfs(int idx, int level){
    visited[idx] = true;
    int advSize = adv[idx].size();
    bool sw = false;
    for (int i = 0; i < advSize; ++i) {
        int next = adv[idx][i];
        if (!visited[next]) {
            sw = true;
            dfs(next, level + 1);
        }
    }

    if (!sw)
        sum += level;
}

int main(){
    cin >> N;
    for (int i = 0; i < N - 1; ++i) {
        cin >> a >> b;
        adv[a].emplace_back(b);
        adv[b].emplace_back(a);
    }

    bfs(1, 0);
    if (sum % 2)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}*/
