/*
//
// Created by AppDeveloper on 2022-07-04. 재시도: 2022-08-29
// sliding-window 면서 DP
#include <iostream>

using namespace std;

// 메모리 4mb 제한. int형 변수 500개 정도가 최대.
int n, preMax[3], preMin[3], curMax[3], curMin[3], a, b, c;

int main(){
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            preMax[j] = curMax[j];
            preMin[j] = curMin[j];
        }

        cin >> a >> b >> c;
        curMax[0] = max(preMax[0] + a, preMax[1] + a);
        curMax[1] = max(max(preMax[0] + b, preMax[1] + b), preMax[2] + b);
        curMax[2] = max(preMax[1] + c, preMax[2] + c);
        curMin[0] = min(preMin[0] + a, preMin[1] + a);
        curMin[1] = min(min(preMin[0] + b, preMin[1] + b), preMin[2] + b);
        curMin[2] = min(preMin[1] + c, preMin[2] + c);
    }

    cout << max(curMax[0], max(curMax[1], curMax[2])) << " " << min(min(curMin[0], curMin[1]), curMin[2]);

    return 0;
}
*/
