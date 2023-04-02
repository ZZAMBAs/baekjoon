/*
//
// Created by AppDeveloper on 2022-10-09.
//
#include <iostream>

using namespace std;

int N, team = INT32_MAX, r, b;
char arr[500000];

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
        if (arr[i] == 'R')
            r++;
        else
            b++;
    }
    team = min(r, b);

    int leftCnt = 0, rightCnt = 0;

    for (int i = 0; i < N - 1 && arr[i] == arr[0]; ++i)
        leftCnt++;
    for (int i = N - 1; i >= 0 && arr[i] == arr[N - 1]; --i)
        rightCnt++;

    if (arr[0] != arr[N - 1]){
        if (arr[0] == 'R') // R B
            team = min(team, min(r - leftCnt, b - rightCnt));
        else
            team = min(team, min(r - rightCnt, b - leftCnt));
    }
    else{
        if (arr[0] == 'R')
            team = min(team, r - max(rightCnt, leftCnt));
        else
            team = min(team, b - max(rightCnt, leftCnt));
    }

    cout << team;
    return 0;
}*/
