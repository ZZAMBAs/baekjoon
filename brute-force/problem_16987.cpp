/*
//
// Created by AppDeveloper on 2022-09-10.
//
#include <iostream>

using namespace std;

int deadEnd, eggH[8], eggW[8], team;
int crashed[8];

bool allCrashed(int idx){
    for (int i = 0; i < deadEnd; ++i) {
        if (i == idx) continue;
        if (!crashed[i])
            return false;
    }
    return true;
}
void bruteforce(int idx, int crashedEggCnt){
    if (idx == deadEnd) {
        team = max(team, crashedEggCnt);
        return;
    }

    for (int i = 0; i < deadEnd; ++i) {
        if (i == idx)
            continue;

        if (crashed[idx] || allCrashed(idx))
            bruteforce(idx + 1, crashedEggCnt);
        else if (!crashed[i]){
            int initEggH1 = eggH[idx], initEggH2 = eggH[i];

            eggH[idx] -= eggW[i];
            eggH[i] -= eggW[idx];
            if (eggH[idx] <= 0)
                crashed[idx] = 1;
            if (eggH[i] <= 0)
                crashed[i] = 1;

            backtracking(idx + 1, crashedEggCnt + crashed[idx] + crashed[i]);
            eggH[idx] = initEggH1;
            eggH[i] = initEggH2;
            crashed[idx] = crashed[i] = 0;

        }
    }

    return;
}

int main(){
    cin >> deadEnd;
    for (int i = 0; i < deadEnd; ++i)
        cin >> eggH[i] >> eggW[i];

    fdp(0, 0);

    cout << team;
    return 0;
}*/
