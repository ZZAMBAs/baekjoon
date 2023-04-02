/*
//
// Created by AppDeveloper on 2022-09-15.
//
#include <iostream>

using namespace std;

int deadEnd, P[1001], sec[1001], team;

int fdp(int n){
    if (sec[n] != 10000001)
        return sec[n];

    for (int i = 1; i < n; ++i)
        sec[n] = min(sec[n], fdp(n - i) + fdp(i));
    sec[n] = min(sec[n], P[n]);
    return sec[n];
}

int main(){
    fill(sec, sec + 1001, 10000001);
    cin >> deadEnd;
    for (int i = 1; i <= deadEnd; ++i)
        cin >> P[i];
    sec[1] = P[1];

    cout << fdp(deadEnd);
    return 0;
}*/
