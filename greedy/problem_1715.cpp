/*
//
// Created by AppDeveloper on 2022-12-28.
//
#include <iostream>
#include <queue>

using namespace std;

int main(){
    int N, ins, K = 0;
    priority_queue<int, vector<int>, greater<>> q;

    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> ins;
        q.emplace(ins);
    }

    while (q.size() > 1){
        int cmp1 = q.top();
        q.pop();
        int cmp2 = q.top();
        q.pop();

        K += cmp1 + cmp2;
        q.emplace(cmp1 + cmp2);
    }

    cout << K;
    return 0;
}
*/
