/*
//
// Created by AppDeveloper on 2022-07-28. 재시도 23. 3. 24
//
#include <iostream>

using namespace std;

int N, M, res;
char matrixA[50][50], matrixB[50][50];

int main(){
    cin >> N >> M;
    for (int i = 0; i < 2 * N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (i < N)
                cin >> matrixA[i][j];
            else
                cin >> matrixB[i - N][j];
        }
    }

    cout << res;
    return 0;
}
*/
