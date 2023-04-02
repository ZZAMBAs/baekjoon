/*
//
// Created by cho on 23. 1. 20.
// 플로이드 와샬: https://blog.naver.com/kks227/220797649276
// disjoint-set (union-find)로도 풀 수 있다. https://chosh95.tistory.com/112
// N과 M이 작아서 그래프 탐색으로도 풀 수 있다.
#include <iostream>

using namespace std;

int main(){
    int N, M, adj[201][201], route[1000];
    bool res = true;
    cin >> N >> M;
    for (int i = 1; i <= N; ++i)
        for (int j = 1; j <= N; ++j) {
            cin >> adj[i][j];
            if (i == j)
                adj[i][j] = 1;
        }
    for (int i = 0; i < M; ++i)
        cin >> route[i];

    for (int k = 1; k <= N; ++k) {
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= N; ++j) {
                adj[i][j] = adj[i][j] | (adj[j][k] & adj[k][i]);
            }
        }
    }

    for (int i = 0; i < M - 1 && res; ++i) {
        if (!adj[route[i]][route[i + 1]])
            res = false;
    }

    cout << (res ? "YES" : "NO");
    return 0;
}*/
