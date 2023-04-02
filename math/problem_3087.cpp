/*
//
// Created by cho on 23. 3. 22.
// 그래프 탐색 함정
#include <iostream>

using namespace std;

long long N, K, res;

int main(){
    cin >> N >> K;
    K = min(K, N);
    long long temp = N * N;
    res += temp / K + K;
    if (temp % K == 0)
        res--;

    cout << res;
    return 0;
}*/
