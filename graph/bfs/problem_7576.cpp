/*
//
// Created by AppDeveloper on 2022-06-01.
//
#include <iostream>
#include <queue>
#define VISITED 2

using namespace std;

int M, n, tomatoes[1000][1000], matureNum = 0, allTomatoesNum = 0, days = -1;
queue<pair<int, int>> matureTomatoes;

void checkUpDownLeftRight(int x, int y);

int bfs(){
    while (!matureTomatoes.empty()){
        int size = matureTomatoes.size();

        for (int i = 0; i < size; ++i) {
            pair<int, int> front = matureTomatoes.front();
            int x = front.first;
            int y = front.second;

            checkUpDownLeftRight(x, y);
            matureTomatoes.pop();
        }
        days++;
    }

    if (matureNum != allTomatoesNum)
        return -1;
    
    return days;
}

void checkUpDownLeftRight(int x, int y) {
    if (x + 1 < n && tomatoes[x + 1][y] == 0) {
        matureTomatoes.push({x + 1, y});
        tomatoes[x + 1][y]++;
        matureNum++;
    }
    if (x - 1 >= 0 && tomatoes[x - 1][y] == 0){
        matureTomatoes.push({x - 1, y});
        tomatoes[x - 1][y]++;
        matureNum++;
    }
    if (y + 1 < M && tomatoes[x][y + 1] == 0) {
        matureTomatoes.push({x, y + 1});
        tomatoes[x][y + 1]++;
        matureNum++;
    }
    if (y - 1 >= 0 && tomatoes[x][y - 1] == 0){
        matureTomatoes.push({x, y - 1});
        tomatoes[x][y - 1]++;
        matureNum++;
    }
}

int main(){
    cin >> M >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> tomatoes[i][j];
            if (tomatoes[i][j] != -1)
                allTomatoesNum++;
            if (tomatoes[i][j] == 1) {
                matureNum++;
                matureTomatoes.push({i, j});
            }
        }
    }
    
    cout << bfs();

    return 0;
}*/
