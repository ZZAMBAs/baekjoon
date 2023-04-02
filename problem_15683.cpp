/*
//
// Created by AppDeveloper on 2022-12-16.
// 깔끔한 구현이 필요하다.
#include <iostream>
#include <vector>

using namespace std;

int N, M, K = 64;
vector<pair<int, int>> p; // 해당 CCTV의 좌표
vector<int> pDir;
int temp[8][8], board[8][8];

void side(int r, int c, int d){
    int curC = c + d;
    while (curC >= 0 && curC < M && temp[r][curC] != 6){
        if (temp[r][curC] == 0)
            temp[r][curC] = -1;
        curC += d;
    }
}

void sideAll(int r, int c){
    side(r, c, 1);
    side(r, c, -1);
}

void upDown(int r, int c, int d){
    int curR = r + d;
    while (curR >= 0 && curR < N && temp[curR][c] != 6){
        if (temp[curR][c] == 0)
            temp[curR][c] = -1;
        curR += d;
    }
}

void upDownAll(int r, int c){
    upDown(r, c, 1);
    upDown(r, c, -1);
}

void check(){
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            temp[i][j] = board[i][j];

    for (int i = 0; i < p.size(); i++) {
        pair<int, int> cur = p[i];
        int curR = cur.first;
        int curC = cur.second;
        int cctvNumber = board[curR][curC];

        if (cctvNumber == 1){
            switch (pDir[i]) {
                case 1:
                    side(curR, curC, 1);
                    break;
                case 2:
                    upDown(curR, curC, 1);
                    break;
                case 3:
                    side(curR, curC, -1);
                    break;
                case 4:
                    upDown(curR, curC, -1);
            }
        }
        else if (cctvNumber == 2){
            switch (pDir[i]) {
                case 1:
                case 3:
                    sideAll(curR, curC);
                    break;
                case 2:
                case 4:
                    upDownAll(curR, curC);
            }
        }
        else if (cctvNumber == 3){
            switch (pDir[i]) {
                case 1:
                    side(curR, curC, 1);
                    upDown(curR, curC, -1);
                    break;
                case 2:
                    side(curR, curC, 1);
                    upDown(curR, curC, 1);
                    break;
                case 3:
                    side(curR, curC, -1);
                    upDown(curR, curC, 1);
                    break;
                case 4:
                    side(curR, curC, -1);
                    upDown(curR, curC, -1);
            }
        }
        else if (cctvNumber == 4){
            switch (pDir[i]) {
                case 1:
                    sideAll(curR, curC);
                    upDown(curR, curC, -1);
                    break;
                case 2:
                    side(curR, curC, 1);
                    upDownAll(curR, curC);
                    break;
                case 3:
                    sideAll(curR, curC);
                    upDown(curR, curC, 1);
                    break;
                case 4:
                    side(curR, curC, -1);
                    upDownAll(curR, curC);
            }
        }
        else{
            sideAll(curR, curC);
            upDownAll(curR, curC);
        }
    }

    int sum = 0;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            if (temp[i][j] == 0)
                sum++;
    K = min(K, sum);
}

void bruteforce(int idx){
    if (idx == p.size()){
        check();
        return;
    }

    for (int i = 1; i <= 4; ++i) {
        pDir[idx] = i;
        fdp(idx + 1);
    }
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j) {
            cin >> board[i][j];
            if (board[i][j] >= 1 && board[i][j] <= 5)
                p.emplace_back(i, j);
            if (board[i][j] != 0)
                K--;
        }
    pDir.resize(p.size());
    
    backtracking(0);
    cout << K;
    return 0;
}*/
