/*
//
// Created by cho on 23. 5. 29.
//
#include <iostream>
#include <vector>

using namespace std;

int N, X, T, nowTime;
vector<pair<int, int>> v;

int main(){
    cin >> X >> T;

    while (X > 0) {
        if (X % 8 == 0 && T >= X / 8) {
            v.emplace_back(8, X / 8);
            T -= X / 8;
            X -= 8 * (X / 8);
        } else if (X % 4 == 0 && T >= X / 4) {
            v.emplace_back(4, X / 4);
            T -= X / 4;
            X -= 4 * (X / 4);
        } else if (T >= X) {
            v.emplace_back(1, X);
            T -= X;
            X -= X;
        }

        if (X >= 8) {
            if(v.empty() || (v.end() - 1)->first != 8)
                v.emplace_back(8, 1);
            else
                (v.end() - 1)->second++;
            T--;
            X -= 8;
        } else if (X >= 4) {
            if(v.empty() || (v.end() - 1)->first != 4)
                v.emplace_back(4, 1);
            else
                (v.end() - 1)->second++;
            T--;
            X -= 4;
        } else if (X > 0) {
            if(v.empty() || (v.end() - 1)->first != 1)
                v.emplace_back(1, 1);
            else
                (v.end() - 1)->second++;
            T--;
            X--;
        }
    }

    if (T < 0)
        cout << -1;
    else{
        cout << v.size() << "\n";
        nowTime = T;
        for(auto &p : v){
            cout << nowTime << " " << p.first << "\n";
            nowTime += p.second;
        }
    }
    return 0;
}*/
