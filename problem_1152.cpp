/*
//
// Created by AppDeveloper on 2022-07-03.
//
#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int team = 0;
    string cmd;
    char c;

    while (true){
        int peek = cin.peek();
        if (peek == ' ') {
            cin.ignore();
            continue;
        } else if (peek == '\n')
            break;
        
        cin >> cmd;
        team++;
        c = cin.get();
        if (c == '\n')
            break;
    }

    cout << team;
    return 0;
}*/
