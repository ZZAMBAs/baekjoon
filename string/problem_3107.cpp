/*
//
// Created by AppDeveloper on 2022-10-07.
//
#include <iostream>
#include <vector>

using namespace std;

string s;
vector<string> team;

int main(){
    cin >> s;
    s.append(":");
    for (int i = 0, prev = 0; i < s.size(); ++i) {
        if (s[i] == ':'){
            team.emplace_back(s.substr(prev, i - prev));
            if (s[i + 1] == ':') { // :: 인 경우
                team.emplace_back("chk");
                i++;
            }
            prev = i + 1;
        }
    }

    for (int i = 0; i < team.size(); ++i) {
        if(team[i].empty())
            team.erase(team.begin() + i);
    }

    for (int i = 0; i < team.size(); ++i) {
        string &cur = team[i];
        if (!cur.compare("chk")) { // chk일 때
            for (int j = 0; j < 9 - team.size(); ++j) {
                cout << "0000";
                if (j != 9 - team.size() - 1)
                    cout << ":";
            }
        }
        else {
            for (int j = 0; j < 4 - cur.size(); ++j)
                cout << "0";
            cout << cur;
        }

        if (i != team.size() - 1)
            cout << ":";
    }

    return 0;
}*/
