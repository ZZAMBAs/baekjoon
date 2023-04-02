/*
//
// Created by cho on 23. 2. 28.
//
#include <iostream>

using namespace std;

int N, K, A[201], broken, res;
bool robotLoc[101];

int main(){
    cin >> N >> K;
    for (int i = 1; i <= 2 * N; ++i) {
        cin >> A[i];
    }

    while (broken < K){
        res++;
        A[0] = A[2 * N];
        for (int i = 2 * N; i >= 2; --i) {
            A[i] = A[i - 1];
            if (i <= N)
                robotLoc[i] = robotLoc[i - 1];
        }
        A[1] = A[0];
        robotLoc[1] = false;
        if (robotLoc[N])
            robotLoc[N] = false;

        for (int i = N - 1; i > 0; --i) {
            if (robotLoc[i] && !robotLoc[i + 1] && A[i + 1] > 0){
                if(!--A[i + 1])
                    broken++;
                if (i + 1 != N)
                    robotLoc[i + 1] = robotLoc[i];
                robotLoc[i] = false;
            }
        }

        if (A[1]){
            if(!--A[1])
                broken++;
            robotLoc[1] = true;
        }
    }
    cout << res;
    return 0;
}*/
