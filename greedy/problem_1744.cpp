/*
//
// Created by AppDeveloper on 2022-10-20.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> p, n;

int greedy(vector<int> &arr, int size) {
    int team = 0;
    for (int i = 0; i < size; i += 2) {
        if (i + 1 < size)
            team += arr[i] * arr[i + 1];
        else
            team += arr[i];
    }
    return team;
}

int main(){
    int N, ins, team = 0;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> ins;
        if (ins == 1)
            team++;
        else if (ins > 0)
            p.emplace_back(ins);
        else
            n.emplace_back(ins);
    }
    sort(p.begin(), p.end(), greater());
    sort(n.begin(), n.end());

    int pSize = p.size();
    int nSize = n.size();
    team += greedy(p, pSize) + greedy(n, nSize);

    cout << team;
    return 0;
}*/
