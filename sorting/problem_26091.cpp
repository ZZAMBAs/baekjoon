/*
//
// Created by cho on 23. 4. 13.
//
#include <iostream>
#include <algorithm>

using namespace std;

int N, M, a[100000], res;

int main(){
    cin >> N >> M;
    for (int i = 0; i < N; ++i)
        cin >> a[i];

    sort(a, a + N);
    int s = 0, e = N - 1;
    while (s < e){
        if (a[e] + a[s] >= M) {
            res++;
            e--;
        }
        s++;
    }

    cout << res;
    return 0;
}*/
