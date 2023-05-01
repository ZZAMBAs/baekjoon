/*
//
// Created by cho on 23. 5. 1.
//
#include <iostream>
#include <algorithm>

using namespace std;

int T, N, M;

int main(){
    cin >> T;
    while (T--){
        int A[20000], B[20000], res = 0;
        cin >> N >> M;
        for (int i = 0; i < N; ++i)
            cin >> A[i];
        for (int i = 0; i < M; ++i)
            cin >> B[i];

        sort(B, B + M);
        for (int i = 0; i < N; ++i) {
            int s = 0, e = M - 1;
            while (s <= e){
                int mid = (s + e) / 2;
                if (B[mid] >= A[i])
                    e = mid - 1;
                else
                    s = mid + 1;
            }
            res += s;
        }

        cout << res << "\n";
    }

    return 0;
}*/
