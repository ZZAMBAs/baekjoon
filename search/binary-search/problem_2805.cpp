/*
//
// Created by AppDeveloper on 2022-07-13.
// 오버플로우 문제가 많이 발생하는 유형.
#include <iostream>
#include <algorithm>

long long n, M, l, r, team;
long long tree[1000000];

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> M;

    for (int i = 0; i < n; ++i)
        cin >> tree[i];

    sort(tree, tree + n);

    l = 0;
    r = tree[n - 1];

    while (l <= r){
        long long treeSum = 0;
        long long mid = (l + r) / 2;

        for (int i = 0; i < n; ++i)
            treeSum += max((long long)0, tree[i] - mid);

        if (treeSum >= M) {
            l = mid + 1;
            team = mid;
        }
        else
            r = mid - 1;
    }

    cout << team;
    return 0;
}*/
