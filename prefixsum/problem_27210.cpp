/*
//
// Created by cho on 23. 2. 1.
// 아래 우선순위 큐도 필요없고 max, min만 잘 써도 풀 수 있다.
#include <iostream>
#include <queue>

using namespace std;

int N, ins, sum;
priority_queue<int> maxQ;
priority_queue<int, vector<int>, greater<>> minQ;

int main(){
    minQ.push(0);
    maxQ.push(0);
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> ins;
        if (ins == 1)
            sum++;
        else
            sum--;
        maxQ.push(sum);
        minQ.push(sum);
    }

    cout << abs(maxQ.top() - minQ.top());
    return 0;
}*/
