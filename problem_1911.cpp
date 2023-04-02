/*
//
// Created by AppDeveloper on 2022-10-31.
//
#include <iostream>
#include <algorithm>

using namespace std;

int N, L, team, cur, curHoleIdx;
pair<int, int> holes[10000];

int main(){
    cin >> N >> L;
    for (int i = 0; i < N; ++i)
        cin >> holes[i].first >> holes[i].second;
    sort(holes, holes + N);

    cur = holes[0].first;
    while (cur < holes[N - 1].second){
        cur = cur + L;
        team++;
        if (cur < holes[curHoleIdx].second)
            continue;
        else{
            while (curHoleIdx + 1 < N && cur >= holes[curHoleIdx + 1].second){ curHoleIdx++; }
            if (curHoleIdx + 1 < N)
                cur = max(cur, holes[++curHoleIdx].first);
        }
    }

    cout << team;
    return 0;
}*/
