/*
//
// Created by AppDeveloper on 2022-08-20.
//
#include <iostream>

using namespace std;

int k;
char comp[9], num[10], maxVal[11], minVal[11];
bool used[10];

void bruteforce(int idx, int cnt){
    if (cnt == k + 1){
        for (int i = 0; i < k + 1; ++i) {
            // 최댓값인가?
            if (num[i] < maxVal[i])
                break;
            if (num[i] > maxVal[i]) {
                for (int j = 0; j < k + 1; ++j)
                    maxVal[j] = num[j];
                break;
            }
        }
        for (int i = 0; i < k + 1; ++i) {
            // 최솟값인가?
            if (num[i] > minVal[i])
                break;
            if (num[i] < minVal[i]) {
                for (int j = 0; j < k + 1; ++j)
                    minVal[j] = num[j];
                break;
            }
        }
        return;
    }

    for (int j = 0; j < 10; ++j) {
        if (idx > 0) { // 부등호에 따라 바로 거르기
            if (comp[idx - 1] == '<' && num[idx - 1] > j + 48)
                continue;
            if (comp[idx - 1] == '>' && num[idx - 1] < j + 48)
                continue;
        }

        if (!used[j]) {
            num[idx] = j + 48;
            used[j] = true;
            backtracking(idx + 1, cnt + 1);
            used[j] = false;
        }
    }

    return;
}

int main(){
    for (int i = 0; i < 10; ++i) {
        maxVal[i] = '0';
        minVal[i] = '9';
    }

    cin >> k;
    minVal[k + 1] = maxVal[k + 1] = '\0';

    for (int i = 0; i < k; ++i)
        cin >> comp[i];

    fdp(0, 0);

    cout << maxVal << "\n" << minVal;

    return 0;
}*/
