/*
//
// Created by AppDeveloper on 2022-07-05.
//
#include <iostream>

using namespace std;

int T, n, num, dpZero[41] = {-1, }, dpOne[41] = {-1, };

int main(){
    cin >> T;

    dpOne[1] = dpZero[0] = 1;
    dpZero[1] = dpOne[0] = 0;

    for (int i = 2; i <= 40; ++i) {
        dpZero[i] = dpZero[i - 1] + dpZero[i - 2];
        dpOne[i] = dpOne[i - 1] + dpOne[i - 2];
    }

    for (int i = 0; i < T; ++i) {
        cin >> num;
        cout << dpZero[num] << " " << dpOne[num] << "\n";
    }

    return 0;
}*/
