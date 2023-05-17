/*
//
// Created by cho on 23. 5. 17.
// https://hello-backend.tistory.com/146, https://www.acmicpc.net/source/59438153
#include <iostream>

using namespace std;
typedef long long ll;

ll x, y, start, res;


int main(){
    cin >> x >> y;
    for (ll i = 1; i < 2500000; ++i) {
        if (x + y == i * (i + 1) / 2){
            start = i;
            break;
        }
    }

    if (!start)
        cout << -1;
    else{
        for (ll i = start; i > 0 && x > 0; --i) {
            if (x - i >= 0){
                x -= i;
                res++;
            }
        }
        cout << res;
    }

    return 0;
}*/
