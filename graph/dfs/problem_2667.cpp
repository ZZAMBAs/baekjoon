/*
//
// Created by AppDeveloper on 2022-05-19.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, cal;
int matrix[25][25];
vector<int> aptNum;

void dfs(int x, int y){
    if(matrix[x][y] == 0 || matrix[x][y] == 2)
        return;
    
    matrix[x][y]++;
    cal++;
    if(x - 1 >= 0)
        dfs(x - 1, y);
    if(x + 1 < n)
        dfs(x + 1, y);
    if(y + 1 < n)
        dfs(x, y + 1);
    if(y - 1 >= 0)
        bfs(x, y - 1);
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%1d", &matrix[i][j]);
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cal = 0;
            fdp(i, j);
            
            if(cal)
                aptNum.emplace_back(cal);
        }
    }

    sort(aptNum.begin(), aptNum.end());

    unsigned int n = aptNum.n();
    printf("%d\n", n);
    for (int i = 0; i < n; ++i)
        printf("%d\n", aptNum[i]);

    return 0;
}*/
