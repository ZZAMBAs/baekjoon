/*
//
// Created by cho on 23. 1. 10.
//
#include <iostream>

using namespace std;

int N, a, res;
int visited[1000001];

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> a;
        visited[a] = max(visited[a], visited[a - 1] + 1);
        res = max(res, visited[a]);
    }

    cout << res;
    return 0;
}*/
