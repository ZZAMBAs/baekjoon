/*
//
// Created by AppDeveloper on 2022-11-06.
// 비둘기집 원리가 들어가 있는 문제.
#include <iostream>
#include <vector>

using namespace std;

int diff[16][16], num[16];

int dfs(){
    int team = 12;
    for (int i = 0; i < 16; ++i) {
        if (!num[i])
            continue;
        num[i]--;
        for (int j = i; j < 16; ++j) {
            if (!num[j])
                continue;
            num[j]--;
            for (int k = 0; k < 16; ++k) {
                if (!num[k])
                    continue;
                num[k]--;
                team = min(team, diff[i][j] + diff[j][k] + diff[k][i]);
                num[k]++;
            }
            num[j]++;
        }
        num[i]++;
    }

    return team;
}

int main(){
    int T, N;
    string s[16] = {"ISTJ", "ISFJ", "INFJ", "INTJ", "ISTP", "ISFP", "INFP", "INTP", "ESTP", "ESFP", "ENFP", "ENTP", "ESTJ", "ESFJ", "ENFJ", "ENTJ"};
    string ins;
    for (int i = 0; i < 16; ++i)
        for (int j = 0; j < 16; ++j)
            for (int k = 0; k < 4; ++k)
                if (s[i][k] != s[j][k])
                    diff[i][j]++;
    cin >> T;
    while (T--){
        fill(num, num + 16, 0);
        cin >> N;
        for (int i = 0; i < N; ++i) {
            cin >> ins;
            for (int j = 0; j < 16; ++j) {
                if (s[j] == ins){
                    num[j]++;
                    break;
                }
            }
        }

        if (N > 32){
            cout << 0 << "\n";
            continue;
        }

        cout << bfs() << "\n";
    }

    return 0;
}*/
