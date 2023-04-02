/*
//
// Created by AppDeveloper on 2022-12-19.
// dp로도 풀이 가능.
#include <iostream>
#include <queue>

using namespace std;

int N, K, memory[5000];
bool visited[5000] = {true, };

string bfs(int endIdx){
    queue<int> q;
    q.push(0);
    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int curIdx = q.front();
            q.pop();

            if (curIdx == endIdx)
                return "YES";

            for (int j = curIdx + 1; j <= endIdx; ++j) {
                if (!visited[j] && (j - curIdx) * (1 + abs(memory[curIdx] - memory[j])) <= K){
                    q.push(j);
                    visited[j] = true;
                }
            }

        }
    }
    return "NO";
}

int main(){
    cin >> N >> K;
    for (int i = 0; i < N; ++i)
        cin >> memory[i];
    cout << bfs(N - 1);
    return 0;
}*/
