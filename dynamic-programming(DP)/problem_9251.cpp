/*
//
// Created by AppDeveloper on 2022-08-02. 재시도: 2022-12-11
// https://melonicedlatte.com/algorithm/2018/03/15/181550.html
// 굉장히 어려웠던 문제
#include <iostream>

using namespace std;

int dp[1001][1001], K, s1Size, s2Size;
string s1, s2;

int main(){
    cin >> s1 >> s2;
    s1Size = s1.size();
    s2Size = s2.size();

    for (int i = 1; i <= s2Size; ++i) {
        for (int j = 1; j <= s1Size; ++j) {
            if (s2[i - 1] == s1[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }

    cout << dp[s2Size][s1Size];
    return 0;
}
*/
