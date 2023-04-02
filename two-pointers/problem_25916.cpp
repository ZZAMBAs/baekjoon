/*
//
// Created by cho on 23. 3. 21.
//
#include <iostream>

using namespace std;

typedef long long ll;

ll N, M, arr[500000];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    ll s = 0, e = 0, res = 0, sum = 0;
    while (e < N){
        if (sum <= M)
            sum += arr[e++];
        else
            while (sum > M)
                sum -= arr[s++];

        if (sum > res && sum <= M)
            res = sum;
    }

    cout << res;
    return 0;
}*/
