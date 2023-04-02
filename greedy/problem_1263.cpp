/*
//
// Created by AppDeveloper on 2022-09-21.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int deadEnd, T, S, team = -1;
vector<pair<int, int>> sched;

int main(){
    int s = 0, e = 0, m;
    cin >> deadEnd;
    for (int i = 0; i < deadEnd; ++i) {
        cin >> T >> S;
        if (e < S)
            e = S;
        sched.emplace_back(S, T);
    }

    sort(sched.begin(), sched.end());

    while (s <= e){
        m = (s + e) / 2;
        int nowTime = m;
        bool isOk = true;
        for (pair<int, int> cur : sched) {
            nowTime += cur.second;
            if (nowTime > cur.first){
                isOk = false;
                break;
            }
        }

        if (isOk) {
            s = m + 1;
            team = max(team, m);
        }
        else
            e = m - 1;
    }

    cout << team;
    return 0;
}*/
