/*
//
// Created by AppDeveloper on 2022-09-11.
//
#include <iostream>

using namespace std;
int deadEnd, S, M, V[51], sec[51][1002], team = -1;

int fdp(int idx, int v){
    if (idx == 0 || sec[idx][v] >= 0)
        return sec[idx][v];

    if (v - V[idx] >= 0 && fdp(idx - 1, v - V[idx]) > 0)
        sec[idx][v] = 1;
    else if (v + V[idx] <= M && fdp(idx - 1, v + V[idx]) > 0)
        sec[idx][v] = 1;
    else
        sec[idx][v] = 0;
    return sec[idx][v];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> deadEnd >> S >> M;
    for (int i = 1; i <= deadEnd; ++i)
        cin >> V[i];
    fill(sec[1], sec[1] + 50 * 1001, -1); // 배열 크기에 따라 주의
    sec[0][S] = 1;

    for (int i = M; i >= 0; --i) {
        if (fdp(deadEnd, i)) {
            team = i;
            break;
        }
    }

   cout << team;
    return 0;
}*/
