/*
//
// Created by AppDeveloper on 2022-09-22.
//
#include <iostream>

using namespace std;

int memory, B, team;

void dfs(long long num){
    if (num > B)
        return;
    if (num >= memory)
        team++;

    num *= 10;
    dfs(num + 4);
    dfs(num + 7);
}

int main(){
    cin >> memory >> B;
    dfs(4LL);
    bfs(7LL);
    cout << team;
    return 0;
}*/
