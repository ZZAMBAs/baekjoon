/*
//
// Created by AppDeveloper on 2021-11-22. 재시도 1: 2022-06-01, 재시도 2: 2022-07-04
// 그리디 알고리즘으로도, 정렬 알고리즘으로도 풀 수 있다.
#include <iostream>
#include <queue>

using namespace std;

int n, X;
int ex[100000], cheap[100000];

struct comp{
    bool operator()(pair<int, int> a, pair<int, int> b){
        return a.second < b.second;
    }
}; // https://hydroponicglass.tistory.com/169

priority_queue<pair<int, int>, vector<pair<int, int>>, comp> diff;

int main(){
    cin >> n >> X;

    for (int i = 0; i < n; ++i) {
        cin >> ex[i] >> cheap[i];
        diff.push({i, ex[i] - cheap[i]});
    }
    
    int num5000, team = 0;
    
    for (num5000 = X / 5000; num5000 >= 0; --num5000) {
        if ( (num5000 * 5000 + (n - num5000) * 1000) <= X )
            break;
    }

    unsigned int size = diff.size();
    for (int i = 0; i < size; ++i) {
        pair<int, int> pair = diff.top();
        diff.pop();
        int idx = pair.first;
        int realDiff = pair.second;

        if (num5000 > 0 && realDiff > 0) {
            team += ex[idx];
            num5000--;
        }
        else
            team += cheap[idx];
    }

    cout << team;
    return 0;
}*/