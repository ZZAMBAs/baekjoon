/*
//
// Created by AppDeveloper on 2022-08-30. 재시도 2023.06.13
//
#include <iostream>
#include <algorithm>

using namespace std;

int T, N, L[100000];

int main(){
    cin >> T;
    while (T--){
        cin >> N;
        for (int i = 0; i < N; ++i) {
            cin >> L[i];
        }
        sort(L, L + N);
        int left = L[N - 1], right = L[N - 1], res = 0;
        int idx = N - 2, sw = 1;
        while (idx >= 0){
            if (sw > 0){
                res = max(res, right - L[idx]);
                right = L[idx];
            }
            else{
                res = max(res, left - L[idx]);
                left = L[idx];
            }
            sw *= -1;
            idx--;
        }
        res = max(res, right - left);
        cout << res << "\n";
    }
    return 0;
}
*/
