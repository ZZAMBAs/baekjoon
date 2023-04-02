/*
//
// Created by cho on 23. 1. 28.
//
#include <iostream>
#include <queue>

using namespace std;

int res, dr[4] = {1, -1, 0, 0}, dc[4] = {0, 0, 1, -1};
char board[12][6];
bool visited[12][6], sw = true;

void bfs(int r, int c){
    char color = board[r][c];
    vector<pair<int, int>> popping;
    queue<pair<int, int>> q;
    q.push({r, c});
    visited[r][c] = true;
    while (!q.empty()){
        pair<int, int> front = q.front();
        popping.push_back(front);
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nextR = front.first + dr[i];
            int nextC = front.second + dc[i];

            if (nextR >= 0 && nextR < 12 && nextC >= 0 && nextC < 6
                && !visited[nextR][nextC] && board[nextR][nextC] == color){
                    visited[nextR][nextC] = true;
                    q.push({nextR, nextC});
            }
        }
    }
    if (popping.size() >= 4)
        sw = true;
    else{
        for (pair<int, int> p : popping)
            visited[p.first][p.second] = false;
    }
    return;
}

void gravity(){
    for (int i = 0; i < 6; ++i) {
        queue<char> colors;
        for (int j = 11; j >= 0; --j) {
            if (board[j][i] != '.')
                colors.push(board[j][i]);
        }
        for (int j = 11; j >= 0; --j) {
            if (!colors.empty()){
                board[j][i] = colors.front();
                colors.pop();
            }
            else
                board[j][i] = '.';
        }
    }
}

void popAll(){
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 6; ++j) {
            if (visited[i][j])
                board[i][j] = '.';
        }
    }
}

int main(){
    for (int i = 0; i < 12; ++i)
        for (int j = 0; j < 6; ++j)
            cin >> board[i][j];

    while (sw) {
        sw = false;
        fill(visited[0], visited[0] + 12 * 6, false);
        for (int i = 0; i < 12; ++i)
            for (int j = 0; j < 6; ++j)
                if (board[i][j] != '.' && !visited[i][j])
                    bfs(i, j);
        if (sw) {
            popAll();
            gravity();
            res++;
        }
    }
    
    cout << res;
    return 0;
}*/
