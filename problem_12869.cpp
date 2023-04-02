/*
//
// Created by cho on 23. 2. 8.
// 직관적인 BFS 풀이: https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=jhc9639&logNo=221439092305
#include <iostream>

using namespace std;

int N, h, dp[61][61][61], scv[3];
int arr[6][3] = {
        {9, 3, 1}, {9, 1, 3},
        {3, 9, 1}, {3, 1, 9},
        {1, 9, 3}, {1, 3, 9}
};

bool isClr(int h1, int h2, int h3){
    bool res = false;
    for (int i = 0; i < 6 && !res; ++i)
        if (arr[i][0] >= h1 && arr[i][1] >= h2 && arr[i][2] >= h3)
            res = true;
    return res;
}

int fdp(int scv1, int scv2, int scv3){
    if(dp[scv1][scv2][scv3] != INT32_MAX)
        return dp[scv1][scv2][scv3];

    for (int i = 0; i < 6; ++i) {
        dp[scv1][scv2][scv3] =
                min(dp[scv1][scv2][scv3],
                    fdp(max(0, scv1 - arr[i][0]), max(0, scv2 - arr[i][1]), max(0, scv3 - arr[i][2])) + 1);
    }
    return dp[scv1][scv2][scv3];
}

int main(){
    fill(dp[0][0], dp[0][0] + 61 * 61 * 61, INT32_MAX);
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> scv[i];
    for (int i = 0; i <= 9; ++i)
        for (int j = 0; j <= 9; ++j)
            for (int k = 0; k <= 9; ++k)
                if (isClr(i, j, k))
                    dp[i][j][k] = 1;

    cout << fdp(scv[0], scv[1], scv[2]);

    return 0;
}*/
