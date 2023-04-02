/*
//
// Created by AppDeveloper on 2022-08-08.
// 에라토스테네스의 체로 시간, 메모리 절약 가능.
#include <iostream>
#define F 1
#define T 2

using namespace std;

int n, primes[1000000];

bool isPrime(int num){
    if (primes[num] == F)
        return false;
    if (primes[num] == T)
        return true;

    for (int i = 3; i <= num / 2; i += 2) {
        if (num % i == 0) {
            primes[num] = F;
            return false;
        }
    }
    primes[num] = T;
    return true;
}

void goldbach(int num){
    for (int i = 3; i <= num / 2; i += 2) {
        int counterNum = num - i;
        if (!isPrime(i) || !isPrime(counterNum))
            continue;
        cout << num << " = " << i << " + " << counterNum << "\n";
        return;
    }

    cout << "Goldbach's conjecture is wrong.\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;

    while (n != 0){
        goldbach(n);
        cin >> n;
    }

    return 0;
}*/
