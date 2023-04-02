/*
//
// Created by cho on 23. 2. 22.
//
#include <iostream>
#include <algorithm>

using namespace std;

string s, res, lastRes;
bool visited[100];

void pushing(int idx, int pushLoc){
    visited[idx] = true;
    res.insert(pushLoc, 1, s[idx]);
    cout << res + lastRes << "\n";
    
    vector<pair<char, int>> nextStr;
    for (int i = idx + 1; i < s.size(); ++i) {
        if (!visited[i])
            nextStr.push_back({s[i], i});
    }
    sort(nextStr.begin(), nextStr.end());

    int size = nextStr.size();
    for (int i = 0; i < size; ++i) {
        if (!visited[nextStr[i].second])
            pushing(nextStr[i].second, pushLoc + 1);
    }
}

void printing(int e){
    char minVal = 'Z';
    int minValIdx = 0;
    for (int i = 0; i < e; ++i) {
        if (minVal > s[i]) {
            minVal = s[i];
            minValIdx = i;
        }
    }
    
    pushing(minValIdx, 0);
    lastRes = res + lastRes;
}

int allVisited(){
    int size = s.size();
    for (int i = 0; i < size; ++i) {
        if (visited[i])
            return i;
    }
    return s.size();
}

int main(){
    int checking;
    cin >> s;

    while ((checking = allVisited()) > 0){
        res = "";
        printing(checking);
    }

    return 0;
}*/
