/*
//
// Created by AppDeveloper on 2022-09-17. 재시도 2022-12-13
//
#include <iostream>

using namespace std;
typedef long long ll;

int N, K;
ll sum[201][201]; // [K][N]

ll fdp(int k, int n){
    if (sum[k][n] >= 0)
        return sum[k][n];

    ll s = 0;
    for (int i = 0; i <= n; ++i)
        s = (s + fdp(k - 1, i)) % 1000000000;
    sum[k][n] = s;
    return sum[k][n];
}

int main(){
    cin >> N >> K;
    fill(sum[2], sum[2] + 201 * 199, -1);
    for (int i = 1; i < 201; ++i)
        sum[1][i] = sum[i][0] = 1;

    cout << fdp(K, N);
    return 0;
}
*/
