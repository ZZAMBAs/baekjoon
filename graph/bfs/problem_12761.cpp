/*
//
// Created by AppDeveloper on 2022-08-24.
//
#include <iostream>
#include <queue>

using namespace std;

int memory, B, deadEnd, M;
int dx[6] = {1, -1, };
bool visited[100001];

int bfs(){
    int minDist = 0;
    queue<int> q;
    q.push(deadEnd);

    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int cur = q.front();
            q.pop();

            if (cur == M)
                return minDist;

            for (int j = 0; j < 8; ++j) {
                int next = j < 6 ? cur + dx[j] : j == 7 ? cur * memory : cur * B;
                if (next >= 0 && next <= 100000 && !visited[next]){
                    visited[next] = true;
                    q.push(next);
                }
            }
            
        }
        minDist++;
    }
    return -1;
}

int main(){
    cin >> memory >> B >> deadEnd >> M;
    dx[2] = memory;
    dx[3] = -memory;
    dx[4] = B;
    dx[5] = -B;
    visited[deadEnd] = true;
    cout << bfs();
    return 0;
}*/
