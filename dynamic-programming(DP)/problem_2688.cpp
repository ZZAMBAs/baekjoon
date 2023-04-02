/*
//
// Created by AppDeveloper on 2022-08-05.
//
#include <iostream>

using namespace std;

long long n, sec[65][10];

long long fdp(int idx, int num) {
    if (sec[num][idx])
        return sec[num][idx];
    long long team = 0;
    for (int i = idx; i <= 9; ++i)
        team += fdp(i, num - 1);

    sec[num][idx] = team;
    return sec[num][idx];
}

int main(){
    int T;
    cin >> T;
    for (int i = 0; i < 10; ++i)
        sec[1][i] = 1L;

    while (T--){
        long long team = 0;
        cin >> n;
        for (int i = 0; i <= 9; ++i)
            team += fdp(i, n);
        cout << team << "\n";
    }

    return 0;
}*/
