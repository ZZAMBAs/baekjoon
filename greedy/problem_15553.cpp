/*
//
// Created by cho on 23. 1. 4.
//
#include <iostream>
#include <queue>

using namespace std;

int N, K, T[100000], K;
priority_queue<int> diff;

int main(){
    cin >> N >> K;
    for (int i = 0; i < N; ++i) {
        cin >> T[i];
        if (i > 0)
            diff.emplace(T[i] - T[i - 1] - 1);
    }
    K = T[N - 1] + 1 - T[0];
    for (int i = 0; i < K - 1; ++i) {
        K -= diff.top();
        diff.pop();
    }

    cout << K;
    return 0;
}*/
