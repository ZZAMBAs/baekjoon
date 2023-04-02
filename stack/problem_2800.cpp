/*
//
// Created by cho on 23. 2. 13.
//
#include <iostream>
#include <stack>
#include <algorithm>
#include <map>

using namespace std;

map<string, int> m;
string s;
stack<char> stk;
vector<pair<int, int>> v;
vector<string> res;
bool del[10];

void bruteforce(int idx, int limit){
    if (idx == limit){
        string temp = "";
        bool isOk[200];
        fill(isOk, isOk + 200, true);
        for (int i = 0; i < limit; ++i) {
            if (del[i]){
                isOk[v[i].first] = false;
                isOk[v[i].second] = false;
            }
        }
        for (int i = 0; i < s.size(); ++i) {
            if (isOk[i])
                temp += s[i];
        }
        if (!m[temp]) {
            res.push_back(temp);
            m[temp] = 1;
        }
        return;
    }

    del[idx] = true;
    bruteforce(idx + 1, limit);

    del[idx] = false;
    bruteforce(idx + 1, limit);
}

int main(){
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(')
            stk.push(i);
        else if (s[i] == ')'){
            v.push_back({stk.top(), i});
            stk.pop();
        }
    }

    bruteforce(0, v.size());
    sort(res.begin(), res.end());
    res.erase(res.begin(), res.begin() + 1);
    for (string r : res) {
        cout << r << "\n";
    }
    return 0;
}*/
