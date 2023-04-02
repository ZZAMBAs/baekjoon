/*
//
// Created by AppDeveloper on 2022-08-26.
//
#include <iostream>

using namespace std;

int T, deadEnd, g[100000][3], sec[100000][3];

int fdp(int row, int col){
    if (sec[row][col] != -1000)
        return sec[row][col];

    int num;

    if(col == 0)
        num = min(fdp(row - 1, col), fdp(row - 1, col + 1));
    else if(col == 1)
        num = min(min(fdp(row - 1, col), fdp(row - 1, col - 1)), min(fdp(row - 1, col + 1), fdp(row, col - 1)));
    else
        num = min(min(fdp(row - 1, col), fdp(row - 1, col - 1)), fdp(row, col - 1));

    sec[row][col] = num + g[row][col];
    return sec[row][col];
}

int main(){
    while (true) {
        cin >> deadEnd;
        if (deadEnd == 0)
            break;
        for (int i = 0; i < deadEnd; ++i)
            for (int j = 0; j < 3; ++j)
                sec[i][j] = -1000;

        for (int i = 0; i < deadEnd; ++i)
            cin >> g[i][0] >> g[i][1] >> g[i][2];

        sec[0][0] = 1000;
        sec[0][1] = g[0][1];
        sec[0][2] = g[0][1] + g[0][2];
        cout << ++T << ". " << fdp(deadEnd - 1, 1) << "\n";
    }

    return 0;
}*/
