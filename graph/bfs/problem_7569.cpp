/*
//
// Created by AppDeveloper on 2022-08-29.
//
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

typedef struct tomato{
    int n;
    int m;
    int h;
    tomato(){};
    tomato(int n, int m, int h){
        this->n = n;
        this->m = m;
        this->h = h;
    }
}tomato;

int M, deadEnd, H, board[100][100][100], mature, tomatoes;
int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dh[6] = {0, 0, 0, 0, 1, -1};
vector<tomato> firstSearch;

int bfs(){
    queue<tomato> q;
    int fSize = firstSearch.size();
    int day = -1;
    for (int i = 0; i < fSize; ++i)
        q.push(firstSearch[i]);

    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int curN = q.front().n;
            int curM = q.front().m;
            int curH = q.front().h;
            q.pop();
            mature++;

            for (int j = 0; j < 6; ++j) {
                int nextN = curN + dx[j];
                int nextM = curM + dy[j];
                int nextH = curH + dh[j];
                if (nextN < 0 || nextN >= deadEnd || nextM < 0 || nextM >= M || nextH < 0 || nextH >= H)
                    continue;
                if (board[nextN][nextM][nextH] == 0) {
                    board[nextN][nextM][nextH] = 1;
                    q.push(tomato(nextN, nextM, nextH));
                }
            }
            
        }
        day++;
    }
    if (mature == tomatoes)
        return day;
    return -1;
}

int main(){
    cin >> M >> deadEnd >> H;
    for (int k = 0; k < H; ++k) 
        for (int i = 0; i < deadEnd; ++i)
            for (int j = 0; j < M; ++j){
                cin >> board[i][j][k];
                if (board[i][j][k] >= 0)
                    tomatoes++;
                if (board[i][j][k] == 1)
                    firstSearch.push_back(tomato(i,j,k));
            }
    
    cout << bfs();
    return 0;
}*/
