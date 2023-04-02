/*
//
// Created by AppDeveloper on 2022-11-01.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> team;

bool check(int num){
    if (num == 1)
        return false;

    for (int i = 2; i * i <= num; ++i)
        if (num % i == 0)
            return false;
    return true;
}

int main(){
    cin >> N;
    int init = 1;
    for (int i = 0; i < N - 1; ++i)
        init *= 10;
    for (int i = init; i < init * 10; ++i) {
        int jump = init;
        while (jump && check(i / jump)){ jump /= 10; }
        if (jump > 0) {
            i += jump - 1;
            continue;
        }
        team.emplace_back(i);
    }

    sort(team.begin(), team.end());
    for (int num : team)
        cout << num << "\n";
    return 0;
}*/
