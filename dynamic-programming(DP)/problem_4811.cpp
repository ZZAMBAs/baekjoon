/*
//
// Created by AppDeveloper on 2022-11-12.
// Catalan Number: https://suhak.tistory.com/77, https://shacoding.com/2021/12/10/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-%EC%B9%B4%ED%83%88%EB%9E%91-%EC%88%98%EB%A1%9C-%EC%95%8C%EC%95%84%EB%B3%B4%EB%8A%94-memoization/
#include <iostream>

using namespace std;
typedef unsigned long long int ll;

ll N, dp[31][31];

ll fdp(int row, int col){ // row: H, col: W
    if (row > col)
        return 0;

    if (dp[row][col])
        return dp[row][col];

    dp[row][col] = fdp(row - 1, col) + fdp(row, col - 1);
    return dp[row][col];
}

int main(){
    fill(dp[0], dp[0] + 31, 1);
    while (true) {
        cin >> N;
        if (!N)
            return 0;
        cout << fdp(N, N) << "\n";
    }
}*/
