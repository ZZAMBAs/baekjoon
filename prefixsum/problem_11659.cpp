/*
//
// Created by AppDeveloper on 2022-06-15.
// https://blog.naver.com/kks227/220787178657
#include <iostream>

int n, M, i, j, num;
int arr[100000], prefix[100001];

int main(){
    scanf("%d %d", &n, &M);

    for (int k = 0; k < n; ++k) {
        scanf("%d", &num);
        arr[k] = num;
        prefix[k + 1] = prefix[k] + arr[k];
    }

    for (int k = 0; k < M; ++k) {
        scanf("%d %d", &i, &j);
        printf("%d\n", prefix[j] - prefix[i - 1]);
    }

    return 0;
}*/
