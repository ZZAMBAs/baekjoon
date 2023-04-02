/*
//
// Created by AppDeveloper on 2022-09-13.
// 다양한 풀이.
#include <iostream>

using namespace std;

int main(){
    int memory, B, team = -2, temp = 0;
    cin >> memory >> B;

    while (memory < B){
        if (B % 2 == 0){
            temp++;
            B /= 2;
        }
        else if (B % 10 == 1) {
            temp++;
            B /= 10;
        }
        else
            break;
    }
    if (memory == B)
        team = temp;

    cout << team + 1;
}*/
