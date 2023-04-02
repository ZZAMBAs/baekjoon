/*
//
// Created by cho on 23. 1. 19.
// 내 풀이는 최적화는 아님.
// https://www.acmicpc.net/source/53324152

#include <iostream>
#include <queue>

using namespace std;

int N, M, ins;
priority_queue<int, vector<int>, less<>> times;
priority_queue<int, vector<int>, greater<>> sockets;
unsigned long long res;

int main(){
    int socketSize;
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        cin >> ins;
        times.push(ins);
    }

    while (!times.empty()){
        socketSize = sockets.size();
        int timesSize = times.size();
        for (int i = 0; i < min(M - socketSize, timesSize); ++i) {
            sockets.push(times.top());
            times.pop();
        }
        int socketMin = sockets.top();
        vector<int> temp;
        socketSize = sockets.size();
        for (int i = 0; i < socketSize; i++) {
            int diff = sockets.top() - socketMin;
            sockets.pop();
            if (diff)
                temp.push_back(diff);
        }
        for(int v : temp)
            sockets.push(v);
        res += socketMin;
    }

    socketSize = sockets.size();
    for (int i = 0; i < socketSize; ++i) {
        if (i == socketSize - 1)
            res += sockets.top();
        sockets.pop();
    }
    cout << res;
    return 0;
}*/
