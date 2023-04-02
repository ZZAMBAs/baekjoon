/*
//
// Created by AppDeveloper on 2022-08-22.
//
#include <iostream>
#include <queue>

using namespace std;

int n, w, L, trucks[1000], team, bridgeW;
queue<int> bridge;

int main(){
    int idx = 0;
    cin >> n >> w >> L;

    for (int i = 0; i < n; ++i)
        cin >> trucks[i];

    while (idx != n){
        if (bridge.size() == w){
            int exit = bridge.front();
            bridge.pop();
            bridgeW -= exit;
        }
        if (bridgeW + trucks[idx] <= L){
            bridge.push(trucks[idx]);
            bridgeW += trucks[idx++];
        }
        else
            bridge.push(0);
        team++;
    }

    team += w;
    cout << team;
    return 0;
}*/
