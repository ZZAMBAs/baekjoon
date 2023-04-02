/*
//
// Created by AppDeveloper on 2022-06-15.
//
#include <iostream>

int n, M, xStart, xEnd, y1, yEnd;
int arr[1024][1024], prefix[1025][1025];

int main(){
    scanf("%d %d", &n, &M);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &arr[i][j]);
            prefix[i + 1][j + 1] = arr[i][j] + prefix[i + 1][j] + prefix[i][j + 1] - prefix[i][j];

        }
    }

    for (int i = 0; i < M; ++i) {
        scanf("%d %d %d %d", &xStart, &y1, &xEnd, &yEnd);
        printf("%d\n", prefix[xEnd][yEnd] - prefix[xEnd][y1 - 1] - prefix[xStart - 1][yEnd] +
        prefix[xStart - 1][y1 - 1]);
    }

    return 0;
}*/
