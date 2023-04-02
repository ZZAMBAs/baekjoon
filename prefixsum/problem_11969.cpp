/*
//
// Created by AppDeveloper on 2022-06-16.
//
#include <iostream>

int n, Q, a, b, num;
int prefixH[100001], prefixG[100001], prefixJ[100001];

int main(){
    scanf("%d %d", &n, &Q);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &num);

        prefixH[i + 1] = prefixH[i];
        prefixG[i + 1] = prefixG[i];
        prefixJ[i + 1] = prefixJ[i];

        if (num == 1)
            prefixH[i + 1]++;
        else if (num == 2)
            prefixG[i + 1]++;
        else if (num == 3)
            prefixJ[i + 1]++;
    }

    for (int i = 0; i < Q; ++i) {
        scanf("%d %d", &a, &b);
        printf("%d %d %d\n", prefixH[b] - prefixH[a - 1], prefixG[b] - prefixG[a - 1], prefixJ[b] - prefixJ[a - 1]);
    }

    return 0;
}*/
