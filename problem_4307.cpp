/*
//
// Created by AppDeveloper on 2022-08-14.
// 애드 혹 (ad hoc) (딱히 알고리즘이 없는 문제)
#include <iostream>

using namespace std;

unsigned long long T, l, n, minVal, maxVal;

int main(){
    cin >> T;

    while (T--){
        unsigned long long source;
        cin >> l >> n;

        minVal = maxVal = 0; // 테케마다 전역 변수 초기화 꼭 해주자

        for (int i = 0; i < n; ++i) {
            cin >> source;
            minVal = max(minVal, min(source, l - source));
            maxVal = max(maxVal, max(source, l - source));
        }

        cout << minVal << " " << maxVal << "\n";
    }

    return 0;
}*/
