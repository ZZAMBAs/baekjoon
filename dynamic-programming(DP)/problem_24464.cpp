/*
//
// Created by cho on 23. 5. 15.
//
#include <iostream>

using namespace std;

int N, dp[5][200000], res;

int fdp(int h, int day){
    if (dp[h][day] >= 0)
        return dp[h][day];

    dp[h][day] = 0;
    if (h == 0){
        for (int i = 1; i < 5; ++i) {
            dp[h][day] = (dp[h][day] + fdp(i, day - 1)) % 1000000007;
        }
    }else{
        dp[h][day] = (dp[h][day] + fdp(0, day - 1)) % 1000000007;
        for (int i = 1; i < 5; ++i) {
            if (i < h - 1 || i > h + 1)
                dp[h][day] = (dp[h][day] + fdp(i, day - 1)) % 1000000007;
        }
    }
    return dp[h][day];
}

int main(){
    cin >> N;
    fill(dp[0], dp[0] + 5 * 200000, -1);
    dp[0][0] = dp[1][0] = dp[2][0] = dp[3][0] = dp[4][0] = 1;

    for (int i = 0; i < 5; ++i) {
        res = (res + fdp(i, N - 1)) % 1000000007;
    }

    cout << res;
    return 0;
}*/
