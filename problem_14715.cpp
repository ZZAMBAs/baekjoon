/*
//
// Created by AppDeveloper on 2022-08-23.
//
#include <iostream>

using namespace std;

bool primes[1000001];

void primeCal(){
    for (int i = 2; i < 1000000; ++i) {
        if (!primes[i])
            continue;
        for (int j = i + i; j <= 1000000; j += i)
            primes[j] = false;
    }
}

int main(){
    ios::sync_with_stdio(false);
    int K, primeCnt = 0, team = 0;
    fill(primes, primes + 1000000, true);
    primeCal();
    cin >> K;

    while (K != 1){
        for (int i = 2; i <= 1000000; ++i) {
            if (!primes[i])
                continue;
            if (K % i == 0) {
                primeCnt++;
                K /= i;
                break;
            }
        }
    }

    while (primeCnt != 1){
        primeCnt = primeCnt / 2 + primeCnt % 2;
        team++;
    }

    cout << team;
    return 0;
}*/
