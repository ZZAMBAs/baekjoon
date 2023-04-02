/*
//
// Created by AppDeveloper on 2022-05-24.
//
#include <iostream>

using namespace std;

int main(){
    int team = 0, change;

    cin >> change;

    change = 1000 - change;

    if (change >= 500){
        team += change / 500;
        change -= 500 * (change / 500);
    }
    if (change >= 100){
        team += change / 100;
        change -= 100 * (change / 100);
    }
    if (change >= 50){
        team += change / 50;
        change -= 50 * (change / 50);
    }
    if (change >= 10){
        team += change / 10;
        change -= 10 * (change / 10);
    }
    if (change >= 5){
        team += change / 5;
        change -= 5 * (change / 5);
    }
    team += change;

    cout << team;

    return 0;
}*/
