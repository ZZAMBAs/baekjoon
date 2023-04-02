/*
//
// Created by AppDeveloper on 2022-10-28.
// 배낭 문제: https://dheldh77.tistory.com/entry/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-%EB%B0%B0%EB%82%AD-%EB%AC%B8%EC%A0%9CKnapsack-Problem
// https://gsmesie692.tistory.com/113
#include <iostream>

using namespace std;

int N, T, pdp[101][10001];
pair<int, int> subj[101];

int fdp(int row, int t){
    if (pdp[row][t] >= 0)
        return pdp[row][t];

    int time = subj[row].first, value = subj[row].second;
    if (t < time)
        pdp[row][t] = pdp[row - 1][t];
    else
        pdp[row][t] = max(pdp[row - 1][t], pdp[row - 1][t - time] + value);

    return pdp[row][t];
}

int main(){
    fill(pdp[1], pdp[1] + 100 * 10001, -1);
    int K, S;
    cin >> N >> T;
    for (int i = 1; i <= N; ++i) {
        cin >> K >> S;
        subj[i] = {K, S};
    }
    for (int i = 1; i <= N; ++i)
        for (int j = 0; j <= T; ++j)
            fdp(i, j);
    
    cout << pdp[N][T];
    return 0;
}*/
