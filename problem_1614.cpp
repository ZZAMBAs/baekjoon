/*
//
// Created by cho on 23. 5. 18.
//
#include <iostream>

using namespace std;

long long finger, cnt, res;

int main(){
    cin >> finger >> cnt;
    res += finger - 1;
    if (finger > 1 && finger < 5)
        res += (cnt / 2) * 8;
    else
        res += (cnt / 2) * 16;
    if (cnt % 2){
        switch (finger) {
            case 5:
            case 1: res += 2;
            case 2: res += 2;
            case 3: res += 2;
            case 4: res += 2;
        }
    }
    cout << res;

    return 0;
}*/
