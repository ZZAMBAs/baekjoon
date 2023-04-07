/*
//
// Created by cho on 23. 4. 7.
//
#include <iostream>

using namespace std;

int main(){
    int N, D, V, downTime = 0, curTime = 0, res = 0;
    int down[100000], play[100000];

    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> play[i] >> down[i];

    for (int i = 0; i < N; ++i) {
        if (downTime + down[i] > curTime) {
            res += downTime + down[i] - curTime;
            curTime = downTime + down[i];
        }

        downTime += down[i];
        curTime += play[i];
    }

    cout << res;
    return 0;
}*/
