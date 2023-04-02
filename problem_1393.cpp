/*
//
// Created by AppDeveloper on 2022-10-02.
//
#include <iostream>
#include <numeric>

using namespace std;

int main(){
    long long int xs, ys, xe, ye, dx, dy, c, resX, resY, minVal = 9223372036854775807LL;
    cin >> xs >> ys >> xe >> ye >> dx >> dy;

    if (dx == 0 && dy == 0) {
        cout << xe << " " << ye;
        return 0;
    }

    long long int gcdVal = gcd(dx, dy);
    dx /= gcdVal;
    dy /= gcdVal;

    while (xe * xe <= 10000 && ye * ye <= 10000){
        int d2 = (xe - xs) * (xe - xs) + (ye - ys) * (ye - ys);

        if (minVal > d2){
            minVal = d2;
            resX = xe;
            resY = ye;
        }
        xe += dx;
        ye += dy;
    }

    cout << resX << " " << resY;
    return 0;
}*/
