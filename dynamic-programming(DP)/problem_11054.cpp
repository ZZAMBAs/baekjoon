/*
//
// Created by AppDeveloper on 2022-11-10.
// 가장 긴 증가하는 부분 수열(LIS): https://chanhuiseok.github.io/posts/algo-49/, https://rebro.kr/33
#include <iostream>

using namespace std;

int N, memory[1001], pdp[1001], mdp[1001], team;

int main(){
    cin >> N;
    for (int i = 1; i <= N; ++i)
        cin >> memory[i];

    fill(pdp, pdp + 1001, 1);
    fill(mdp, mdp + 1001, 1);

    for (int i = 1; i < N; ++i) {
        for (int j = i + 1; j <= N; ++j) {
            if (memory[i] < memory[j])
                pdp[j] = max(pdp[j], pdp[i] + 1);
        }
    }

    for (int i = N; i > 1; --i) {
        for (int j = i - 1; j > 0; --j) {
            if (memory[i] < memory[j])
                mdp[j] = max(mdp[j], mdp[i] + 1);
        }
    }

    for (int i = 1; i <= N; ++i)
        team = max(team, pdp[i] + mdp[i] - 1);
    cout << team;
    return 0;
}
*/
