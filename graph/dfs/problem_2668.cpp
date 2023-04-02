/*
//
// Created by AppDeveloper on 2022-10-16.
//
#include <iostream>
#include <vector>

using namespace std;

int N, arr[101];
vector<int> team;

void isCycle(int idx){
    int startIdx = idx;
    bool visited[101];
    fill(visited, visited + 101, false);

    while (!visited[idx]){
        visited[idx] = true;
        idx = arr[idx];
    }

    if (startIdx == idx)
        team.emplace_back(startIdx);
    return;
}

int main(){
    cin >> N;
    for (int i = 1; i <= N; ++i)
        cin >> arr[i];

    for (int i = 1; i <= N; ++i)
        isCycle(i);

    cout << team.size() << "\n";
    for (int num : team)
        cout << num << "\n";
    return 0;
}*/
