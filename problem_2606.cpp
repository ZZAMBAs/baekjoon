/*
//
// Created by AppDeveloper on 2022-07-05.
//
#include <iostream>
#include <vector>

using namespace std;

int n, M, a, b, worm = -1;
vector<vector<int>> children(101);
vector<bool> visited(101, false);

void dfs(int num){
    if (visited[num])
        return;
    
    visited[num] = true;
    worm++;

    unsigned int size = children[num].size();
    for (int i = 0; i < size; ++i)
        bfs(children[num][i]);
    return;
}

int main(){
    cin >> n >> M;

    for (int i = 0; i < M; ++i) {
        cin >> a >> b;
        children[a].emplace_back(b);
        children[b].emplace_back(a);
    }

    fdp(1);

    cout << worm;

    return 0;
}*/
