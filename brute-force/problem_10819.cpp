/*
//
// Created by cho on 23. 3. 3.
//
#include <iostream>
#include <vector>

using namespace std;

int N, A[8], res;
vector<int> v;
bool visited[8];

void bruteforce(int idx){
    if (idx == N){
        int sum = 0;
        for (int i = 0; i < N - 1; ++i)
            sum += abs(v[i] - v[i + 1]);
        res = max(res, sum);
        return;
    }

    for (int i = 0; i < N; ++i) {
        if (!visited[i]){
            visited[i] = true;
            v.push_back(A[i]);
            bruteforce(idx + 1);
            visited[i] = false;
            v.pop_back();
        }
    }
}

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    bruteforce(0);
    cout << res;
    return 0;
}*/
