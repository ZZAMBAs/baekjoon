/*
//
// Created by AppDeveloper on 2022-09-26.
//
#include <iostream>
#include <stack>

using namespace std;

char source;
int board[200][200], R, cost, deadEnd, curTime;
int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};

void justStay(){
    stack<pair<int, int>> s;
    for (int i = 0; i < R; ++i)
        for (int j = 0; j < cost; ++j){
            board[i][j]--;
            if (!board[i][j])
                s.push({i, j});
        }

    while (!s.empty()) {
        for (int k = 0; k < 4; ++k) {
            int nextR = s.top().first + dx[k];
            int nextC = s.top().second + dy[k];
            if (nextR >= 0 && nextR < R && nextC >= 0 && nextC < cost)
                board[nextR][nextC] = 0;
        }
        s.pop();
    }

}

void installBomb(){
    for (int i = 0; i < R; ++i)
        for (int j = 0; j < cost; ++j) {
            if (board[i][j] <= 0)
                board[i][j] = 3;
        }
}

int main(){
    cin >> R >> cost >> deadEnd;
    for (int i = 0; i < R; ++i)
        for (int j = 0; j < cost; ++j) {
            cin >> source;
            if (source == 'O')
                board[i][j] = 3;
        }

    while (curTime != deadEnd){
        justStay();
        if (curTime++ % 2 == 1)
            installBomb();
    }

    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < cost; ++j) {
            if (board[i][j] <= 0)
                cout << '.';
            else
                cout << 'O';
        }
        cout << "\n";
    }

    return 0;
}*/
