/*
//
// Created by cho on 23. 4. 3.
// 조합 수로 보면 백트래킹이나 브루트포스로 풀 수 없다.
#include <iostream>

using namespace std;

int N, k, museum[201][2], dp[201][3][199], res;

int fdp(int r, int seq, int cnt){
    if (dp[r][seq][cnt] >= 0)
        return dp[r][seq][cnt];

    int ret = 0;
    if (seq == 0) { // 좌 닫
        if (cnt - 1 >= 0)
            ret = max(ret, fdp(r - 1, 0, cnt - 1));
        if (r - 1 - cnt >= 0)
            ret = max(ret, fdp(r - 1, 2, cnt));
        ret += museum[r][1];
    }
    else if (seq == 1) { // 우 닫
        if (cnt - 1 >= 0)
            ret = max(ret, fdp(r - 1, 1, cnt - 1));
        if (r - 1 - cnt >= 0)
            ret = max(ret, fdp(r - 1, 2, cnt));
        ret += museum[r][0];
    }
    else{ // 전부 열
        if (cnt - 1 >= 0) {
            ret = max(ret, fdp(r - 1, 0, cnt - 1));
            ret = max(ret, fdp(r - 1, 1, cnt - 1));
        }
        if (r - 1 - cnt >= 0)
            ret = max(ret, fdp(r - 1, 2, cnt));
        ret += museum[r][1] + museum[r][0];
    }
    dp[r][seq][cnt] = ret;
    return dp[r][seq][cnt];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> k;
    while (!(N == 0 && k == 0)) {
        res = 0;
        for (int i = 0; i < N; ++i) {
            cin >> museum[i][0] >> museum[i][1];
        }
        museum[N][0] = museum[N][1] = 0;

        for (int i = 0; i < 3; ++i) {
            fill(dp[0][0], dp[0][0] + 201 * 3 * 199, -1);
            dp[0][0][0] = museum[0][1];
            dp[0][1][0] = museum[0][0];
            dp[0][2][0] = museum[0][1] + museum[0][0];

            res = max(res, fdp(N, i, k));
        }

        cout << res << "\n";

        cin >> N >> k;
    }

    return 0;
}*/
