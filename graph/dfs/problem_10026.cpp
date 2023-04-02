/*
//
// Created by AppDeveloper on 2022-05-19.
// 이 문제는 다른 사람들의 해답도 한번 보자.
#include <iostream>
#define VISITED 0
#define RED 1
#define GREEN 2
#define BLUE 3

using namespace std;

int n, normalAreaNum = 0, blindAreaNum = 0;
bool isNormalArea = false, isBlindArea = false;
int normal[100][100];
int colorBlind[100][100];

void dfs(int x, int y, int matrix[][100], int areaKind){
    if(matrix[x][y] == VISITED)
        return;

    if(areaKind == 1)
        isNormalArea = true;
    else
        isBlindArea = true;

    int dfs_color = matrix[x][y];
    matrix[x][y] = VISITED;

    if(x + 1 < n && matrix[x + 1][y] == dfs_color)
        dfs(x + 1, y, matrix, areaKind);
    if(x - 1 >= 0 && matrix[x - 1][y] == dfs_color)
        dfs(x - 1, y, matrix, areaKind);
    if(y + 1 < n && matrix[x][y + 1] == dfs_color)
        dfs(x, y + 1, matrix, areaKind);
    if(y - 1 >= 0 && matrix[x][y - 1] == dfs_color)
        dfs(x, y - 1, matrix, areaKind);

}

int main(){
    char inp;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; ++j) {
            scanf("%c", &inp);
            if(inp == '\n') {
                j--;
                continue;
            }
            if(inp == 'R')
                colorBlind[i][j] = normal[i][j] = RED;
            else if(inp == 'B')
                colorBlind[i][j] = normal[i][j] = BLUE;
            else{
                colorBlind[i][j] = RED;
                normal[i][j] = GREEN;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            isBlindArea = false;
            isNormalArea = false;
            bfs(i, j, normal, 1);
            fdp(i, j, colorBlind, 2);

            if(isNormalArea)
                normalAreaNum++;
            if(isBlindArea)
                blindAreaNum++;
        }
    }

    printf("%d %d", normalAreaNum, blindAreaNum);

    return 0;
}*/
