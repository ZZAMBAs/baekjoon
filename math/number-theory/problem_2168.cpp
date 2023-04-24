/*
//
// Created by cho on 23. 4. 24.
// https://pangtrue.tistory.com/298
#include <iostream>
#include <numeric>

using namespace std;

typedef long long ll;

int main(){
    ll x, y, res = 0;
    cin >> x >> y;
    ll xyGcd = gcd(x, y);
    ll maxV = max(x, y), minV = min(x, y);
    ll q = 0, r = 0;

    for (int i = 0; i < maxV / xyGcd; ++i) {
        q += minV / maxV;
        r += minV % maxV;
        res++;
        if (r >= maxV){
            q++;
            r -= maxV;
            if (r != 0)
                res++;
        }
    }

    cout << res * xyGcd;
    return 0;
}*/
