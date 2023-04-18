/*
//
// Created by cho on 23. 4. 19.
//
#include <iostream>

using namespace std;

int N, K, Q, M, S, E, sleepy, num;
int check[5003], prefixSum[5004];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> K >> Q >> M;
    for (int i = 0; i < K; ++i) {
        cin >> sleepy;
        check[sleepy] = -INT32_MAX;
    }
    for (int i = 0; i < Q; ++i) {
        cin >> num;
        if (check[num] < 0)
            continue;
        for (int j = 1; num * j <= N + 2; ++j)
            check[num * j]++;
    }
    for (int i = 3; i <= N + 2; ++i) {
        prefixSum[i + 1] = prefixSum[i];
        check[i] > 0 ? prefixSum[i + 1]++ : prefixSum[i + 1];
    }

    for (int i = 0; i < M; ++i) {
        cin >> S >> E;
        cout << (E - S + 1) - (prefixSum[E + 1] - prefixSum[S]) << "\n";
    }

    return 0;
}*/
