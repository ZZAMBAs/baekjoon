/*
//
// Created by cho on 23. 6. 3.
//
#include <iostream>

using namespace std;

int N, M, x, y, K, nowBottom = 6;

int dice[5] = {3, 4, 5, 2, 1}; // 동서북남(반대편)
int diceNum[7];
int dr[4] = {0, 0, -1, 1}, dc[4] = {1, -1, 0, 0};
int board[20][20];

void go(int cmd){
    int nextR = x + dr[cmd], nextC = y + dc[cmd];
    
    if (nextR >= N || nextR < 0 || nextC >= M || nextC < 0)
        return;

    int tempDice[5];
    for (int i = 0; i < 5; ++i)
        tempDice[i] = dice[i];

    switch (cmd) { // 동서북남
        case 0: tempDice[0] = dice[4]; tempDice[1] = nowBottom; tempDice[4] = dice[1]; nowBottom = dice[0];
            break;
        case 1: tempDice[0] = nowBottom; tempDice[1] = dice[4]; tempDice[4] = dice[0]; nowBottom = dice[1];
            break;
        case 2: tempDice[2] = dice[4]; tempDice[3] = nowBottom; tempDice[4] = dice[3]; nowBottom = dice[2];
            break;
        case 3: tempDice[2] = nowBottom; tempDice[3] = dice[4]; tempDice[4] = dice[2]; nowBottom = dice[3];
            break;
    }

    for (int i = 0; i < 5; ++i)
        dice[i] = tempDice[i];

    if (!board[nextR][nextC]){
        board[nextR][nextC] = diceNum[nowBottom];
    }
    else{
        diceNum[nowBottom] = board[nextR][nextC];
        board[nextR][nextC] = 0;
    }
    x = nextR;
    y = nextC;

    cout << diceNum[dice[4]] << "\n";
}

int main(){
    cin >> N >> M >> x >> y >> K;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> board[i][j];
        }
    }
    for (int i = 0; i < K; ++i) {
        int cmd;
        cin >> cmd;
        go(cmd - 1);
    }

    return 0;
}*/
