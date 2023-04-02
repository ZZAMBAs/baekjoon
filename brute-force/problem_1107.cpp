/*
//
// Created by AppDeveloper on 2022-07-22.
//
#include <iostream>

using namespace std;

int n, M, broken, cur = 100, minVal;
bool button[12];

int main(){
    cin >> n;
    cin >> M;

    minVal = abs(100 - n);

    for (int i = 0; i < 12; ++i)
        button[i] = true;

    for (int i = 0; i < M; ++i) {
        cin >> broken;
        button[broken] = false;
    }

    for (int i = 0; i <= 999999; ++i) {
        int numberSize = 0;
        bool sw = false;
        int temp = i;
        do{
            numberSize++;
            int div = temp % 10;
            temp /= 10;
            if (!button[div]){
                sw = true;
                break;
            }
        }while (temp);
        
        if (sw)
            continue;

        int pushNum = abs(i - n) + numberSize;
        if (minVal > pushNum)
            minVal = pushNum;
    }

    cout << minVal;

    return 0;
}*/
