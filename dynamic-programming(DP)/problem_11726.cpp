/*
//
// Created by AppDeveloper on 2022-06-12.
//
#include <iostream>

using namespace std;

int dpBox[1001], n;

int sec(int n){
    if (dpBox[n])
        return dpBox[n];

    dpBox[n] = (sec(n - 1) + sec(n - 2)) % 10007;
    return dpBox[n];
}

int main(){
    dpBox[1] = 1;
    dpBox[2] = 2;

    cin >> n;

    cout << sec(n);
    return 0;
}*/
