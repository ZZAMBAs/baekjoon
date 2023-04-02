/*
//
// Created by AppDeveloper on 2022-06-30.
//
#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n, num, sum = 0, last = 0;
    priority_queue<int, vector<int>, greater<>> P;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        P.push(num);
    }

    for (int i = 0; i < n; ++i) {
        sum += last + P.top();
        last += P.top();
        P.pop();
    }

    cout << sum;
    return 0;
}*/
