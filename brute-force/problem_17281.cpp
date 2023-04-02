/*
//
// Created by cho on 23. 1. 8.
//
#include <iostream>

using namespace std;

int N, batterScore[50][9], batterNum[9], nowBatterSeq, K, outCnt; // 첫번째 타자는 4번 타자로 결정.
bool base[4], visited[9];

void simulating(){
    outCnt = 0;
    nowBatterSeq = 0;
    int temp = 0;
    for (int i = 0; i < N; ++i) {
        fill(base, base + 4, false);
        while (outCnt != 3){
            int nowBatterNum = batterNum[nowBatterSeq];
            int nowPoint = batterScore[i][nowBatterNum];

            if (!nowPoint)
                outCnt++;
            base[0] = true;
            for (int j = 0; j < nowPoint; ++j) {
                if(base[3])
                    temp++;
                for (int k = 3; k > 0; --k)
                    base[k] = base[k - 1];
                base[0] = false;
            }
            nowBatterSeq = (nowBatterSeq + 1) % 9;
        }
        outCnt = 0;
    }
    K = max(K, temp);
}

void bruteforce(int idx){
    if (idx == 9){
        simulating();
        return;
    }
    
    if (idx == 3){
        bruteforce(idx + 1);
        return;
    }

    for (int i = 0; i < 9; ++i) {
        if (!visited[i]) {
            batterNum[idx] = i;
            visited[i] = true;
            bruteforce(idx + 1);
            visited[i] = false;
        }
    }
}

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < 9; ++j)
            cin >> batterScore[i][j];
    batterNum[3] = 0;
    visited[0] = true;
    
    fdp(0);

    cout << K;
    return 0;
}*/
