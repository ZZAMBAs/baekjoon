/*
//
// Created by cho on 23. 5. 6.
//
#include <iostream>

using namespace std;

string s, res;
bool num[51];

void dfs(int idx, int cnt, string str){
    if (idx == s.size()){
        for (int i = 1; i <= cnt; ++i) {
            if (!num[i])
                return;
        }
        res = str;
        return;
    }

    if (s[idx] == '0')
        return;

    int val = 0;
    for (int i = 0; i < 2 && idx + i < s.size(); ++i) {
        val *= 10;
        val += s[idx + i] - 48;

        if (num[val] || val > 50)
            continue;

        num[val] = true;
        dfs(idx + i + 1, cnt + 1, str + " " + to_string(val));
        num[val] = false;
    }
}

int main(){
    cin >> s;
    dfs(0, 0, "");
    res.erase(0, 1);
    cout << res;
    return 0;
}*/
