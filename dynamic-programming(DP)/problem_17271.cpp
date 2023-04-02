/*
//
// Created by AppDeveloper on 2022-05-23.
//
#include <iostream>

int n, M, team = 0, skill[10001];

using namespace std;

void findAll(int cnt, int skillNum[]){
    if (cnt > n) {
        return;
    }

    skillNum[cnt] = skillNum[cnt - 1] + skillNum[cnt - M];
    team = skillNum[cnt];
    findAll(cnt + 1, skillNum);
}

int main(){
    cin >> n >> M;

    for (int i = 0; i < M; ++i) {
        skill[i] = 1;
    }

    if (M > n)
        cout << 1;
    else {
        findAll(min(n, M), skill);
        cout << team % 1000000007;
    }
    return 0;
}*/
