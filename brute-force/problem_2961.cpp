/*
//
// Created by cho on 23. 5. 11.
// 비트마스킹 풀이도 가능하다.
#include <iostream>

using namespace std;

int N, sinMat[10], sseunMat[10], res = INT32_MAX;

void dfs(int idx, int sMat, int ssMat, int cnt){
    if (idx == N) {
        if (cnt && abs(sMat - ssMat) < res)
            res = abs(sMat - ssMat);
        return;
    }

    dfs(idx + 1, sMat * sinMat[idx], ssMat + sseunMat[idx], cnt + 1);
    dfs(idx + 1, sMat, ssMat, cnt);
}

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> sinMat[i] >> sseunMat[i];
    }
    dfs(0, 1, 0, 0);

    cout << res;
    return 0;
}*/
