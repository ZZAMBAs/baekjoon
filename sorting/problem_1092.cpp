/*
//
// Created by AppDeveloper on 2022-11-08.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, crane[50], boxW[10000], team = 0, visitedNum = 0;
    bool visited[10000];
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> crane[i];
    cin >> M;
    for (int i = 0; i < M; ++i)
        cin >> boxW[i];
    fill(visited, visited + M, false);
    sort(crane, crane + N, greater());
    sort(boxW, boxW + M, greater());

    if (crane[0] < boxW[0]){
        cout << -1;
        return 0;
    }

    while (visitedNum != M){
        for (int i = 0; i < N && crane[i] >= boxW[M - 1]; ++i) {
            for (int j = 0; j < M; ++j) {
                if (!visited[j] && crane[i] >= boxW[j]){
                    visited[j] = true;
                    visitedNum++;
                    break;
                }
            }
        }
        team++;
    }

    cout << team;
    return 0;
}*/
