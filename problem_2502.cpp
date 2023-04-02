/*
//
// Created by AppDeveloper on 2022-07-24.
//
#include <iostream>

using namespace std;

int D, K, memory, B;
int days[31];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> D >> K;

    for (int i = 1; i < K - 1; ++i) {
        days[1] = i;
        for (int j = i; j < K; ++j) {
            days[2] = j;

            for (int k = 3; k <= D; ++k)
                days[k] = days[k - 2] + days[k - 1];

            if (days[D] == K){
                memory = days[1];
                B = days[2];
                i = K;
                break;
            }

        }
    }

    cout << memory << "\n" << B;

    return 0;
}*/
