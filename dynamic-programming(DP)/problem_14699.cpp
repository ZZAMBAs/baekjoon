/*
//
// Created by AppDeveloper on 2022-12-07.
// 그래프 + DP
#include <iostream>
#include <vector>

using namespace std;

int N, M, v1, v2;
vector<int> h(5001), K(5001, 0);
vector<vector<int>> v(5001);

int fdp(int n){
    if (K[n])
        return K[n];

    int ret = 0;

    for(int adv : v[n]){
        if (h[adv] > h[n])
            ret = max(ret, fdp(adv));
    }
    K[n] = ret + 1;
    return K[n];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> M;
    for (int i = 1; i <= N; ++i)
        cin >> h[i];
    for (int i = 0; i < M; ++i) {
        cin >> v1 >> v2;
        v[v1].emplace_back(v2);
        v[v2].emplace_back(v1);
    }

    for (int i = 1; i <= N; ++i) {
        K[i] = fdp(i);
    }

    for (int i = 1; i <= N; ++i)
        cout << K[i] << "\n";

    return 0;
}*/
