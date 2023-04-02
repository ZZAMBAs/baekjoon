/*
//
// Created by AppDeveloper on 2022-09-22.
//
#include <iostream>
#include <vector>

using namespace std;

int K, deadEnd, source, team = 1000000;
vector<int> positionOf1;

int main(){
    cin >> deadEnd >> K;
    for (int i = 0; i < deadEnd; ++i) {
        cin >> source;
        if (source == 1)
            positionOf1.emplace_back(i);
    }

    int sizeOf1 = positionOf1.size();
    if (K > sizeOf1)
        team = -1;
    else{
        for (int i = 0; i <= sizeOf1 - K; ++i)
            team = min(team, positionOf1[i + K - 1] - positionOf1[i] + 1);
    }

    cout << team;
    return 0;
}*/
