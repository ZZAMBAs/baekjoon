/*
//
// Created by AppDeveloper on 2022-10-18.
//
#include <iostream>

using namespace std;

typedef long long int ll;

ll N, M, simsa[100000], team;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> M;
    for (int i = 0; i < N; ++i)
        cin >> simsa[i];

    ll s = 0, e = INT64_MAX;

    while (s < e){
        ll m = (s + e) / 2;
        unsigned long long cnt = 0;

        for (int i = 0; i < N && cnt <= M; ++i)
            cnt += m / simsa[i];

        if (cnt >= M)
            e = m - 1;
        else
            s = m + 1;
    }

    for (ll i = e - 1; i <= e + 1 ; ++i) {
        if (i <= 0)
            continue;
        unsigned long long cnt = 0;
        for (int j = 0; j < N; ++j)
            cnt += i / simsa[j];
        if (cnt >= M){
            team = i;
            break;
        }
    }

    cout << team;
    return 0;
}*/
