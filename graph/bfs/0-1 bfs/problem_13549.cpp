/*
//
// Created by AppDeveloper on 2022-10-10.
// deque, priority_queue 풀이: https://jdselectron.tistory.com/58 (deque 풀이가 0-1 bfs 풀이이다.)
// 다익스트라 풀이: https://donggoolosori.github.io/2021/05/11/boj-13549/
#include <iostream>
#include <queue>

using namespace std;

int N, K, sec[100001];
bool visited[100001];

void bfs(int idx){
    int level = 0;
    queue<int> q1, q0;
    q1.push(idx);
    q0.push(idx);
    visited[idx] = true;
    while (!q1.empty()){
        int q0Size = q0.size();
        for (int i = 0; i < q0Size; ++i) {
            int front = q0.front();
            q0.pop();
            while (front * 2 <= 100000 && !visited[front * 2]){
                sec[front * 2] = level;
                visited[front * 2] = true;
                q1.push(front * 2);
                front *= 2;
            }
        }
        int q1Size = q1.size();
        for (int i = 0; i < q1Size; ++i) {
            int front = q1.front();
            q1.pop();

            int plus = front + 1, minus = front - 1;
            if (plus <= 100000 && !visited[plus]){
                sec[plus] = level + 1;
                visited[plus] = true;
                q1.push(plus);
                q0.push(plus);
            }
            if (minus >= 0 && !visited[minus]){
                sec[minus] = level + 1;
                visited[minus] = true;
                q1.push(minus);
                q0.push(minus);
            }
        }
        
        level++;
    }
}

int main(){
    cin >> N >> K;
    bfs(N);
    cout << sec[K];
    return 0;
}*/
