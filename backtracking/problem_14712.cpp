/*
//
// Created by AppDeveloper on 2022-12-18.
//
#include <iostream>

using namespace std;

int N, M, board[25][25], K;

void bruteforce(int r, int c){
    if (r == N){
        K++;
        return;
    }

    board[r][c] = 0;
    if (c + 1 < M)
        bruteforce(r, c + 1);
    else
        bruteforce(r + 1, 0);

    board[r][c] = 1;
    int chkR[3] = {r, r - 1, r - 1};
    int chkC[3] = {c - 1, c, c - 1};
    if (r != 0 && c != 0){
        bool sw = true;
        for (int i = 0; i < 3; ++i) {
            if (board[chkR[i]][chkC[i]] == 0){
                sw = false;
                break;
            }
        }
        if (sw)
            return;
    }
    if (c + 1 < M)
        bruteforce(r, c + 1);
    else
        fdp(r + 1, 0);
}

int main(){
    cin >> N >> M;
    backtracking(0, 0);
    cout << K;
    return 0;
}*/
