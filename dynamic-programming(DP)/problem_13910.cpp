/*
//
// Created by cho on 23. 5. 4.
//
#include <iostream>
#include <vector>

using namespace std;

int N, M, S[100], dp[10001];
vector<int> v;

int fdp(int num){
    if (dp[num] >= 0)
        return dp[num];

    dp[num] = 10001;
    for(auto n : v){
        if (num - n > 0){
            dp[num] = min(dp[num], fdp(num - n) + 1);
        }

    }
    return dp[num];
}

int main(){ // 웍은 동시에 "두번"까지 사용가능.
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    bool sum[10001];
    fill(sum, sum + 10001, false);
    fill(dp, dp + 10001, -1);
    for(int i = 0; i < M; i++){
        cin >> S[i];
        sum[S[i]] = true;
    }
    for (int i = 0; i < M - 1; ++i) {
        for (int j = i + 1; j < M; ++j) {
            int temp = S[i] + S[j];
            if (temp <= N)
                sum[temp] = true;
        }
    }

    for (int i = N; i > 0; --i) {
        if(sum[i]) {
            dp[i] = 1;
            v.emplace_back(i);
        }
    }

    int res = fdp(N);
    cout << (res > 10000 ? -1 : res);
    return 0;
}*/
