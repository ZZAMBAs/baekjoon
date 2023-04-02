/*
//
// Created by AppDeveloper on 2022-09-04.
// 굳이 비트마스킹 쓸 이유가 없이 deque 쓰면 편함.
#include <iostream>
#include <cmath>

using namespace std;

unsigned char t[4], source;
int K, rotateT, direction, team;
bool isRotated[4];

// deadEnd: 0, S: 1
// 다르면 회전, 같으면 회전 X
// 1: 시계, -1: 반시계

void rotating(int r, int d){
    isRotated[r] = true;
    char right = (t[r] & 0b00100000) >> 5;
    char left = (t[r] & 0b00000010) >> 1;

    if (r - 1 >= 0 && ((t[r - 1] & 0b00100000) >> 5) != left && !isRotated[r - 1])
        rotating(r - 1, -d);
    if (r + 1 < 4 && ((t[r + 1] & 0b00000010) >> 1) != right && !isRotated[r + 1])
        rotating(r + 1, -d);

    if (d == 1){
        int temp = (t[r] & 1) << 7;
        t[r] = t[r] >> 1;
        t[r] = t[r] | temp;
    }
    else{
        int temp = (t[r] & 0b10000000) >> 7;
        t[r] = t[r] << 1;
        t[r] = t[r] | temp;
    }
}

int main(){
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 8; ++j) {
            cin >> source;
            t[i] = t[i] << 1;
            t[i] += source - 48;
        }
        cin.get();
    }
    cin >> K;
    while (K--){
        cin >> rotateT >> direction;
        fill(isRotated, isRotated + 4, false);
        rotating(rotateT - 1, direction);
    }

    for (int i = 0; i < 4; ++i) {
        int plus = pow(2, i);
        team += plus * ((t[i] & 0b10000000) >> 7);
    }
    cout << team;
    return 0;
}*/
