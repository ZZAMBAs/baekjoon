/*
//
// Created by AppDeveloper on 2022-08-02.
// 브루트포스 + 백트래킹. 백트래킹이라고 그래프 탐색만 있는 것은 아님.
#include <iostream>
#include <vector>

using namespace std;

int n, M, board[50][50], curMin = 999999999;
vector<pair<int, int>> h, c;
vector<int> aliveCIdx;

void cal(){
    int dist = 0, sum = 0;
    int hSize = h.size();
    vector<int> chickenDist(hSize, 2501);
    
    for (int i = 0; i < hSize; ++i) {
        int aSize = aliveCIdx.size();
        for (int j = 0; j < aSize; ++j) {
            dist = 0;
            dist += abs(c[aliveCIdx[j]].first - h[i].first) + abs(c[aliveCIdx[j]].second - h[i].second);
            if (chickenDist[i] > dist)
                chickenDist[i] = dist;
        }
    }

    for (int i = 0; i < hSize; ++i) {
        sum += chickenDist[i];
    }

    if (sum < curMin)
        curMin = sum;
}

void select(int idx, int selNum, int goal){
    if (selNum >= goal){
        cal();
        return;
    }

    if (idx >= c.size())
        return;
    
    aliveCIdx.emplace_back(idx);
    select(idx + 1, selNum + 1, goal);
    aliveCIdx.erase(aliveCIdx.end() - 1);
    select(idx + 1, selNum, goal);
}

int main(){
    cin >> n >> M;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 1)
                h.push_back({i, j});
            else if (board[i][j] == 2)
                c.push_back({i, j});
        }
    }
    
    for (int i = 1; i <= M; ++i) {
        select(0, 0, i);
    }

    cout << curMin;

    return 0;
}*/
