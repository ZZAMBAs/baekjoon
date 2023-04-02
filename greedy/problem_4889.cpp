/*
//
// Created by AppDeveloper on 2022-09-04.
//
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    int T = 0;
    string cmd;
    while (++T){
        int change = 0;
        stack<char> s;
        cin >> cmd;
        if (cmd[0] == '-')
            break;

        int size = cmd.size();
        for (int i = 0; i < size; ++i) {
            if (cmd[i] == '{')
                s.push('{');
            else if (s.empty()){
                s.push('{');
                change++;
            }
            else
                s.pop();
        }

        change += s.size() / 2;
        cout << T << ". " << change << "\n";
    }

    return 0;
}*/
