/*
//
// Created by AppDeveloper on 2022-08-03.
// 트리 기초
#include <iostream>
#include <vector>

using namespace std;

int n, rootIdx, delNode, team;
vector<int> p(50);
vector<vector<int>> c(50);

void leafNum(int curIdx){
    if (curIdx == delNode){
        if (c[p[delNode]].size() == 1)
            team++;
        return;
    }


    if (c[curIdx].empty()) {
        team++;
        return;
    }

    for (int child : c[curIdx])
        leafNum(child);

    return;
}

int main(){
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        if (p[i] >= 0){
            c[p[i]].emplace_back(i);
        }
        else if (p[i] == -1)
            rootIdx = i;
    }
    
    cin >> delNode;
    
    leafNum(rootIdx);

    cout << team;

    return 0;
}*/
