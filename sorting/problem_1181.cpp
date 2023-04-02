/*
//
// Created by cho on 23. 2. 18.
//
#include <iostream>
#include <queue>
#include <set>

using namespace std;

int N;
string ins;
priority_queue<string, vector<string>, greater<>> q[51];
set<string> s;

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> ins;
        if (s.find(ins) == s.end()) {
            s.insert(ins);
            q[ins.size()].push(ins);
        }
    }

    for (int i = 1; i < 51; ++i) {
        int qSize = q[i].size();
        for (int j = 0; j < qSize; ++j) {
            cout << q[i].top() << "\n";
            q[i].pop();
        }
    }

    return 0;
}*/
