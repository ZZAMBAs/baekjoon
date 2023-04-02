/*
//
// Created by AppDeveloper on 2022-09-04. 재시도 2022-12-06
// https://yabmoons.tistory.com/491
#include <iostream>
#include <map>

using namespace std;

int n, k, ins, dp[10001] = {1, };
map<int, int> m;

int main(){
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> ins;
        if (m[ins]) // 중복 방지
            continue;
        m[ins] = 1;
        for (int j = 1; j < 10001; j++) {
            if (j - ins < 0)
                continue;
            dp[j] += dp[j - ins];
        }

    }

    cout << dp[k];

    return 0;
}
*/
