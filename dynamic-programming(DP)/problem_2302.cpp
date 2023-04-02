/*
//
// Created by AppDeveloper on 2022-08-13.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, M, source, team = 1, fibo[41] = {1, 1, };
vector<int> pined;

int fib(int n){
    if (fibo[n])
        return fibo[n];
    
    fibo[n] = fib(n - 2) + fib(n - 1);
    return fibo[n];
}

int main(){
    cin >> n >> M;
    pined.emplace_back(0);
    pined.emplace_back(n + 1);

    while (M--){
        cin >> source;
        pined.emplace_back(source);
    }

    sort(pined.begin(), pined.end());

    int size = pined.size();
    for (int i = 0; i < size - 1; ++i) {
            team *= fib(pined[i + 1] - pined[i] - 1);
    }

    cout << team;
    
    return 0;
}*/
