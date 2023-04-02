/*
//
// Created by AppDeveloper on 2022-05-20.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int L, cost, moum = 0, jaeum = 0;
char c, *team;
vector<char> secureList;

void dfs(int idx, int cnt){
    team[cnt++] = secureList[idx];

    if(cnt == L) {
        moum = jaeum = 0;
        for (int i = 0; i < L; ++i) {
            if(team[i] == 'a' || team[i] == 'e' || team[i] == 'i' || team[i] == 'o' || team[i] == 'u')
                moum++;
            else
                jaeum++;
        }

        if (moum < 1 || jaeum < 2)
            return;

        for (int i = 0; i < L; ++i) {
            cout << team[i];
        }
        cout << "\n";

        return;
    }

    for(int i = idx + 1; i <= cost - L + cnt; i++)
        bfs(i, cnt);
}

int main(){
    cin >> L >> cost;

    team = new char[L];

    for (int i = 0; i < cost; ++i){
        cin >> c;
        secureList.emplace_back(c);
    }

    sort(secureList.begin(), secureList.end());

    for (int i = 0; i <= cost - L; ++i) {
        fdp(i, 0);
    }

    return 0;
}*/
