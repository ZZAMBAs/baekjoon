/*
//
// Created by AppDeveloper on 2022-09-08.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int T, deadEnd, x, y;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;

    while (T--){
        bool sw = true;
        vector<int> xNum, yNum;
        map<int, int> xCnt, yCnt;
        cin >> deadEnd;
        for (int i = 0; i < deadEnd; ++i) {
            cin >> x >> y;
            xNum.emplace_back(x);
            yNum.emplace_back(y);
            xCnt[x]++;
            yCnt[y]++;
        }
        int xVal = xCnt[xNum[0]], yVal = yCnt[yNum[0]];

        for (int i = 0; i < deadEnd; ++i) {
            if (xVal != xCnt[xNum[i]] || yVal != yCnt[yNum[i]]) {
                sw = false;
                break;
            }
        }
        if (sw)
            cout << "BALANCED\n";
        else
            cout << "NOT BALANCED\n";
    }

    return 0;
}*/
