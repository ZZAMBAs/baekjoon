/*
//
// Created by AppDeveloper on 2022-10-30.
//
#include <iostream>

using namespace std;

int main(){
    int N, M, under;
    string words[10];
    int underNum[9];
    cin >> N >> M;
    under = M;
    for (int i = 0; i < N; ++i) {
        cin >> words[i];
        under -= words[i].size();
    }
    int plusUnderNum = under % (N - 1), avgUnder = under / (N - 1);
    for (int i = 0; i <= N - 2; ++i) {
        underNum[i] = avgUnder;
    }

    for (int i = 0; i <= N - 2; ++i) { // 소문자 부분 처리
        if (plusUnderNum > 0 && words[i + 1][0] >= 97 && words[i + 1][0] <= 122){
            underNum[i]++;
            plusUnderNum--;
        }
    }
    for (int i = N - 2; plusUnderNum > 0; --i) { // 대문자 부분 처리
        if (words[i + 1][0] < 97) {
            underNum[i]++;
            plusUnderNum--;
        }
    }

    for (int i = 0; i < N; ++i) {
        cout << words[i];
        if (i != N - 1)
            for (int j = 0; j < underNum[i]; ++j)
                cout << "_";
    }
    return 0;
}*/
