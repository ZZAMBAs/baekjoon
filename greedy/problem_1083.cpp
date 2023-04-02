/*
//
// Created by cho on 23. 1. 12.
//
#include <iostream>

using namespace std;

int N, S, arr[50];

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> arr[i];
    cin >> S;
    
    for (int i = 0; i < N - 1 && S > 0; ++i) {
        int maxV = arr[i], maxIdx = i;
        for (int j = i + 1; j <= min(i + S, N - 1); ++j) {
            if (maxV < arr[j]){
                maxIdx = j;
                maxV = arr[j];
            }
        }
        for (int j = maxIdx; j > i; --j)
            arr[j] = arr[j - 1];
        arr[i] = maxV;
        S -= (maxIdx - i);
    }

    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    return 0;
}*/
