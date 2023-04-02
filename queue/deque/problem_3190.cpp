/*
//
// Created by AppDeveloper on 2022-11-25.
//
#include <iostream>
#include <deque>
#include <vector>

enum direction{UP, RIGHT, DOWN, LEFT};

using namespace std;

int board[100][100] = {-1, }; // 1: 사과, 0: 비어있음, -1: 뱀의 몸통
int N, K, L, time, d = RIGHT;
int dr[4] = {-1, 0, 1, 0}, dc[4] = {0, 1, 0, -1};
vector<pair<int, char>> rotate;
deque<pair<int, int>> dummy;

bool go(int directionChangeTime){
    while (time != directionChangeTime){
        time++;
        int nextR = dummy.front().first + dr[d];
        int nextC = dummy.front().second + dc[d];

        if (nextR < 0 || nextR >= N || nextC < 0 || nextC >= N || board[nextR][nextC] == -1)
            return false;
        if (board[nextR][nextC] == 0){
            board[dummy.back().first][dummy.back().second] = 0;
            dummy.pop_back();
        }
        dummy.emplace_front(nextR,nextC);
        board[nextR][nextC] = -1;
    }
    return true;
}

int main(){
    dummy.emplace_front(0, 0);
    cin >> N >> K;
    for (int i = 0; i < K; ++i) {
        int r, c;
        cin >> r >> c;
        board[r - 1][c - 1] = 1;
    }
    cin >> L;
    for (int i = 0; i < L; ++i) {
        int X;
        char cost;
        cin >> X >> cost;
        rotate.emplace_back(X, cost);
    }
    for (int i = 0; i < rotate.size(); i++) {
        if (!go(rotate[i].first))
            break;
        int plus = rotate[i].second == 'L' ? -1 : 1;
        d = (4 + d + plus) % 4;
        if (i + 1 == rotate.size())
            go(-1); // 벽이나 몸통 닿을 때까지 무한정 이동
    }

    cout << time;
    return 0;
}
*/
