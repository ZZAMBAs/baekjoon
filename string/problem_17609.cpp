/*
//
// Created by AppDeveloper on 2022-10-19.
//
#include <iostream>

using namespace std;

int T;
string s;

int cal(string str, int team){
    if (team >= 2)
        return 2;

    int start = 0, end = str.size() - 1;
    while (start < end){

        if (str[start] != str[end]){
            string fir = str, sec = str;
            fir.erase(start, 1);
            sec.erase(end, 1);
            return min(cal(fir, team + 1), cal(sec, team + 1));
        }
        start++;
        end--;
    }

    return team;
}

int main(){
    cin >> T;
    while (T--){
        cin >> s;
        cout << cal(s, 0) << "\n";
    }

    return 0;
}*/
