/*
//
// Created by AppDeveloper on 2022-11-15.
//
#include <iostream>

using namespace std;

typedef unsigned long long int ll;

int main(){
    ll N, arr[100000], prefixSum[100001] = {0, }, K = 0;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
        prefixSum[i + 1] = prefixSum[i] + arr[i];
    }

    // OOX
    for (int i = 1; i < N - 1; ++i) {
        K = max(K, prefixSum[N] - arr[i] - arr[0] + prefixSum[N] - prefixSum[i + 1]);
    }

    // XOO
    for (int i = N - 2; i > 0; --i) {
        K = max(K, prefixSum[i] + prefixSum[N - 1] - arr[i]);
    }

    // OXO
    for (int i = 1; i < N - 1; ++i) {
        K = max(K, prefixSum[i + 1] - arr[0] + prefixSum[N - 1] - prefixSum[i]);
    }

    cout << K;

    return 0;
}*/
