/*
//
// Created by AppDeveloper on 2022-07-09.
//
#include <iostream>
#include <cstring>

using namespace std;

int n, triangle[501][502] = {0, }, sec[501][502];

int fdp(int x, int y){
    if (x == 0 || y == 0 || y == 501)
        return 0;

    if (sec[x][y] >= 0)
        return sec[x][y];

    int lVal = fdp(x - 1, y - 1) + triangle[x][y];
    int rVal = fdp(x - 1, y) + triangle[x][y];
    sec[x][y] = max(lVal, rVal);
    return sec[x][y];
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    memset(sec, -1, sizeof(sec));

    int maxVal = 0;
    
    cin >> n;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= i; ++j)
            cin >> triangle[i][j];

    for (int i = 1; i <= n; ++i) {
        int dpVal = fdp(n, i);
        if (maxVal < dpVal)
            maxVal = dpVal;
    }

    cout << maxVal;

    return 0;
}*/
