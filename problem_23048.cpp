/*
//
// Created by cho on 23. 1. 9.
//
#include <iostream>

using namespace std;

int N, K = 1, num[500001] = {0, 1};

void primes(){
    int color = 2;
    for (int i = 2; i <= N; ++i) {
        if (num[i])
            continue;
        for (int j = i; j <= N; j += i)
            num[j] = color;
        color++;
        K++;
    }
}

int main(){
    cin >> N;
    primes();

    cout << K << "\n";
    for (int i = 1; i <= N; ++i)
        cout << num[i] << " ";
    return 0;
}*/
