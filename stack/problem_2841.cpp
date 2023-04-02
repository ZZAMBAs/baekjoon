/*
//
// Created by AppDeveloper on 2022-08-17.
//
#include <iostream>
#include <stack>

using namespace std;

int n, P, idx, f, team;
stack<int> g[7];

int main(){
    cin >> n >> P;

    while (n--){
        cin >> idx >> f;

        if (g[idx].empty()){
            team++;
            g[idx].push(f);
            continue;
        }

        while (!g[idx].empty() && g[idx].top() > f){
            team++;
            g[idx].pop();
        }

        if (g[idx].empty() || g[idx].top() != f) {
            team++;
            g[idx].push(f);
        }

    }

    cout << team;
    return 0;
}*/
