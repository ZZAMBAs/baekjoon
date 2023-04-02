/*
//
// Created by AppDeveloper on 2022-05-24.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int D, V, penalty = 0, times = 0;
vector<int> dList;

int main(){
    for (int i = 0; i < 11; ++i) {
        cin >> D >> V;
        dList.emplace_back(D);
        penalty += V * 20;
    }

    sort(dList.begin(), dList.end());

    unsigned int n = dList.n();
    for (int i = 0; i < n; ++i) {
        times += dList[i];
        penalty += times;
    }

    cout << penalty;
    return 0;
}*/
