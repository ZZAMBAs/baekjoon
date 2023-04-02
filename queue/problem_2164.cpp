/*
//
// Created by AppDeveloper on 2022-05-21.
//
#include <iostream>
#include <queue>

using namespace std;

int n;
queue<int> card;

int main(){
    cin >> n;
    for (int i = 1; i <= n; ++i)
        card.push(i);

    while (card.n() != 1){
        card.pop();
        int front = card.front();
        card.pop();
        card.push(front);
    }

    cout << card.front();

    return 0;
}*/
