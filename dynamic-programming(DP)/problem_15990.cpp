/*
//
// Created by cho on 23. 4. 27.
//
#include <iostream>
#include <queue>

using namespace std;

typedef long long ll;

ll T, n, dp[100001][3]; // 0: 1, 1: 2, 2: 3

ll fdp(ll num, ll pre){
    if (dp[num][pre] >= 0)
        return dp[num][pre] % 1000000009;

    dp[num][pre] = (fdp(num - pre - 1, (pre + 1) % 3) +
            fdp(num - pre - 1, (pre + 2) % 3)) % 1000000009;
    return dp[num][pre];
}

int main(){
    cin >> T;
    fill(dp[4], dp[4] + 99997 * 3, -1);
    while (T--){
        dp[1][0] = dp[2][1] = dp[3][0] = dp[3][1] = dp[3][2] = 1;
        cin >> n;
        cout << ((fdp(n, 0) + fdp(n, 1)) % 1000000009 + fdp(n, 2)) % 1000000009 << "\n";
    }
    
    return 0;
}*/
