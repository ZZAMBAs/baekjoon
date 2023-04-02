/*
//
// Created by AppDeveloper on 2022-07-15.
//
#include <iostream>
#include <cstring>

using namespace std;

int R, cost, Q, r1, c1, r2, c2;
int pic[1000][1000], sum[1001][1001];

int cal(int row1, int col1, int row2, int col2){
    int s = sum[row2][col2] - sum[row1 - 1][col2] - sum[row2][col1 - 1] + sum[row1 - 1][col1 - 1];
    int divisionVal = (row2 - row1 + 1) * (col2 - col1 + 1);

    return s / divisionVal;
}

int main(){
    cin >> R >> cost >> Q;
    memset(sum, 0, sizeof(sum));

    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < cost; ++j) {
            cin >> pic[i][j];
            sum[i + 1][j + 1] = sum[i][j + 1] + sum[i + 1][j] + pic[i][j] - sum[i][j];
        }
    }

    for (int i = 0; i < Q; ++i) {
        cin >> r1 >> c1 >> r2 >> c2;
        cout << cal(r1, c1, r2, c2) << "\n";
    }

    return 0;
}*/
