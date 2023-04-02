/*
//
// Created by AppDeveloper on 2022-07-01.
// 메모리 초과 방지를 위해서는 중복 처리가 반드시 필요하다.
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int searching(int n, int K){
    vector<bool> isVisited(100001, false);
    queue<int> bfs;
    bfs.push(n);
    int level = 0;

    while (bfs.size()){
        unsigned int size = bfs.size();
        for (int i = 0; i < size; ++i) {
            int front = bfs.front();
            bfs.pop();

            if (isVisited[front])
                continue;
            isVisited[front] = true;

            if (front == K)
                return level;

            if (front == 0) {
                bfs.push(1);
                continue;
            }

            if (front < 100000)
                bfs.push(front + 1);
            if (front > 0)
                bfs.push(front - 1);
            if (front <= 50000)
                bfs.push(front * 2);
        }

        level++;
    }
}

int main(){
    int n, K;
    
    cin >> n >> K;

    cout << searching(n, K);
    return 0;
}*/
