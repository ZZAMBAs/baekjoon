/*
//
// Created by cho on 23. 5. 21.
// 기저 조건의 문제. 탈출 조건의 순서에 따라 틀릴 수 있음에 유의한다.
#include <iostream>
#define MINVAL -10000000

using namespace std;

int N, S, T, arr[202], dp[202][202];

int fdp(int t, int n){
    if (n <= 0)
        return 0;

    if (dp[t][n] != MINVAL)
        return dp[t][n];

    if (t == 0)
        return MINVAL;

    dp[t][n] = -10000 * 2000;
    for (int i = S; i >= 1; --i)
        dp[t][n] = max(dp[t][n], fdp(t - 1, n - i) + arr[n]);

    return dp[t][n];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N;
    while (N){
        fill(dp[0], dp[0] + 202 * 202, MINVAL);
        int res = MINVAL;
        cin >> S >> T;
        for (int i = 1; i <= N; ++i)
            cin >> arr[i];

        arr[0] = arr[N + 1] = 0;
        res = max(res, fdp(T, N + 1));

        cout << res << "\n";
        cin >> N;
    }

    return 0;
}*/
