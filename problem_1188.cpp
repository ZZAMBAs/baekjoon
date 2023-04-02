/*
//
// Created by AppDeveloper on 2022-10-21.
//
#include <iostream>
#include <numeric>

using namespace std;

int main(){
    int N, M, team = 0;
    cin >> N >> M;
    int allSausageLength = lcm(N, M);
    int sausageLength = allSausageLength / N;
    int lengthPerCritics = allSausageLength / M + allSausageLength % M;

    for (int i = lengthPerCritics; i < allSausageLength; i += lengthPerCritics) {
        if (i % sausageLength)
            team++;
    }

    cout << team;
    return 0;
}*/
