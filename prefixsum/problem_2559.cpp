/*
//
// Created by cho on 23. 2. 15.
//
#include <iostream>

using namespace std;

int N, K, arr[100000], prefixSum[100001], res = -INT32_MAX;

int main(){
    cin >> N >> K;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
        prefixSum[i + 1] = prefixSum[i] + arr[i];
    }

    for (int i = K; i <= N; ++i)
        res = max(res, prefixSum[i] - prefixSum[i - K]);

    cout << res;
    return 0;
}*/
