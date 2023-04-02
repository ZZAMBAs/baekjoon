/*
//
// Created by AppDeveloper on 2022-05-29.
// 다시 풀어볼 것. (배열/리스트/큐 등을 이용해서)
#include <iostream>

using namespace std;

int n, M, queue[51], MIdx[51], num, sum = 0;

void pop(){
    for (int i = 0; i < n - 1; ++i)
        queue[i] = queue[i + 1];
    --n;
}

void leftRotate(){
    int temp = queue[0];
    for (int i = 0; i < n - 1; ++i)
        queue[i] = queue[i + 1];
    queue[n - 1] = temp;
}

void rightRotate(){
    int temp = queue[n - 1];
    for (int i = n - 1; i > 0; ++i)
        queue[i] = queue[i - 1];
    queue[0] = temp;
}

int main(){
    scanf("%d %d", &n, &M);

    for (int i = 1; i <= n; ++i)
        queue[i] = i;

    for (int i = 1; i <= M; ++i)
        scanf("%d", &MIdx[i]);

    for (int i = 1; i <= M; ++i) {
        int half = n / 2;
        num = 0;

        if (MIdx[i] > half + 1) {
            num += n - MIdx[i] + 1;
            for (int j = i + 1; j <= M; ++j) {
                MIdx[j] = MIdx[j] + num - 1;
                MIdx[j] %= n;
                if (MIdx[j] <= 0)
                    MIdx[j] += n;
            }
        }
        else {
            num += MIdx[i] - 1;
            for (int j = i + 1; j <= M; ++j) {
                MIdx[j] = MIdx[j] - num - 1;
                MIdx[j] %= n;
                if (MIdx[j] <= 0)
                    MIdx[j] += n;
            }
        }
        n--;
        sum += num;
    }
    cout << sum;

    return 0;
}*/
