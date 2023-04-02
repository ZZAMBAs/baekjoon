/*
//
// Created by cho on 23. 3. 13.
//
#include <iostream>
#include <queue>

using namespace std;

int main(){
    int N, H, T, h, cnt = 0;
    priority_queue<int> q;
    cin >> N >> H >> T;
    for (int i = 0; i < N; ++i) {
        cin >> h;
        q.push(h);
    }
    while (q.top() >= H && cnt < T){
        int giant = q.top();
        q.pop();
        q.push(max(1, giant / 2));
        cnt++;
    }

    if (cnt == T && q.top() >= H)
        cout << "NO\n" << q.top();
    else
        cout << "YES\n" << cnt;
    return 0;
}*/
