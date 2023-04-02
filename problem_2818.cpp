/*
//
// Created by AppDeveloper on 2022-11-22.
//
#include <iostream>
#define RIGHT 1
#define DOWN 0
#define LEFT -1

using namespace std;

typedef unsigned long long ll;

int R, cost;
ll K;
ll dice[6] = {1, 6, 4, 3, 2, 5}; // 위 아 왼 오 앞 뒤

void rollDice(int direction){
    switch (direction) {
        case RIGHT:
            dice[3] = dice[0];
            dice[0] = dice[2];
            dice[2] = 7 - dice[3];
            dice[1] = 7 - dice[0];
            break;
        case LEFT:
            dice[2] = dice[0];
            dice[0] = dice[3];
            dice[3] = 7 - dice[2];
            dice[1] = 7 - dice[0];
            break;
        case DOWN:
            dice[4] = dice[0];
            dice[0] = dice[5];
            dice[5] = 7 - dice[4];
            dice[1] = 7 - dice[0];
    }
}

void cal(int d){
    int q = cost / 4;
    int r = cost % 4;
    K += (dice[0] + dice[1] + dice[2] + dice[3]) * q;
    if (d == RIGHT){ // 위왼아오
        for (int i = 0; i < r; ++i) {
            K += dice[0];
            rollDice(RIGHT);
        }
        rollDice(LEFT);
    }
    else{  // 위오아왼
        for (int i = 0; i < r; ++i) {
            K += dice[0];
            rollDice(LEFT);
        }
        rollDice(RIGHT);
    }
}

int main(){
    cin >> R >> cost;
    for (int i = 0; i < R; ++i) {
        if (i % 2 == 0)
            cal(RIGHT);
        else
            cal(LEFT);
        if (i + 1 < R)
            rollDice(DOWN);
    }

    cout << K;
    return 0;
}*/
