/*
//
// Created by cho on 23. 3. 29.
//
#include <iostream>

using namespace std;

int N, M, H, a, b, res = 4;
bool path[31][10];

bool chk(){
    for (int i = 1; i <= N; ++i) {
        int level = 1;
        int col = i;
        while (level <= H){
            if (path[level][col])
                col++;
            else if (path[level][col - 1])
                col--;
            level++;
        }

        if (col != i)
            return false;
    }
    return true;
}

void dfs(int r, int c, int nowCnt, int bound){
    if (nowCnt == bound){
        if (chk())
            res = bound;
        return;
    }
    int i = r, j = c;

    while (i <= H) {
        while (j < N) {

            if (!path[i][j] && !path[i][j - 1] && !path[i][j + 1]){
                path[i][j] = true;
                dfs(i, j, nowCnt + 1, bound);
                path[i][j] = false;
            }
            j++;
        }
        i++;
        j = 1;
    }

}

int main(){
    cin >> N >> M >> H;
    for (int i = 0; i < M; ++i) {
        cin >> a >> b;
        path[a][b] = true;
    }

    for (int i = 0; i < 4 && res > 3; ++i) {
        dfs(1, 1, 0, i);
    }

    if (res > 3)
        res = -1;
    cout << res;
    return 0;
}*/
