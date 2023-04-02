/*
//
// Created by AppDeveloper on 2022-09-23.
#include <iostream>

using namespace std;

int K, sSize, c[26];
string s;

void dfs(int idx, string re){
    if (idx > 1){
        if (re[idx - 2] == re[idx - 1])
            return;
    }
    
    if (idx == sSize){
        K++;
        return;
    }

    for (int i = 0; i < 26; ++i) {
        if (c[i]){
            c[i]--;
            dfs(idx + 1, re + (char)(i + 97));
            c[i]++;
        }
    }
}

int main(){
    cin >> s;
    sSize = s.size();
    for (int i = 0; i < sSize; ++i)
        c[s[i] - 97]++;
    bfs(0, "");
    cout << K;
    return 0;
}
*/
