/*
//
// Created by AppDeveloper on 2022-12-03.
//
#include <iostream>
#include <queue>

using namespace std;

int T, N, memory, B;
bool composite[1000001];

int bfs(){
    int fingerSnapCount = 0;
    bool visited[1000001];
    fill(visited, visited + 1000001, false);
    queue<int> q;
    q.push(N);
    visited[N] = true;
    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int cur = q.front();
            q.pop();

            if (cur >= memory && cur <= B && !composite[cur])
                return fingerSnapCount;

            int halfSnap = cur / 2;
            int thirdSnap = cur / 3;
            int killOne = cur - 1;
            int reviveOne = cur + 1;

            if (cur > B || (cur >= memory && cur <= B)){
                if (!visited[halfSnap]) {
                    q.push(halfSnap);
                    visited[halfSnap] = true;
                }
                if (!visited[thirdSnap]) {
                    q.push(thirdSnap);
                    visited[thirdSnap] = true;
                }
                if (!visited[killOne]) {
                    q.push(killOne);
                    visited[killOne] = true;
                }
            }
            if (cur < memory || (cur >= memory && cur <= B)){
                if (!visited[reviveOne]) {
                    q.push(reviveOne);
                    visited[reviveOne] = true;
                }
            }
        }
        fingerSnapCount++;
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 2; i < 500000; ++i) {
        if (composite[i])
            continue;
        for (int j = i + i; j < 1000001; j += i) {
            composite[j] = true;
        }
    }

    cin >> T;
    while (T--){
        cin >> N >> memory >> B;
        cout << bfs() << "\n";
    }

    return 0;
}*/
