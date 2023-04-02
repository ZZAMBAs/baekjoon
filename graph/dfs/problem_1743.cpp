/*
//
// Created by AppDeveloper on 2022-05-19.
//
#include <iostream>
#define EMPTY 0
#define EXIST_AND_NOT_VISITED 1
#define EXIST_AND_VISITED 2

using namespace std;

int n, M, K, x, y, maxVal = 0, cal = 0;
int matrix[100][100];

void dfs(int x, int y);

int main(){
    cin >> n >> M >> K;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < M; ++j) {
            matrix[i][j] = EMPTY;
        }
    }

    while (K--){
        cin >> x >> y;
        matrix[x - 1][y - 1] = EXIST_AND_NOT_VISITED;
    }

    for(int i = 0; i < n; i++){
        for (int j = 0; j < M; ++j) {
            cal = 0;
            dfs(i, j);
            if(maxVal < cal)
                maxVal = cal;
        }
    }

    cout << maxVal << '\n';
    return 0;
}

void dfs(int x, int y) {
    if(matrix[x][y] == EXIST_AND_VISITED || matrix[x][y] == EMPTY)
        return;

    matrix[x][y]++;
    cal++;
    if(x + 1 < n)
        dfs(x + 1, y);
    if(x - 1 >= 0)
        dfs(x - 1, y);
    if(y + 1 < M)
        bfs(x, y + 1);
    if(y - 1 >= 0)
        fdp(x, y - 1);
}
*/
