/*
//
// Created by AppDeveloper on 2022-07-27.
//
#include <iostream>

using namespace std;

void sequences(int n, int start, int end){
    int team = 6 - start - end;

    if (n == 1){
        cout << start << " " << end << "\n";
        return;
    }

    sequences(n - 1, start, team);
    cout << start << " " << end << "\n";
    sequences(n - 1, team, end);

}

int main(){
    int n, team = 1;
    cin >> n;

    cout << (team << n) - 1 << "\n";

    sequences(n, 1, 3);

    return 0;
}*/
