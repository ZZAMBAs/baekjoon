/*
//
// Created by AppDeveloper on 2022-10-14.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, source, team, notZeroCnt;
vector<int> zero;

int main(){
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        cin >> source;
        if (source < 10)
            continue;
        if (source == 10)
            team++;
        else if (source % 10)
            notZeroCnt += source / 10;
        else
            zero.emplace_back(source);
    }
    sort(zero.begin(), zero.end());

    int zSize = zero.size();
    for (int i = 0; i < zSize && M > 0; ++i) {
        int sliceCnt = zero[i] / 10 - 1;
        if (sliceCnt <= M){
            team += sliceCnt + 1;
            M -= sliceCnt;
        }
        else{
            team += M;
            M = 0;
        }
    }
    team += min(M, notZeroCnt);
    cout << team;
    return 0;
}*/
