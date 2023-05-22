/*
//
// Created by cho on 23. 5. 22.
// 비트마스킹으로 가능.
#include <iostream>

using namespace std;

int main(){
    int X, stick = 64, res = 0;
    cin >> X;
    while (X){
        if (X >= stick) {
            X -= stick;
            res++;
        }
        else
            stick /= 2;
    }
    cout << res;
}*/
