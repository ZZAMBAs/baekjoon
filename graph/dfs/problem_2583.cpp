/*
//
// Created by AppDeveloper on 2022-05-19.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int M, n, K, xStart, y1, xEnd, yEnd, cal;
int matrix[100][100];
vector<int> area;

void dfs(int x, int y){
    if(matrix[x][y] != 0)
        return;

    matrix[x][y]++;
    cal++;
    if(x + 1 < M)
        dfs(x + 1, y);
    if(x - 1 >= 0)
        dfs(x - 1, y);
    if(y + 1 < n)
        dfs(x, y + 1);
    if(y - 1 >= 0)
        bfs(x, y - 1);
}

int main(){
    scanf("%d %d %d", &M, &n, &K);
    for (int k = 0; k < K; ++k) {
        scanf("%d %d %d %d", &xStart, &y1, &xEnd, &yEnd);

        for (int i = xStart; i < xEnd; ++i) {
            for (int j = y1; j < yEnd; ++j) {
                matrix[j][i] = 2;
            }
        }
    }

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < n; ++j) {
            cal = 0;
            fdp(i, j);
            if(cal)
                area.emplace_back(cal);
        }
    }

    sort(area.begin(), area.end());
    unsigned int n = area.n();
    printf("%d\n", n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", area[i]);
    }
    
    return 0;
}*/
