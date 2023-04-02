/*
//
// Created by AppDeveloper on 2022-08-17. 재시도 2022-12-26
// 답 본 문제
#include <iostream>

using namespace std;

int N, M, K, oneDayMoney[100000], maxSingleVal;

int main(){
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        cin >> oneDayMoney[i];
        maxSingleVal = max(maxSingleVal, oneDayMoney[i]);
    }

    int s = maxSingleVal, e = 1000000000;
    while (s <= e){
        int m = (s + e) / 2;
        int withdrawCnt = 0, curMoney = 0;
        for (int i = 0; i < N; ++i) {
            if (curMoney < oneDayMoney[i]){
                withdrawCnt++;
                curMoney = m;
            }
            curMoney -= oneDayMoney[i];
        }

        if (withdrawCnt <= M) {
            e = m - 1;
            K = m;
        }
        else
            s = m + 1;
    }

    cout << K;
    return 0;
}
*/
