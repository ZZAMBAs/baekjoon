/*
//
// Created by AppDeveloper on 2022-09-07.
// map으로도 풀 수 있지만 upper_bound, lower_bound도 매우 유용하다.
// https://chanhuiseok.github.io/posts/algo-55/
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int deadEnd, M, source;
map<int, int> c;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> deadEnd;
    for (int i = 0; i < deadEnd; ++i) {
        cin >> source;
        c[source]++;
    }
    cin >> M;
    for (int i = 0; i < M; ++i) {
        cin >> source;
        cout << c[source] << " ";
    }
    return 0;
}
*/
