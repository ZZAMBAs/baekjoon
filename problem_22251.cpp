/*
//
// Created by cho on 23. 2. 26.
//
#include <iostream>

using namespace std;

int N, K, P, X, res;
int aToB[10][10];
int led[10][7] = {
        {1, 1, 1, 0, 1, 1, 1},
        {0, 0, 1, 0, 0, 1, 0},
        {1, 0, 1, 1, 1, 0, 1},
        {1, 0, 1, 1, 0, 1, 1},
        {0, 1, 1, 1, 0, 1, 0},
        {1, 1, 0, 1, 0, 1, 1},
        {1, 1, 0, 1, 1, 1, 1},
        {1, 0, 1, 0, 0, 1, 0},
        {1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 1, 1}
};

void bruteforce(int idx, int curVal, int changeCnt, int sum){
    if (sum > N || changeCnt > P)
        return;
    if (idx == K){
        if (changeCnt >= 1 && sum != 0) {
            // cout << "%" << sum << "%\n";
            res++;
        }
        return;
    }

    int nowLed = curVal % 10;
    for (int i = 0; i < 10; ++i) {
        int mul = 1;
        for (int j = 0; j < idx; ++j)
            mul *= 10;
        bruteforce(idx + 1, curVal / 10, changeCnt + aToB[nowLed][i], sum + mul * i);
    }
}

int main(){
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            int diff = 0;
            for (int k = 0; k < 7; ++k) {
                if (led[i][k] != led[j][k])
                    diff++;
            }
            aToB[i][j] = diff;
        }
    }
    cin >> N >> K >> P >> X;
    bruteforce(0, X, 0, 0);
    cout << res;
    return 0;
}*/
