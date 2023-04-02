/*
//
// Created by AppDeveloper on 2022-09-17.
//
#include <iostream>
#include <queue>

using namespace std;

typedef unsigned long long ll;

int n, m, card;
ll team;

int main(){
    priority_queue<ll, vector<ll>, greater<>> q;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> card;
        q.push(card);
    }

    for (int i = 0; i < m; ++i) {
        ll fir = q.top();
        q.pop();
        ll sec = q.top();
        q.pop();
        q.push(fir + sec);
        q.push(fir + sec);
    }

    while (!q.empty()){
        team += q.top();
        q.pop();
    }

    cout << team;
    return 0;
}*/
