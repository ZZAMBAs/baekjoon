/*
//
// Created by cho on 23. 3. 16.
//
#include <iostream>

using namespace std;

int main(){
    int N, res = 0, j[50000], opp[50000], jSum[50001] = {0, }, oppSum[50001] = {0, };
    cin >> N;
    for (int i = 0; i < N / 2; ++i) {
        cin >> j[i] >> opp[i];
        jSum[i + 1] = jSum[i] + j[i];
        oppSum[i + 1] = oppSum[i] + opp[i];
    }

    for (int i = 1; i <= N / 2; ++i) { // 밑장 빼기 턴
        int sum = jSum[i - 1] + oppSum[N / 2] - oppSum[i - 1];
        res = max(res, sum);

        sum = jSum[i] + oppSum[N / 2 - 1] - oppSum[i - 1];
        res = max(res, sum);
    }

    cout << res;
    return 0;
}*/
