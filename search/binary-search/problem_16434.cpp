/*
//
// Created by AppDeveloper on 2022-07-13.
// 아래에선 단순 구현으로 풀었으나, hp를 1에서 long long 최대 값 사이로 잡고 이분 탐색을 하여 최소 maxHP를 찾을 수 있다.
#include <iostream>

using namespace std;

long long maxH = 0, atk, n, dif = 0, t, a, h;

int main(){
    cin >> n >> atk;

    for (int i = 0; i < n; ++i) {
        cin >> t >> a >> h;

        if (t == 1) {
            dif -= (h - 1) / atk * a;
            maxH = min(dif, maxH);
        }
        else{
            atk += a;
            dif = min((long long)0, dif + h);
        }
    }

    cout << maxH * (-1) + 1;

    return 0;
}*/
