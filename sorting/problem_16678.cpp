/*
//
// Created by cho on 23. 5. 3.
//
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;

int main(){
    int N, member[100000];
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> member[i];
    sort(member, member + N);

    ll curNum = 1, res = 0;
    for (int i = 0; i < N; ++i) {
        if (curNum > member[i])
            continue;
        res += member[i] - curNum++;
    }

    cout << res;
    return 0;
}*/
