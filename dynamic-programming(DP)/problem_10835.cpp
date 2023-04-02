/*
//
// Created by AppDeveloper on 2022-09-01.
// 조금 어려웠던 DP + DFS
#include <iostream>

using namespace std;

int deadEnd, l[2000], r[2000], sec[2001][2001], team;


int fdp(int lIdx, int rIdx){
    if (lIdx >= deadEnd || rIdx >= deadEnd)
        return 0;

    if (sec[lIdx][rIdx] >= 0)
        return sec[lIdx][rIdx];

    int s1, s2, s3 = 0;
    // 둘다 버린 경우
    s1 = fdp(lIdx + 1, rIdx + 1);
    // 왼쪽만 버린 경우
    s2 = fdp(lIdx + 1, rIdx);
    // 오른쪽 버린 경우
    if(l[lIdx] > r[rIdx])
        s3 = fdp(lIdx, rIdx + 1) + r[rIdx];

    sec[lIdx][rIdx] = max(max(s1, s2), s3);
    return sec[lIdx][rIdx];
}

int main(){
    cin >> deadEnd;
    fill(sec[0], sec[0] + 2001 * 2001, -1);

    for (int i = 0; i < deadEnd; ++i)
        cin >> l[i];
    for (int i = 0; i < deadEnd; ++i)
        cin >> r[i];

    cout << fdp(0, 0);
    return 0;
}*/
