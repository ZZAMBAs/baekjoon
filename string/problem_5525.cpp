/*
//
// Created by AppDeveloper on 2022-08-27.
//
#include <iostream>

using namespace std;
int deadEnd, M, team;
char str[1000001];

int main(){
    cin >> deadEnd;
    cin >> M;

    for (int i = 0; i < M; ++i)
        cin >> str[i];
    str[M] = '\0';
    int p = 2 * deadEnd + 1, cnt = 0;

    for (int i = 0; i < M; ++i) {
        if (str[i] == 'I' && cnt % 2 == 0){
            cnt++;
            if (cnt >= p && (cnt - p) % 2 == 0)
                team++;
        }
        else if (str[i] == 'O' && cnt % 2 == 1)
            cnt++;
        else {
            cnt = 0;
            if (str[i] == 'I')
                i--;
        }

    }

    cout << team;
    return 0;
}*/
