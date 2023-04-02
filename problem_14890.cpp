/*
//
// Created by cho on 23. 3. 25.
//
#include <iostream>

using namespace std;

int N, L, res, board[100][100];

void check(int idx){
    int arr[2][100], seq = 0;
    bool alreadyPlaced[100];
    for (int i = 0; i < N; ++i) {
        arr[0][i] = board[idx][i];
        arr[1][i] = board[i][idx];
    }

    while (seq < 2) {
        int cursor = 0;
        fill(alreadyPlaced, alreadyPlaced + 100, false);
        while (cursor < N - 1) {
            int nowNum = arr[seq][cursor];
            int nextNum = arr[seq][cursor + 1];
            bool sw = true;

            if (nowNum == nextNum){
                cursor++;
                continue;
            }else if (nextNum - nowNum == 1){ // 오르막 길
                for (int i = 0; i < L; ++i) {
                    if (cursor - i < 0 || alreadyPlaced[cursor - i] || arr[seq][cursor - i] != nowNum){
                        sw = false;
                        break;
                    }
                    alreadyPlaced[cursor - i] = true;
                }
            }
            else if (nowNum - nextNum == 1){ // 내리막 길
                for (int i = 1; i <= L; ++i) {
                    if (cursor + i >= N || alreadyPlaced[cursor + i] || arr[seq][cursor + i] != nextNum){
                        sw = false;
                        break;
                    }
                    alreadyPlaced[cursor + i] = true;
                }
            }
            else
                break;
            if (!sw)
                break;

            cursor++;
        }
        seq++;
        if (cursor >= N - 1)
            res++;
    }

}

int main(){
    cin >> N >> L;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> board[i][j];
    for (int i = 0; i < N; ++i)
        check(i);

    cout << res;
    return 0;
}*/
