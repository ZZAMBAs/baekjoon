/*
//
// Created by AppDeveloper on 2022-07-28.
//
#include <iostream>

using namespace std;

int n, cage[100001][3];

int main(){
    cin >> n;

    cage[1][0] = cage[1][1] = cage[1][2] = 1;

    for (int i = 1; i < n; ++i) {
        cage[i + 1][0] = (cage[i][0] + cage[i][1] + cage[i][2]) % 9901;
        cage[i + 1][1] = (cage[i][0] + cage[i][2]) % 9901;
        cage[i + 1][2] = (cage[i][0] + cage[i][1]) % 9901;
    }

    cout << (cage[n][0] + cage[n][1] + cage[n][2]) % 9901;
}*/
