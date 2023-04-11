/*
//
// Created by cho on 23. 4. 11.
// 다양한 풀이가 있다. 이분 탐색이 보통의 접근법이고 이외 오프라인 쿼리, 누적 합, DP 등이 있다.
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, A[250000], B[250000], Q, w[250000];
    int minDiff[250000];
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> A[i];
    for (int i = 0; i < N; ++i)
        cin >> B[i];
    cin >> Q;
    for (int i = 0; i < Q; ++i)
        cin >> w[i];
    minDiff[0] = A[0] - B[0];
    for (int i = 1; i < N; ++i)
        minDiff[i] = min(A[i] - B[i], minDiff[i - 1]);

    for (int i = 0; i < Q; ++i) {
        int s = 0, e = N - 1;
        int curW = w[i];
        while (s <= e){
            int mid = (s + e) / 2;
            if (minDiff[mid] >= curW){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        cout << e + 1 << "\n";
    }

    return 0;
}*/
