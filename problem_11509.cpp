/*
//
// Created by cho on 23. 1. 2. 재시도: 23. 3. 5
//
#include <iostream>

using namespace std;

int N, H[1000001], res;
int cnt[1000001];

int main(){
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cin >> H[i];
        cnt[H[i]]++;
        if (cnt[H[i] + 1])
            cnt[H[i] + 1]--;
    }
    for (int i = 1; i <= 1000000; ++i) {
        res += cnt[i];
    }

    cout << res;
    return 0;
}*/
