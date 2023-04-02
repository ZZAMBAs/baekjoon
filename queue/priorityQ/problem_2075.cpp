/*
//
// Created by AppDeveloper on 2022-06-27.
// 단순 정렬 문제로도 볼 수 있는 문제.
#include <iostream>
#include <queue>

using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<>> pq; // 최소힙
    int n, num;

    scanf("%d", &n);

    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n; ++i) {
            scanf("%d", &num);
            pq.push(num);
        }

        if (pq.size() > n){
            for (int i = 0; i < n; ++i) {
                pq.pop();
            }
        }

    }
    cout << pq.top();

    return 0;
}*/
