/*
//
// Created by cho on 23. 3. 7.
//
#include <iostream>
#include <algorithm>

using namespace std;

int N, a[100000], res;

int main(){
    cin >> N;
    int l = 0, r = N - 1;
    for (int i = 0; i < N; ++i)
        cin >> a[i];
    sort(a, a + N);
    res += a[r--];
    for (int i = 1; i < N; ++i) {
        if (i % 2) // 홀수
            res += max(0, a[l++] - a[r + 1]);
        else
            res += max(0, a[r--] - a[l - 1]);
    }

    cout << res;
    return 0;
}*/
