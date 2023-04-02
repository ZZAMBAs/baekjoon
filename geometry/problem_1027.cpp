/*
//
// Created by AppDeveloper on 2022-10-27.
//
#include <iostream>
#define POS 1
#define NEG -1

using namespace std;

int N, arr[51], team;

int scanning(int idx, int direction){
    int idxV = arr[idx], ret = 0, end = direction == POS ? N + 1 : 0;
    int idxQ = INT32_MAX, idxR = INT32_MAX, idxDist = INT32_MAX, cmpQ, cmpR;

    for (int cmp = idx; cmp != end; cmp += direction) {
        if (cmp == idx)
            continue;

        int cmpV = arr[cmp], dist = abs(cmp - idx);
        cmpQ = (cmpV - idxV) / dist;
        cmpR = (cmpV - idxV) - dist * cmpQ;

        if (idxQ == INT32_MAX && idxR == INT32_MAX){
            idxQ = cmpQ;
            idxR = cmpR;
            idxDist = dist;
            ret++;
            continue;
        }

        if (cmpQ > idxQ || ((cmpQ == idxQ) && (cmpR * idxDist > idxR * dist))){
            ret++;
            idxQ = cmpQ;
            idxR = cmpR;
            idxDist = dist;
        }
    }
    return ret;
}

int main(){
    cin >> N;
    for (int i = 1; i <= N; ++i)
        cin >> arr[i];

    for (int i = 1; i <= N; ++i)
        team = max(team, scanning(i, POS) + scanning(i, NEG));

    cout << team;
    return 0;
}*/
