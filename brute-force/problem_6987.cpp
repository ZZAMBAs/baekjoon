/*
//
// Created by AppDeveloper on 2022-11-14.
// https://zoosso.tistory.com/414
#include <iostream>
#include <algorithm>

using namespace std;

int team[6][3], K, cmpTeam[6][3], turn;

void dfs(int s, int d){
    if (s == 5){
        turn++;
        for (int i = 0; i < 6; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (cmpTeam[i][j] != team[i][j])
                    return;
            }
        }
        //K++; // 왜 26번 반복되는가?
        K = 1; // 해당 코드로 통과되었으나 TC가 부족해서일 수 있다.
        return;
    }

    if (d == 5){
        dfs(s + 1, s + 1);
        return;
    }

    for (int i = 0; i < 3; ++i) {
        cmpTeam[s][i]++;
        cmpTeam[d + 1][2 - i]++;
        dfs(s, d + 1);
        cmpTeam[s][i]--;
        cmpTeam[d + 1][2 - i]--;
    }

}

int main(){
    for (int i = 0; i < 4; ++i) {
        K = 0;
        for (int j = 0; j < 6; ++j)
            cin >> team[j][0] >> team[j][1] >> team[j][2];
        bfs(0, 0);
        cout << K << " ";
    }

    return 0;
}*/
