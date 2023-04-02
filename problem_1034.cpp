/*
//
// Created by AppDeveloper on 2022-07-06.
//
#include <iostream>
#include <algorithm>

using namespace std;

int n, M, K, source, team = 0;
long long num[50];
int zeroNum[50] = {0, };

int main(){
    scanf("%d %d", &n, &M);

    for (int i = 0; i < n; ++i) {
        long long number = 0;
        int n = 0;

        for (int j = 0; j < M; ++j) {
            number = number << 1;
            scanf("%1d", &n);
            if (n == 0)
                zeroNum[i]++;
            number += n;
        }

        num[i] = number;
    }

    scanf("%d", &K);
    
    for (int i = 0; i < n; ++i) {
        if (K < zeroNum[i])
            continue;
        if (zeroNum[i] % 2 != K % 2)
            continue;

        long long int number = num[i];
        int numOfNum = 0;
        for (int j = i; j < n; ++j) {
            if (num[j] == number)
                numOfNum++;
        }

        team = max(team, numOfNum);
    }

    printf("%d", team);
    return 0;
}*/
