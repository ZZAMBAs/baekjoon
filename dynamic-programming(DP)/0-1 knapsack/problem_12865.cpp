/*
//
// Created by AppDeveloper on 2022-06-12. 재시도: 2022-07-09, 재시도 2022-12-04
//
#include <iostream>
#include <vector>

using namespace std;

int N, K, dp[101][100001], w, v;
vector<pair<int, int>> stuff;

int main(){
    fill(dp[0], dp[0] + 100001, 0);
    cin >> N >> K;
    for (int i = 0; i < N; ++i) {
        cin >> w >> v;
        stuff.emplace_back(w, v);
    }

    for (int i = 1; i <= N; ++i) {
        int curW = stuff[i - 1].first;
        int curV = stuff[i - 1].second;
        for (int j = 0; j < 100001; ++j) {
            if (j < curW)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - curW] + curV);
        }
    }
    cout << dp[N][K];
    return 0;
}
*/
