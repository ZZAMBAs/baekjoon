/*
//
// Created by AppDeveloper on 2022-10-24.
//
#include <iostream>
#include <stack>

using namespace std;

string s;
stack<int> stk1, stk2;

int main(){
    int team = 0;
    cin >> s;
    int size = s.size();
    for (int i = 0; i < size; ++i) {
        if (s[i] == '('){
            team--;
            stk1.push(team);
            stk2.push(s[i - 1] - 48);
            team = 0;
        }
        else if (s[i] == ')'){
            team = team * stk2.top() + stk1.top();
            stk2.pop();
            stk1.pop();
        }
        else
            team++;
    }

    cout << team;
    return 0;
}*/
