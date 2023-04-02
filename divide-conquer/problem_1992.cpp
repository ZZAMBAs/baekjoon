/*
//
// Created by AppDeveloper on 2022-09-05.
//
#include <iostream>

using namespace std;

int deadEnd;
char d[64][64];

void divideAndConquer(int r, int c, int n){
    if (n == 1)
        cout << d[r][c];
    else {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (d[r][c] != d[r + i][c + j]) { // 다른 것이 발견 된 경우.
                    cout << "(";
                    divideAndConquer(r, c, n / 2);
                    divideAndConquer(r, c + n / 2, n / 2);
                    divideAndConquer(r + n / 2, c, n / 2);
                    divideAndConquer(r + n / 2, c + n / 2, n / 2);
                    cout << ")";
                    return;
                }
            }
        }
        cout << d[r][c];
    }
    return;
}

int main(){
    scanf("%d\n", &deadEnd);
    for (int i = 0; i < deadEnd; ++i) {
        for (int j = 0; j < deadEnd; ++j)
            scanf("%c", &d[i][j]);
        getchar();
    }

    divideAndConquer(0, 0, deadEnd);

    return 0;
}*/
