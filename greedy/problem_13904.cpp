/*
//
// Created by cho on 23. 2. 23.
//
#include <iostream>
#include <queue>

using namespace std;

int main(){
    int N, d, w, res = 0;
    int values[1001];
    fill(values, values + 1001, 0);
    priority_queue<pair<int, int>> q;

    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> d >> w;
        q.push({w, d});
    }
    while (!q.empty()){
        int curVal = q.top().first;
        int curDeadline = q.top().second;
        q.pop();

        for (int i = curDeadline; i > 0; --i) {
            if (!values[i]){
                values[i] = curVal;
                break;
            }
        }

    }

    for (int i = 1; i < 1001; ++i)
        res += values[i];
    cout << res;
    return 0;
}*/
