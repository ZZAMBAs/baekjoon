/*
//
// Created by cho on 23. 1. 5.
//
#include <iostream>

using namespace std;

int N, num[80];
string K;

void backtraking(int idx){
    bool sw = false; // 나쁜 수열인지 체크
    for (int i = 1; i <= (idx + 1) / 2 && !sw; ++i) {
        int cmpStart = idx - i;
        for (int j = 0; j < i; ++j) {
            if (num[cmpStart - j] != num[idx - j])
                break;
            if (j == i - 1)
                sw = true;
        }
    }

    if (sw)
        return;

    if (idx == N - 1){
        for (int i = 0; i < N; ++i)
            K += (num[i] + 48);
        return;
    }

    for (int i = 1; i <= 3 && K.empty(); ++i) {
        num[idx + 1] = i;
        backtraking(idx + 1);
    }
}

int main(){
    cin >> N;
    backtraking(-1);

    cout << K;
    return 0;
}*/
