/*
//
// Created by cho on 23. 2. 17.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, s, d, w, p[1001], res;
vector<pair<int, pair<int, int>>> v;

int find(int idx){
    if (!p[idx])
        return idx;
    p[idx] = find(p[idx]);
    return p[idx];
}

void merge(int idx1, int idx2){
    int f1 = find(idx1);
    int f2 = find(idx2);
    if (f1 != f2){
        p[f1] = f2;
    }
}

int main(){
    cin >> N >> M;
    v.resize(N);
    for (int i = 0; i < M; ++i) {
        cin >> s >> d >> w;
        if (s != d)
            v.push_back({w, {s, d}});
    }
    sort(v.begin(), v.end());

    for (pair<int, pair<int, int>> cur : v) {
        int weight = cur.first;
        int idx1 = cur.second.first;
        int idx2 = cur.second.second;

        int f1 = find(idx1);
        int f2 = find(idx2);
        if (f1 != f2){
            res += weight;
            merge(idx1, idx2);
        }
    }

    cout << res;
    return 0;
}*/
