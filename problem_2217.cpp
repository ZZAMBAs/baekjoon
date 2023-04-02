/*
//
// Created by AppDeveloper on 2022-09-13.
//
#include <iostream>
#include <algorithm>

using namespace std;

int deadEnd, rope[100000], team;

int main(){
    cin >> deadEnd;
    for (int i = 0; i < deadEnd; ++i) {
        cin >> rope[i];
    }
    sort(rope, rope + deadEnd, greater());

    for (int i = 0; i < deadEnd; ++i) {
        int maximum = rope[i] * (i + 1);
        if (team < maximum)
            team = maximum;
    }

    cout << team;
    return 0;
}*/
