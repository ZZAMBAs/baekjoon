/*
//
// Created by cho on 23. 4. 16.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, K, c, val;
    vector<vector<int>> v(1000), res(1000);
    
    cin >> N >> K;
    for (int i = 0; i < K; ++i) {
        cin >> c;
        for (int j = 0; j < c; ++j) {
            cin >> val;
            v[i].emplace_back(val);
        }
    }
    for (int i = 0; i < K; ++i) {
        sort(v[i].begin(), v[i].end());
        int size = v[i].size();
        for (int j = 0; j < size; ++j)
            res[i].emplace_back(v[i][j] + (j + 1));
    }

    for (int i = 0; i < K; ++i) {
        int size = res[i].size();
        for (int j = 0; j < size; ++j)
            cout << res[i][j] << " ";
        cout << "\n";
    }
    return 0;
}*/
