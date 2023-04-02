/*
//
// Created by cho on 23. 1. 1.
//
#include <iostream>
#include <queue>

using namespace std;

typedef struct node{
    int r;
    int c;
    pair<int, int> pre;

    node(int r, int c, const pair<int, int> &pre) : r(r), c(c), pre(pre) {}
}node;

int N, M;
char board[50][50];
int dr[4] = {1, -1, 0, 0}, dc[4] = {0, 0, 1, -1};
bool visited[50][50], isCycle;

void cycleChecking(int r, int c){
    char color = board[r][c];
    visited[r][c] = true;
    queue<node> q;
    q.push(node(r, c, {-1, -1}));
    while (!q.empty()){
        node curNode = q.front();
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nextR = curNode.r + dr[i];
            int nextC = curNode.c + dc[i];
            if (make_pair(nextR, nextC) == curNode.pre)
                continue;

            if (nextR >= 0 && nextR < N && nextC >= 0 && nextC < M && board[nextR][nextC] == color){
                if (!visited[nextR][nextC]){
                    visited[nextR][nextC] = true;
                    q.push(node(nextR, nextC, {curNode.r, curNode.c}));
                }
                else{
                    isCycle = true;
                    return;
                }
            }
        }
        
    }
    return;
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> board[i][j];
    for (int i = 0; i < N && !isCycle; ++i)
        for (int j = 0; j < M && !isCycle; ++j)
            if (!visited[i][j])
                cycleChecking(i, j);

    cout << (isCycle ? "Yes" : "No");
    return 0;
}*/
