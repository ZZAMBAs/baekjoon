/*
//
// Created by cho on 23. 3. 9.
// 자세한 로직을 모르겠음.
#include <iostream>
#include <vector>

using namespace std;

int N, dp[1000001];
vector<int> sixes;

int sixIdx(int num){
    int s = 0, e = sixes.size() - 1;
    while (s <= e){
        int m = (s + e) / 2;

        if (sixes[m] < num)
            s = m + 1;
        else
            e = m - 1;
    }
    return e;
}

int fdp(int num, int depth, int maxDepth){
    if (depth > maxDepth)
        return maxDepth;
    if (dp[num] > 0 && dp[num] < 7)
        return dp[num];

    int sIdx = sixIdx(num);
    for (int i = 0; i <= sIdx; ++i) {
        dp[num] = min(dp[num], fdp(num - sixes[i], depth + 1, maxDepth) + 1);
    }
    return dp[num];
}

int main(){
    ios::sync_with_stdio(false);

    fill(dp, dp + 1000001, 7);
    cin >> N;
    int i = 1, d = 5;
    while (i < 1000001){
        sixes.push_back(i);
        dp[i] = 1;
        i += d;
        d += 4;
    }

    cout << fdp(N, 0, N > 1791 ? 4 : 6);
    return 0;
}*/
