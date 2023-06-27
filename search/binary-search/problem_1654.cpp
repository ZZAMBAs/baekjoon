/*
//
// Created by cho on 23. 6. 27.
// 파라메트릭 서치에 대한 집중 탐구 필요
#include <iostream>

using namespace std;

int main(){
    unsigned int N, K, wire[10000], s = 1, e = 0, res = 0;
    cin >> K >> N;
    for (int i = 0; i < K; ++i) {
        cin >> wire[i];
        e = max(e, wire[i]);
    }

    while (s <= e){
        unsigned int mid = (s + e) / 2, cnt = 0; // int mid 오버플로우 주의

        for (int i = 0; i < K; ++i)
            cnt += wire[i] / mid;

        if (cnt >= N){
            res = max(res, mid);
            s = mid + 1;
        }
        else
            e = mid - 1;
    }

    cout << res;
    return 0;
}*/
