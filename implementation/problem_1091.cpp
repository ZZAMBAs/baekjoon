/*
//
// Created by cho on 23. 5. 27.
// 증명: https://injae-kim.github.io/problem_solving/2020/02/20/baekjoon-1091.html
#include <iostream>
#include <numeric>

using namespace std;

int N, P[48], S[48];
int treeNum[48], nowTreeNum = 1, maxLoop = 1;

bool checking(){
    for (int i = 0; i < N; ++i) {
        if (P[i] != i % 3)
            return false;
    }
    return true;
}

int simulation(){
    int temp[48], level = 0;

    if (checking())
        return level;

    while (maxLoop--) {
        for (int i = 0; i < N; ++i) {
            int nextIdx = S[i];
            temp[nextIdx] = P[i];
        }
        for (int i = 0; i < N; ++i) {
            P[i] = temp[i];
        }
        level++;

        if (checking())
            return level;
    }
    return -1;
}

int dfs(int idx, int cnt){
    if (treeNum[idx])
        return cnt;

    treeNum[idx] = nowTreeNum;
    return dfs(S[idx], cnt + 1);
}

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> S[i];
    }
    for (int i = 0; i < N; ++i) {
        if (!treeNum[i]) {
            maxLoop = lcm(maxLoop, dfs(i, 0));
            nowTreeNum++;
        }
    }

    cout << simulation();
    return 0;
}*/
