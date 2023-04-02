/*
//
// Created by AppDeveloper on 2022-10-15.
// pdp 풀이:
#include <iostream>
#include <queue>

using namespace std;

int N, M, source, destination;
vector<vector<int>> sToD(101);
bool visited[101];

int bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;
    int num = 0;
    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int front = q.front();
            q.pop();
            if (front == 100)
                return num;

            for (int j = 1; j <= 6; ++j) {
                if (!visited[front + j] && front + j <= 100){
                    visited[front + j] = true;
                    if (sToD[front + j].empty())
                        q.push(front + j);
                    else{
                        q.push(sToD[front + j][0]);
                        visited[sToD[front + j][0]] = true;
                    }
                }
            }
        }
        num++;
    }

    return -1;
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < N + M; ++i) {
        cin >> source >> destination;
        sToD[source].emplace_back(destination);
    }
    cout << bfs(1);
    return 0;
}*/
