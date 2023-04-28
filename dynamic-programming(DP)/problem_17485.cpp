/*
//
// Created by cho on 23. 4. 28.
//
#include <iostream>

using namespace std;

int N, M, space[1000][1002], dp[3][1002], curline = 2, res = INT32_MAX;

int main(){
    cin >> N >> M;
    fill(space[0], space[0] + 1000 * 1002, 1000000);
    fill(dp[0], dp[0] + 3 * 1002, 1000000);
    for (int i = 0; i < N; ++i) {
        for (int j = 1; j <= M; ++j) {
            cin >> space[i][j];
        }
    }
    for (int i = 1; i <= M; ++i) {
        for (int j = -1; j <= 1; ++j) { // 좌하단, 하단, 우하단
            dp[j + 1][i] = space[0][i - j] + space[1][i];
        }
    }

    while (curline < N){
        int temp[3][1002];
        for (int i = 1; i <= M; ++i) {
            for (int j = 0; j < 3; ++j) {
                temp[j][i] = min(dp[(j + 1) % 3][i + 1 - j], dp[(j + 2) % 3][i + 1 - j]) + space[curline][i];
            }
        }
        for (int j = 0; j < 3; ++j) {
            for (int k = 1; k <= M; ++k) {
                dp[j][k] = temp[j][k];
            }
        }

        curline++;
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 1; j <= M; ++j) {
            res = min(res, dp[i][j]);
        }
    }
    cout << res;
    return 0;
}*/
