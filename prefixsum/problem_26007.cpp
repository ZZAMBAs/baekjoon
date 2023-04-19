/*
//
// Created by cho on 23. 4. 20.
//
#include <iostream>
#include <vector>

using namespace std;

int N, M, K, X, l, r;
int A, prefixSum[100001];

int main(){
    vector<int> res;
    cin >> N >> M >> K >> X;
    if (X < K)
        prefixSum[0] = 1;

    for (int i = 0; i < N; ++i) {
        cin >> A;
        X += A;
        prefixSum[i + 1] = prefixSum[i];
        if (X < K)
            prefixSum[i + 1]++;
    }
    for (int i = 0; i < M; ++i) {
        cin >> l >> r;
        res.emplace_back(prefixSum[r - 1] - prefixSum[l - 1]);
    }

    int size = res.size();
    for (int i = 0; i < size; ++i)
        cout << res[i] << "\n";

    return 0;
}*/
