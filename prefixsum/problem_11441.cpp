/*
//
// Created by AppDeveloper on 2022-12-19.
//
#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M, s, e, memory[100000], prefixSum[100001] = {0, };
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> memory[i];
        prefixSum[i + 1] = prefixSum[i] + memory[i]; // prefixSum[a + 1] = memory[a]까지 합
    }
    cin >> M;
    for (int i = 0; i < M; ++i) {
        cin >> s >> e;
        cout << prefixSum[e] - prefixSum[s - 1] << "\n"; // https://www.acmicpc.net/board/view/27898
    }
    return 0;
}*/
