/*
//
// Created by AppDeveloper on 2022-09-25.
// 순수하게 결과값만 보는 DP
#include <iostream>

using namespace std;

int n, hawaii[50001] = {0, 1, 1, 2, };

int fdp(int n){
    if (hawaii[n])
        return hawaii[n];

    hawaii[n] = (fdp(n - 3) + fdp(n - 1)) % 1000000009;
    return hawaii[n];
}

int main(){
    cin >> n;
    cout << fdp(n);
    return 0;
}*/
