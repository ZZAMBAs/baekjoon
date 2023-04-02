/*
//
// Created by cho on 23. 1. 22.
// 이진법 풀이: https://syh39.github.io/algorithm/algorithm_BOJ_2877/
#include <iostream>
#include <queue>

using namespace std;

int K;
queue<int> res;

int pow(int num, int mul){
    int res = 1;
    while (mul--)
        res *= num;
    return res;
}

int main(){
    cin >> K;
    while (K){
        for (int i = 1; true; ++i) {
            int start = pow(2, i) - 1;
            int end = pow(2, i + 1) - 1;
            if (start <= K && K < end){
                int line = (end - start) / 2;
                if (start + line > K){
                    res.push(4);
                    K -= pow(2, i - 1);
                }
                else{
                    res.push(7);
                    K -= pow(2, i);
                }
                break;
            }
        }
    }

    while (!res.empty()) {
        cout << res.front();
        res.pop();
    }
    return 0;
}*/
