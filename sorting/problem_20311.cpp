/*
//
// Created by cho on 23. 2. 27.
//
#include <iostream>
#include <queue>

using namespace std;

int N, K;
pair<int, int> chemistry[300000], maxV;
vector<int> seq;
priority_queue<pair<int, int>> q;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> K;
    for (int i = 0; i < K; ++i) {
        cin >> chemistry[i].first;
        chemistry[i].second = i + 1;
        q.push(chemistry[i]);
    }

    while (!q.empty()){
        if (!maxV.first){
            maxV = q.top();
            q.pop();
            if (q.empty())
                break;
        }
        pair<int, int> top = q.top();
        q.pop();

        seq.push_back(maxV.second);
        seq.push_back(top.second);
        top.first--;
        maxV.first--;

        if (top.first)
            q.push(top);
    }
    if (maxV.first == 1)
        seq.push_back(maxV.second);

    if (seq.size() == N)
        for (int i : seq)
            cout << i << " ";
    else
        cout << -1;
    return 0;
}*/
