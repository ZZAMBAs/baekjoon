/*
//
// Created by AppDeveloper on 2022-10-02.
// map으로 시간 줄이기 가능: https://imnotabear.tistory.com/220
#include <iostream>
#include <vector>

using namespace std;

int n, team, exitTunnel[1000];
string source;
vector<string> entrance(1000);

int main(){
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> entrance[i];

    for (int i = 0; i < n; ++i) {
        cin >> source;
        for (int j = 0; j < n; ++j) {
            if (!source.compare(entrance[j])) // 같을 때
                exitTunnel[i] = j;
        }
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (exitTunnel[i] > exitTunnel[j]){
                team++;
                break;
            }
        }
    }

    cout << team;
    return 0;
}*/
