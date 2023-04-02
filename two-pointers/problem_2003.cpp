/*
//
// Created by AppDeveloper on 2022-07-03.
//
#include <iostream>

using namespace std;

int memory[10001], prefix[10002], M, n, team;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> M;

    for (int i = 1; i <= n; ++i) {
        cin >> memory[i];
        prefix[i + 1] = prefix[i] + memory[i];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            if (prefix[j + 1] - prefix[i] == M)
                team++;
        }
    }

    cout << team;
    return 0;
}*/
