/*
//
// Created by AppDeveloper on 2022-12-15.
//
#include <iostream>
#include <queue>

using namespace std;

int N, K, cur, pre, K;

int main(){
    priority_queue<int, vector<int>, less<>> q;
    cin >> N >> K;
    for (int i = 0; i < N; ++i) {
        cin >> cur;
        if (i == 0)
            pre = cur;
        q.push(cur - pre);
        K += cur - pre;
        pre = cur;
    }

    for (int i = 0; i < K - 1; ++i) {
        K -= q.top();
        q.pop();
    }

    cout << K;
    return 0;
}*/
