/*
//
// Created by AppDeveloper on 2022-12-10.
//
#include <iostream>

using namespace std;

unsigned long long int N, K, c[1516][1516]; // c[n][m] = nCm

int fdp(int n, int m){
    if (c[n][m])
        return c[n][m];

    c[n][m] = (fdp(n - 1, m - 1) + fdp(n - 1, m)) % 1000000007;
    return c[n][m];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i <= 1515; ++i)
        c[i][0] = c[i][i] = 1;
    cin >> N;
    for (int numOf5 = 0; numOf5 < N; ++numOf5) {
        int sum = 5 * numOf5 + (N - 1 - numOf5) + 5;
        if (sum % 3 == 0)
            K = (K + fdp(N - 1, numOf5)) % 1000000007;
    }

    cout << K;
    return 0;
}*/
