/*
//
// Created by AppDeveloper on 2022-05-27.
// 수학으로 풀었지만, 비트 마스킹으로도 풀어보자.
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int arr[100000], n, K, n = 0, bottleNum, minVal = 0, idx; // arr의 인덱스는 (2^n)L의 n이며 값은 물병 수이다.
vector<int> idxStore;

int main(){
    scanf("%d %d", &n, &K);
    arr[0] = n;

    while (arr[n] != 0){
        arr[n + 1] = arr[n] / 2;
        arr[n] = arr[n] % 2;
        if (arr[n] % 2 == 1)
            idxStore.emplace_back(n);
        bottleNum += arr[n];
        n++;
    }

    if (bottleNum > K){
        idx = idxStore.size() - K;
        minVal = pow(2, idxStore[idx]);
        for (int i = idx - 1; i >= 0; --i)
            minVal -= pow(2, idxStore[i]);
    }

    cout << minVal;

    return 0;
}*/
