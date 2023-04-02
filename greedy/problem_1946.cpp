/*
//
// Created by AppDeveloper on 2022-08-16.
//
#include <iostream>
#include <algorithm>

using namespace std;

pair<int, int> cand[100000];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--){
        int n, team = 0, fir, sec, secMin;
        cin >> n;
        team = n;

        for (int i = 0; i < n; ++i) {
            cin >> fir >> sec;
            cand[i].first = fir;
            cand[i].second = sec;
        }

        sort(cand, cand + n);
        secMin = cand[0].second;

        for (int i = 0; i < n; ++i) {
            int sVal = cand[i].second;
            if (sVal <= secMin)
                secMin = sVal;
            else
                team--;
        }

        cout << team << "\n";
    }
    return 0;
}*/
