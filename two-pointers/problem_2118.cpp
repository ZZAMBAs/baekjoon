/*
//
// Created by cho on 23. 6. 26.
// 좋은 누적 합 + 투 포인터. 이분 탐색으로도 풀이가 가능.
#include <iostream>

using namespace std;

int main(){
    int N, arr[50000], distSum = 0, prefixSum[50001], res = 0;

    cin >> N;
    fill(prefixSum, prefixSum + N, 0);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
        prefixSum[i + 1] = prefixSum[i] + arr[i];
        distSum += arr[i];
    }

    int s = 0, e = 1;
    while(s < e && e <= N){
        int clockDist = prefixSum[e] - prefixSum[s];
        int counterDist = distSum - clockDist;
        res = max(res, min(clockDist, counterDist));

        if (clockDist > counterDist)
            s++;
        else
            e++;
    }

    cout << res;
    return 0;
}*/
