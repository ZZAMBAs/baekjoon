/*
//
// Created by cho on 23. 5. 7.
// Top-Down, Bottom-Up: https://to-be-great-organizer.tistory.com/102
#include <iostream>

using namespace std;

typedef long long ll;

int T, n;
ll dp[1000001] = {1, 1, 2,};

ll fdp(int num){
    if (dp[num] >= 0)
        return dp[num];

    dp[num] = (fdp(num - 1) + fdp(num - 2) + fdp(num - 3)) % 1000000009;
    return dp[num];
}

int main(){
    cin >> T;
    while (T--){
        fill(dp + 3, dp + 1000001, -1);
        cin >> n;
        cout << fdp(n) << "\n";
    }

    return 0;
}*/
