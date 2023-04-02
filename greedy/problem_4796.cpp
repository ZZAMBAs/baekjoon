/*
//
// Created by AppDeveloper on 2022-05-22.
//
#include <iostream>

using namespace std;

int main(){
    int L, P, V, team, caseNum = 0;

    while(true) {
        caseNum++;
        team = 0;
        cin >> L >> P >> V;
        if (L == 0 && P == 0 && V == 0)
            break;

        while (V > P){
            team += L;
            V -= P;
        }

        team += V > L ? L : V;

        cout << "Case " << caseNum << ": " << team << "\n";
    }

    return 0;
}*/
