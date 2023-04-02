/*
//
// Created by cho on 23. 1. 7.
// 최적 풀이는 투 포인터이다: https://imnotabear.tistory.com/382
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int N, A[2000], K;
map<int, vector<int>> m; // 값, 값의 idx들
bool visited[2000];

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        m[A[i]].emplace_back(i);
    }
    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int iIdx = visited[i], jIdx = visited[j];
            int sum = A[i] + A[j];
            if (m.find(sum) != m.end()){
                for (int idx : m[sum])
                    visited[idx] = true;
            }

            visited[i] = iIdx;
            visited[j] = jIdx;
        }
    }

    for (int i = 0; i < N; ++i) {
        if (visited[i])
            K++;
    }
    cout << K;
    return 0;
}*/
