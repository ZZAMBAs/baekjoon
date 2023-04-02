/*
//
// Created by AppDeveloper on 2022-09-27.
//
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M, A_i, B_i, resLevel, resNum, resCnt;
vector<vector<int>> adv(20000);
bool visited[20001];

void bfs(){
    int curLevel = 0;
    queue<int> q;
    q.push(1);
    visited[1] = true;
    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            bool isEnd = true;
            int cur = q.front();
            q.pop();
            int advSize = adv[cur].size();
            for (int j = 0; j < advSize; ++j) {
                int next = adv[cur][j];
                if (!visited[next]){
                    visited[next] = true;
                    q.push(next);
                    isEnd = false;
                }
            }

            if (isEnd){
                if (curLevel > resLevel) {
                    resNum = cur;
                    resLevel = curLevel;
                    resCnt = 1;
                }
                else if (curLevel == resLevel){
                    resCnt++;
                    if (resNum > cur)
                        resNum = cur;
                }

            }
        }
        curLevel++;
    }

}

int main(){
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        cin >> A_i >> B_i;
        adv[A_i].emplace_back(B_i);
        adv[B_i].emplace_back(A_i);
    }
    
    bfs();
    cout << resNum << " " << resLevel << " " << resCnt;
    return 0;
}*/
