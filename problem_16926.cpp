/*
//
// Created by AppDeveloper on 2022-09-20.
//
#include <iostream>

using namespace std;

int deadEnd, M, R, arr[300][300];

void rotate(){
    int cnt = 0;

    while (cnt != min(deadEnd, M) / 2) {
        for (int i = cnt; i < M - cnt - 1; ++i)
            swap(arr[cnt][i], arr[cnt][i + 1]);
        for (int i = cnt; i < deadEnd - cnt - 1; ++i)
            swap(arr[i][M - cnt - 1], arr[i + 1][M - cnt - 1]);
        for (int i = M - cnt - 1; i > cnt; --i)
            swap(arr[deadEnd - cnt - 1][i], arr[deadEnd - cnt - 1][i - 1]);
        for (int i = deadEnd - cnt - 1; i > cnt + 1; --i)
            swap(arr[i][cnt], arr[i - 1][cnt]);
        cnt++;
    }
    return;
}

int main(){
    cin >> deadEnd >> M >> R;
    for (int i = 0; i < deadEnd; ++i)
        for (int j = 0; j < M; ++j)
            cin >> arr[i][j];

    for (int i = 0; i < R; ++i)
        rotate();

    for (int i = 0; i < deadEnd; ++i) {
        for (int j = 0; j < M; ++j)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    return 0;
}*/
