/*
//
// Created by cho on 23. 1. 24.
//
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int treeNum = 0;
    string ins;
    map<string, int> m;
    vector<string> trees;

    getline(cin, ins);
    while (!ins.empty()){
        treeNum++;
        if (!m[ins])
            trees.emplace_back(ins);
        m[ins]++;

        getline(cin ,ins);
    }
    sort(trees.begin(), trees.end());
    for (string tree : trees) {
        cout << tree << " " << fixed << setprecision(4) << (double) m[tree] * 100 / treeNum << "\n";
    }
    return 0;
}*/
