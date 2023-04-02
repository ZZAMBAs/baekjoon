/*
//
// Created by AppDeveloper on 2022-06-30.
// 시간을 더 줄이기 위해 영역 4곳을 전부 재귀하지 않음.
#include <iostream>
#include <cmath>

using namespace std;

int n, r, c, search = -1, sw = 0;

void z(int x, int y, int n){
    if (sw)
        return;

    if (n == 1){
        search++;
        if (r == x && c == y) {
            sw = 1;
            return;
        }
        search++;
        if (r == x && c == y + 1){
            sw = 1;
            return;
        }
        search++;
        if (r == x + 1 && c == y){
            sw = 1;
            return;
        }
        search++;
        if (r == x + 1 && c == y + 1){
            sw = 1;
            return;
        }
        return;
    }

    int move = pow(2, n) / 2;

    if (r < x + move && c < y + move)
        z(x, y, n - 1);
    else if (r < x + move && c >= y + move) {
        search += move * move;
        z(x, y + move, n - 1);
    }
    else if (r >= x + move && c < y + move) {
        search += 2 * move * move;
        z(x + move, y, n - 1);
    }
    else {
        search += 3 * move * move;
        z(x + move, y + move, n - 1);
    }

    return;
}

int main(){

    scanf("%d %d %d", &n, &r, &c);

    z(0, 0, n);

    printf("%d", search);

    return 0;
}*/
