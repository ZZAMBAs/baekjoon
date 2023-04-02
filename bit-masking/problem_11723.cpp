/*
//
// Created by AppDeveloper on 2022-06-14.
//
#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false); // 시간초과 방지

    int S = 0, M, inp, temp;
    string cmd;

    cin >> M;

    while (M--){
        cin >> cmd;
        if (cmd == "add"){
            cin >> inp;
            temp = 1 << inp;

            S |= temp;
        }
        else if (cmd == "remove"){
            cin >> inp;
            temp = 1 << inp;

            S &= ~temp;
        }
        else if (cmd == "check"){
            cin >> inp;
            temp = (S >> inp) & 1;

            cout << temp << "\n";
        }
        else if (cmd == "toggle"){
            cin >> inp;
            temp = 1 << inp;

            S ^= temp;
        }
        else if (cmd == "all"){
            S = 0b111111111111111111110;
        }
        else if (cmd == "empty"){
            S = 0;
        }
    }

    return 0;
}*/
