/*
//
// Created by cho on 23. 2. 7. 재시도 23. 6. 20
// https://yabmoons.tistory.com/536
#include <iostream>

using namespace std;

typedef long long ll;

int N;
ll dp[31] = {1, 0, 3};

ll fdp(int num){
    if (dp[num] >= 0)
        return dp[num];

    dp[num] = 0;
    if (num - 2 >= 0)
        dp[num] += fdp(num - 2) * 3;
    for (int i = num; i > 2; i -= 2) {
        dp[num] += fdp(num - i) * 2;
    }
    return dp[num];
}

int main(){
    fill(dp + 3, dp + 31, -1);
    cin >> N;
    if (N % 2 == 1)
        cout << 0;
    else
        cout << fdp(N);

    return 0;
}*/
