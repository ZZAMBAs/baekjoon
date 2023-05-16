/*
//
// Created by cho on 23. 5. 16.
// 제일 깊은 곳에서 위로 올라오면서 피자를 채워도 된다. (이분 탐색보다는 느리다)
#include <iostream>

using namespace std;

int D, N, depth[300000], res;

int main(){
    cin >> D >> N;
    for (int i = 0; i < D; ++i) {
        cin >> depth[i];
        if (i > 0)
            depth[i] = min(depth[i], depth[i - 1]);
    }

    int e = D - 1;
    for (int i = 0; i < N; ++i) {
        int pizza;
        cin >> pizza;

        int s = 0;
        while (s <= e){
            int m = (s + e) / 2;

            if (depth[m] < pizza)
                e = m - 1;
            else
                s = m + 1;
        }
        if (i < N - 1)
            e--;
    }

    cout << (e < 0 ? 0 : e + 1);
    return 0;
}*/
