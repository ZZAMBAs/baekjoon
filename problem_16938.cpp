/*
//
// Created by AppDeveloper on 2022-12-06.
// N < 16 이라 비트마스킹으로도 가능.
#include <iostream>
#include <vector>

using namespace std;

int N, L, R, X, K;
vector<int> memory;

void bruteforce(int idx, int sum, int easiest, int hardest){
    if (idx == N){
        int diff = hardest - easiest;
        if (sum >= L && sum <= R && diff >= X && diff != INT32_MAX)
            K++;
        return;
    }
    
    bruteforce(idx + 1, sum + memory[idx], min(easiest, memory[idx]), max(hardest, memory[idx]));
    fdp(idx + 1, sum, easiest, hardest);
}

int main(){
    int ins;
    cin >> N >> L >> R >> X;
    for (int i = 0; i < N; ++i) {
        cin >> ins;
        memory.emplace_back(ins);
    }
    
    backtracking(0, 0, INT32_MAX, 0);
    cout << K;
    return 0;
}*/
