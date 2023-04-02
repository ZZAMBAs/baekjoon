/*
//
// Created by AppDeveloper on 2022-11-04. 재시도 2023-01-17
// 최적의 답: https://dev-sbee.tistory.com/183
#include <iostream>

using namespace std;

int N, arr[1000], dp[1001];

int fdp(int num){
    if (dp[num] >= 0)
        return dp[num];
    int maxV = arr[num - 1], minV = arr[num - 1];
    for (int i = num - 2; i >= 0; --i) {
        maxV = max(maxV, arr[i]);
        minV = min(minV, arr[i]);
        dp[num] = max(dp[num], fdp(i) + maxV - minV);
    }
    return dp[num];
}

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> arr[i];
    dp[0] = dp[1] = 0;
    fill(dp + 2, dp + 1001, -1);

    cout << fdp(N);
    return 0;
}
*/
