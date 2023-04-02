/*
//
// Created by AppDeveloper on 2022-05-24.
//
#include <iostream>

using namespace std;

int n, L, num, pipeNum[1001], team = 0;

int main(){
    cin >> n >> L;
    while (n--){
        cin >> num;
        pipeNum[num] = 1;
    }

    for (int i = 1; i < 1001;) {
        if (pipeNum[i] == 1){
            team++;
            i += L;
        }
        else
            i++;
    }

    cout << team;

    return 0;
}*/
