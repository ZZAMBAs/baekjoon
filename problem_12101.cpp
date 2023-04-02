/*
//
// Created by AppDeveloper on 2022-09-30.
//
#include <iostream>
#include <stack>

using namespace std;

int n, k, cnt;
stack<int> s, team;

void dfs(int sum){
    if (sum == n)
        cnt++;

    if (cnt == k){
        while (!s.empty()){
            team.push(s.top());
            s.pop();
        }
    }

    if (sum >= n)
        return;

    for (int i = 1; i <= 3; ++i) {
        s.push(i);
        dfs(sum + i);
        if (s.empty())
            return;
        s.pop();
    }
}

int main(){
    cin >> n >> k;
    bfs(0);
    if (team.empty())
        cout << -1;
    else{
        cout << team.top();
        team.pop();
        while (!team.empty()){
            cout << "+" << team.top();
            team.pop();
        }
    }
}*/
