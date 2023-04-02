/*
//
// Created by cho on 23. 2. 14.
//
#include <iostream>
#include <algorithm>

using namespace std;

int N, M, arr[7];

void bruteforce(int idx, string s){
    if (idx == M){
        cout << s << "\n";
        return;
    }
    if (idx != 0)
        s += " ";

    for (int i = 0; i < N; ++i) {
        bruteforce(idx + 1, s + to_string(arr[i]));
    }
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < N; ++i)
        cin >> arr[i];
    sort(arr, arr + N);

    bruteforce(0, "");

    return 0;
}*/
