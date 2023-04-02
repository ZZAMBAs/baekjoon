/*
//
// Created by AppDeveloper on 2022-08-30.
// 시뮬레이션
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int X, size, sw;
string after;
vector<string> repo;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> X;
    cin >> after;
    repo.push_back(after);
    while (!sw){
        stack<char> temp;
        vector<char> before;
        for (int i = 0; after[i] != '\0'; ++i) {
            if (i % 2)
                temp.push(after[i]);
            else
                before.emplace_back(after[i]);
        }
        while (!temp.empty()){
            before.emplace_back(temp.top());
            temp.pop();
        }

        int bSize = before.size();
        for (int i = 0; i < bSize; ++i)
            after[i] = before[i];
        int rSize = repo.size();
        for (int i = 0; i < rSize; ++i) {
            if (!repo[i].compare(after)) { // 같은 문자열
                sw++;
                break;
            }
            if (i == rSize - 1)
                repo.push_back(after);
        }
    }

    cout << repo[X % repo.size()];
    return 0;
}*/
