/*
//
// Created by AppDeveloper on 2022-12-25.
// 무지성으로 풀면 안되는 문제 (단순히 bool로만 만들면 안되는 문제)
#include <iostream>
#include <vector>

using namespace std;

int N, M, canSolveNum, canSolve, K = 11;
vector<vector<int>> men(10);
int solve[11];

bool isOk(){
    for (int i = 1; i <= N; ++i) {
        if (!solve[i])
            return false;
    }
    return true;
}

void bruteforce(int cnt, int idx){
    for (int s : men[idx])
        solve[s]++;

    if (isOk())
        K = min(K, cnt);
    else {
        for (int i = idx + 1; i < M; ++i)
            fdp(cnt + 1, i);
    }

    for (int s : men[idx])
        solve[s] = max(solve[s] - 1, 0);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        cin >> canSolveNum;
        for (int j = 0; j < canSolveNum; ++j) {
            cin >> canSolve;
            men[i].emplace_back(canSolve);
        }

    }
    for (int i = 0; i < M; ++i) {
        fill(solve, solve + 11, 0);
        backtracking(1, i);
    }


    cout << (K > 10 ? -1 : K);
    return 0;
}*/
