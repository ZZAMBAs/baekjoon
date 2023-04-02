/*
//
// Created by AppDeveloper on 2022-09-02.
// 플로이드 와샬 풀이: https://github.com/Yukariko/acm/blob/master/problem/2660/test.cpp
// 아래는 BFS 풀이.
#include <iostream>
#include <queue>

using namespace std;

int deadEnd, a, b, minV = 51;
vector<vector<int>> friends(51);
vector<int> resIdx, score(51);
bool visited[51];

void bfs(int idx){
    int level = -1;
    queue<int> q;
    q.push(idx);
    visited[idx] = true;

    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int curIdx = q.front();
            q.pop();

            for (int friendIdx : friends[curIdx]) {
                if (!visited[friendIdx]) {
                    visited[friendIdx] = true;
                    q.push(friendIdx);
                }
            }
        }
        level++;
    }
    score[idx] = level;
}

int main(){
    cin >> deadEnd;

    while ((cin >> a >> b) && a != -1 && b != -1){
        friends[a].emplace_back(b);
        friends[b].emplace_back(a);
    }

    for (int i = 1; i <= deadEnd; ++i) {
        fill(visited, visited + 51, false);
        bfs(i);
    }

    for (int i = 1; i <= deadEnd; ++i) {
        if (score[i] < minV){
            minV = score[i];
            resIdx.clear();
            resIdx.emplace_back(i);
        }
        else if (score[i] == minV)
            resIdx.emplace_back(i);
    }

    cout << minV << " " << resIdx.size() << "\n";
    for (int r : resIdx)
        cout << r << " ";

    return 0;
}*/
