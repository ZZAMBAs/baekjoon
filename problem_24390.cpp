/*
//
// Created by AppDeveloper on 2022-12-05.
//
#include <iostream>

using namespace std;

int s, K;
bool activated;

int main(){
    string time;
    cin >> time;

    s = ((time[0] - 48) * 10 + time[1] - 48) * 60 + (time[3] - 48) * 10 + time[4] - 48;

    if (s % 60 >= 30){
        K++;
        activated = true;
        s -= 30;
    }

    while (s){
        if (s >= 600){
            int q = s / 600;
           s -= 600 * q;
           K += q;
        }
        if (s >= 60){
            int q = s / 60;
            s -= 60 * q;
            K += q;
        }
        if (s >= 30){
            K++;
            s -= 30;
        }
        if (s >= 10){
            int q = s / 10;
            s -= 10 * q;
            K += q;
        }
    }
    if (!activated){
        K++;
        activated = true;
    }
    cout << K;
    return 0;
}*/
