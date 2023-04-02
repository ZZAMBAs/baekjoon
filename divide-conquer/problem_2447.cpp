/*
//
// Created by AppDeveloper on 2022-08-31.
//
#include <iostream>

using namespace std;

char team[2187][2187];

void divideAndConquer(int curR, int curC, int n){
    if(n == 3){
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j) {
                if (i == 1 && j == 1)
                    continue;
                team[curR + i][curC + j] = '*';
            }
        return;
    }

    int loop = n / 3;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j) {
            if (i == 1 && j == 1)
                continue;
            divideAndConquer(curR + i * loop, curC + j * loop, n / 3);
        }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int deadEnd;
    cin >> deadEnd;
    fill(team[0], team[0] + 2187 * 2187, ' ');

    divideAndConquer(0, 0, deadEnd);

    for (int i = 0; i < deadEnd; ++i) {
        for (int j = 0; j < deadEnd; ++j)
            cout << team[i][j];
        cout << "\n";
    }
    return 0;
}*/
