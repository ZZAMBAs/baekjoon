/*
//
// Created by AppDeveloper on 2022-08-27.
// 이분 탐색으로도 풀 수 있다.
#include <iostream>

using namespace std;

int deadEnd, H, suk[500001], jong[500001], source, minVal = 200000, minCnt;

int main(){
    cin >> deadEnd >> H;
    for (int i = 0; i < deadEnd; ++i) {
        cin >> source;
        if (i % 2)
            jong[H - source + 1]++;
        else
            suk[source]++;
    }

    for (int i = H; i > 0; --i) {
        suk[i - 1] += suk[i];
        jong[(H + 1 - i) + 1] += jong[(H + 1 - i)];
    }

    for (int i = 1; i <= H; ++i) {
        int sum = jong[i] + suk[i];
        if (minVal > sum){
            minVal = sum;
            minCnt = 1;
        }
        else if (minVal == sum)
            minCnt++;
    }

    cout << minVal << " " << minCnt;
    return 0;
}*/
