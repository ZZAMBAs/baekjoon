/*
//
// Created by AppDeveloper on 2022-09-23.
//
#include <iostream>

using namespace std;

int deadEnd, sec[1001][4][3];
int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};

int fdp(int n, int x, int y){
    if (x == 3 && y > 0)
        return 0;

    if (sec[n][x][y])
        return sec[n][x][y] % 1234567;

    for (int i = 0; i < 4; ++i) {
        int prevX = x + dx[i];
        int prevY = y + dy[i];
        if (prevX >= 0 && prevX < 4 && prevY >= 0 && prevY < 3)
            sec[n][x][y] = (sec[n][x][y] + fdp(n - 1, prevX, prevY)) % 1234567;
    }
    return sec[n][x][y];
}

int main(){
    int T;
    cin >> T;
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 3; ++j)
            sec[1][i][j] = 1;
    while (T--){
        int team = 0;
        cin >> deadEnd;
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 3; ++j)
            team = (team + fdp(deadEnd, i, j)) % 1234567;
        }
        cout << team << "\n";
    }

    return 0;
}*/
