/*
//
// Created by AppDeveloper on 2022-07-12.
//
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    int n, team;
    string word;
    
    cin >> n;
    team = n;

    for (int i = 0; i < n; ++i) {
        cin >> word;
        int size = word.size();
        int alpha[26];
        memset(alpha, -1, sizeof(alpha));

        for (int j = 0; j < size; ++j) {
            int c = word[j] - 'a';

            if (alpha[c] < 0 || alpha[c] - j == -1)
                alpha[c] = j;
            else {
                team--;
                break;
            }

        }
    }
    cout << team;

    return 0;
}*/
