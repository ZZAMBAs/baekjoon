/*
//
// Created by cho on 23. 1. 30.
// 세그먼트 트리 기초: https://blog.naver.com/kks227/220791986409, https://anz1217.tistory.com/33
#include <iostream>

using namespace std;

typedef long long ll;

ll N, M, K, a, b, c, number, tree[3000000];

void update(int nodeNum, ll num){
    ll pre = tree[nodeNum];
    while (nodeNum){
        tree[nodeNum] -= pre;
        tree[nodeNum] += num;
        nodeNum /= 2;
    }
}

void insert(int nodeNum, int left, int right, int numSeq, ll num){
    if (left == right) {
        update(nodeNum, num);
        return;
    }

    int m = (left + right) / 2;
    if (m >= numSeq)
        insert(nodeNum * 2, left, m, numSeq, num);
    else
        insert(nodeNum * 2 + 1, m + 1, right, numSeq, num);
}

ll sum(int nodeNum, int sumL, int sumR, int l, int r){
    int m = (l + r) / 2;

    if (r < sumL || l > sumR)
        return 0;
    if (sumL <= l && sumR >= r)
        return tree[nodeNum];
    return sum(nodeNum * 2, sumL, sumR, l, m) + sum(nodeNum * 2 + 1, sumL, sumR, m + 1, r);
}

int main(){
    cin >> N >> M >> K;

    for (int i = 0; i < N; ++i) {
        cin >> number;
        insert(1, 0, N - 1, i, number);
    }

    for (int i = 0; i < K + M; ++i) {
        cin >> a >> b >> c;
        if (a == 1) {
            insert(1, 0, N - 1, b - 1, c);
        }
        else {
            cout << sum(1, b - 1, c - 1, 0, N - 1) << "\n";
        }
    }

    return 0;
}
*/
