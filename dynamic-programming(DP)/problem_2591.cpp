/*
//
// Created by cho on 22. 12. 29.
// dp 풀이가 최적화된 풀이임.
#include <iostream>

using namespace std;

int dp[40], sSize;
string s;

int fdp(int idx){
    if (dp[idx])
        return dp[idx];


}

int main(){
    cin >> s;
    sSize = s.size();

    cout << fdp(sSize - 1);
    return 0;
}*/
