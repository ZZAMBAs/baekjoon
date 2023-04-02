/*
//
// Created by AppDeveloper on 2022-11-04.
//
#include <iostream>

using namespace std;

typedef long long ll;

ll N, pdp[33334][3];

ll fdp(int n, int rest){
    if (pdp[n][rest] >= 0)
        return pdp[n][rest];

    pdp[n][rest] = (fdp(n - 1, (rest + 1) % 3) + fdp(n - 1, (rest + 2) % 3) + fdp(n - 1, rest)) % 1000000009;
    return pdp[n][rest];
}

int main(){
    cin >> N;

    fill(pdp[1], pdp[1] + 33333 * 3, -1);
    pdp[1][1] = pdp[1][2] = 1LL;
    cout << fdp(N, 0);
    return 0;
}*/
