/*
//
// Created by AppDeveloper on 2022-12-01.
//
#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, S, arr[100000], prefixSum[100001] = {0, }, K = 100001, s = 0, e = 0;
    cin >> N >> S;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
        prefixSum[i + 1] = prefixSum[i] + arr[i];
    } // prefixSum[i + 1] - prefix[j] :  j에서 i항까지 합.

    while (e < N){
        int curSum = prefixSum[e + 1] - prefixSum[s];
        if (curSum < S)
            e++;
        else{
            K = min(K, e - s + 1);
            s++;
            e = max(s, e);
        }
    }

    cout << (K > 100000 ? 0 : K);
    return 0;
}*/
