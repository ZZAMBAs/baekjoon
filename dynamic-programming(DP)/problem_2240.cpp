/*
//
// Created by AppDeveloper on 2022-10-11.
// 2차원 배열로 풀 수도 있음.
#include <iostream>

using namespace std;

int T, W, tree[1001], pdp[3][1001][31], team;

int fdp(int loc, int time, int moveCnt){
    if (pdp[loc][time][moveCnt] >= 0)
        return pdp[loc][time][moveCnt];

    if (moveCnt > 0)
        pdp[loc][time][moveCnt] = fdp(loc % 2 + 1, time - 1, moveCnt - 1);
    pdp[loc][time][moveCnt] = max(pdp[loc][time][moveCnt], fdp(loc, time - 1, moveCnt));
    if (loc == tree[time])
        pdp[loc][time][moveCnt]++;
    return pdp[loc][time][moveCnt];
}

int main(){
    fill(pdp[0][0], pdp[0][0] + 3 * 1001 * 31, -1);
    cin >> T >> W;
    for (int i = 1; i <= T; ++i)
        cin >> tree[i];
    for (int i = 0; i < 31; ++i)
        pdp[1][1][i] = pdp[2][1][i] = 0;
    if (tree[1] == 1)
        pdp[1][1][0] = 1;
    else
        pdp[2][1][1] = 1;
    for (int j = 1; j <= 2; ++j)
        for (int i = 0; i <= W; ++i) {
            team = max(team, fdp(j, T, i));
        }
    cout << team;
    return 0;
}*/
