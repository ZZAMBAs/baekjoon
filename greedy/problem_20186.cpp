/*
//
// Created by cho on 23. 3. 18.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, K, arr[5000], res = 0;
    cin >> N >> K;
    for (int i = 0; i < N; ++i)
        cin >> arr[i];
    sort(arr, arr + N, greater());
    for (int i = 0; i < K; ++i)
        res += arr[i];
    res -= K * (K - 1) / 2;

    cout << res;
    return 0;
}*/
