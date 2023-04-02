/*
//
// Created by AppDeveloper on 2022-11-17.
//
#include <iostream>

using namespace std;

int N, M, open1, open2, seq[20], K = INT32_MAX;

void dfs(int idx, int sum, int nowOpen1, int nowOpen2){
    if (idx >= M) {
        K = min(K, sum);
        return;
    }

    dfs(idx + 1, sum + abs(nowOpen1 - seq[idx]), seq[idx], nowOpen2);
    dfs(idx + 1, sum + abs(nowOpen2 - seq[idx]), nowOpen1, seq[idx]);
}

int main(){
    cin >> N;
    cin >> open1 >> open2;
    cin >> M;
    for (int i = 0; i < M; ++i)
        cin >> seq[i];

    bfs(0, 0, open1, open2);
    cout << K;
    return 0;
}*/
