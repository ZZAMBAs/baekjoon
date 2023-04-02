/*
//
// Created by AppDeveloper on 2022-09-27.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, sec[300001];
vector<int> minIdx;

int fdp(int n){
    if (sec[n] != INT32_MAX)
        return sec[n];

    for (int idx : minIdx) {
        if (idx > n)
            continue;
        sec[n] = min(sec[n], fdp(n - idx) + fdp(idx));
    }
    return sec[n];
}

int main(){
    fill(sec, sec + 300001, INT32_MAX);
    cin >> N;

    for (int i = 1, j = 0, sum = 0; sum + j + i <= N; ++i) {
        j += i;
        sum += j;
        sec[sum] = 1;
        minIdx.emplace_back(sum);
    }
    sort(minIdx.begin(), minIdx.end(), greater());

    cout << fdp(N);
    return 0;
}*/
