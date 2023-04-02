/*
//
// Created by AppDeveloper on 2022-09-18.
// DP 풀이: https://imnotabear.tistory.com/426
// 다익스트라 풀이: https://he1fire.tistory.com/53
#include <iostream>

using namespace std;

int deadEnd, D, team;
int road[12][3]; // 0: 시작, 1: 끝, 2:길이

void bruteforce(int cur, int sum){
    if (cur >= D) {
        if (cur == D)
            team = min(team, sum);
    }
    else{
        for (int i = 0; i < deadEnd; ++i) {
            if (cur <= road[i][0])
                fdp(road[i][1], sum + (road[i][0] - cur) + road[i][2]);
        }
        team = min(team, sum + D - cur);
    }
    return;
}

int main(){
    cin >> deadEnd >> D;
    team = D;
    for (int i = 0; i < deadEnd; ++i)
        cin >> road[i][0] >> road[i][1] >> road[i][2];

    backtracking(0, 0);
    cout << team;
    return 0;
}*/
