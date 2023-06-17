/*
//
// Created by cho on 23. 6. 17.
//
#include <iostream>
#include <queue>

using namespace std;

int N, M, board[100][70], res;
pair<int, int> dl[8] = { {-1, 0}, {-1, 1}, {0, 1},
                         {1, 1}, {1, 0}, {1, -1},
                         {0, -1}, {-1, -1}};
bool checked[100][70];

bool checking(int r, int c){
    int nowHeight = board[r][c];
    bool ret = true;
    queue<pair<int, int>> q;
    q.emplace(r, c);
    checked[r][c] = true;

    while (!q.empty()){
        int curR = q.front().first;
        int curC = q.front().second;
        q.pop();

        for (int i = 0; i < 8; ++i) {
            int nextR = curR + dl[i].first;
            int nextC = curC + dl[i].second;
            if (nextR >= 0 && nextR < N && nextC >= 0 && nextC < M){
                if (board[nextR][nextC] > nowHeight){
                    ret = false;
                }
                else if (!checked[nextR][nextC] && board[nextR][nextC] == nowHeight){
                    checked[nextR][nextC] = true;
                    q.emplace(nextR, nextC);
                }
            }
        }

    }
    
    return ret;
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> board[i][j];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (!checked[i][j] && checking(i, j))
                res++;
        }
    }
    cout << res;
    return 0;
}*/
