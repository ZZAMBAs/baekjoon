/*
//
// Created by AppDeveloper on 2022-12-19.
//
#include <iostream>

using namespace std;

int N, M, K[8] = {0, };

void bruteforce(int idx, int num){
    if (num == M){
        for (int i = 1; i <= M; ++i)
            cout << K[i] << " ";
        cout << "\n";
        return;
    }

    for (int i = 1; i <= N; ++i) {
        K[idx] = i;
        fdp(idx + 1, num + 1);
    }
}

int main(){
    cin >> N >> M;
    backtracking(1, 0);
    return 0;
}*/
