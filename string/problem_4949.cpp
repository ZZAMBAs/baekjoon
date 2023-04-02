/*
//
// Created by AppDeveloper on 2022-07-07.
// fgets: https://modoocode.com/38
#include <iostream>
#include <stack>

using namespace std;

int main(){
    char cmd[102];

    while (true) {
        stack<char> s;
        bool isBalance = true;
        cin.getline(cmd, 101);

        if (cmd[0] == '.')
            break;

        for (int i = 0; cmd[i] != '\0'; ++i) {
            if (cmd[i] == '(' || cmd[i] == '[')
                s.push(cmd[i]);
            if (cmd[i] == ')' || cmd[i] == ']') {
                if (s.empty()){
                    isBalance = false;
                    break;
                }

                char top = s.top();
                s.pop();
                if (top == '(' && cmd[i] == ')')
                    continue;
                else if (top == '[' && cmd[i] == ']')
                    continue;
                else{
                    isBalance = false;
                    break;
                }
            }
        }

        if (isBalance && s.empty())
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}*/
