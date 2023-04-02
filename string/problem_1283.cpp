/*
//
// Created by AppDeveloper on 2022-12-20.
//
#include <iostream>
#include <vector>

using namespace std;

int N, shortcut[30];
vector<string> s(30);
bool visited[26];

int main(){
    fill(shortcut, shortcut + 30, -1);
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; ++i)
        getline(cin, s[i]);

    for (int i = 0; i < N; ++i) {
        string curString = s[i];
        int sSize = curString.size();
        bool sw = false;
        for (int j = 0; j < sSize; ++j) {
            if (j == 0 || curString[j - 1] == ' '){
                if (curString[j] == ' ')
                    continue;
                int chk = ((curString[j] - 65) >= 0 && (curString[j] - 65) < 26)
                        ? curString[j] - 65 : curString[j] - 97;
                if (!visited[chk]){
                    visited[chk] = true;
                    shortcut[i] = j;
                    sw = true;
                    break;
                }
            }
        }

        for (int j = 0; j < sSize && !sw; ++j) {
            if (curString[j] == ' ')
                continue;
            int chk = ((curString[j] - 65) >= 0 && (curString[j] - 65) < 26)
                      ? curString[j] - 65 : curString[j] - 97;
            if (!visited[chk]) {
                visited[chk] = true;
                shortcut[i] = j;
                break;
            }
        }

    }

    for (int i = 0; i < N; ++i) {
        if (shortcut[i] >= 0) {
            s[i].insert(shortcut[i], "[");
            s[i].insert(shortcut[i] + 2, "]");
        }
        cout << s[i] << "\n";
    }

    return 0;
}*/
