/*
//
// Created by AppDeveloper on 2022-09-14.
// bfs를 안쓰고 푸는 방법이 있다.
#include <iostream>
#include <queue>

using namespace std;

int deadEnd;
vector<vector<int>> seq(1000001);
bool visited[1000001];

void seqAdd(queue<int> &q, int cur, int next){
    visited[next] = true;
    q.push(next);
    int curSeqSize = seq[cur].size();
    for (int j = 0; j < curSeqSize; ++j)
        seq[next].emplace_back(seq[cur][j]);
    seq[next].emplace_back(cur);
}

int bfs(){
    int level = 0;
    queue<int> q;
    q.push(deadEnd);

    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int cur = q.front();
            q.pop();

            if (cur == 1) {
                seq[1].emplace_back(1);
                return level;
            }

            if (cur % 3 == 0 && !visited[cur / 3])
                seqAdd(q, cur, cur / 3);

            if (cur % 2 == 0 && !visited[cur / 2])
                seqAdd(q, cur, cur / 2);

            if (!visited[cur - 1])
                seqAdd(q, cur, cur - 1);


        }
        level++;
    }
    return -1;
}

int main(){
    cin >> deadEnd;
    cout << bfs() << "\n";
    for (int element : seq[1])
        cout << element << " ";

    return 0;
}*/
