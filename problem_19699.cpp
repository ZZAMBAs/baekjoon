/*
//
// Created by AppDeveloper on 2022-08-26.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int deadEnd, M, cows[9];
vector<int> primeNum;
bool primes[9001];

void primeCal(){
    for (int i = 2; i < 9001; ++i)
        for (int j = i + i; j < 9001; j += i)
            primes[j] = false;
    return;
}

void bruteforce(int idx, int sum, int num){
    if (idx == deadEnd) {
        if (primes[sum] && num == M)
            primeNum.emplace_back(sum);
        return;
    }

    bruteforce(idx + 1, sum + cows[idx], num + 1);
    backtracking(idx + 1, sum, num);
}

int main(){
    fill(primes + 2, primes + 9001, true);
    primeCal();

    cin >> deadEnd >> M;
    for (int i = 0; i < deadEnd; ++i)
        cin >> cows[i];

    fdp(0, 0, 0);
    if (primeNum.empty())
        cout << -1;
    else {
        sort(primeNum.begin(), primeNum.end());
        int size = primeNum.size();
        int prev = 0;
        for (int i = 0; i < size; ++i)
            if (primeNum[i] != prev) {
                cout << primeNum[i] << " ";
                prev = primeNum[i];
            }
    }
    return 0;
}*/
