/*
//
// Created by AppDeveloper on 2022-10-22.
// 이분 탐색 VS 투 포인터: https://sohyunwriter.tistory.com/117?category=892942
#include <iostream>
#include <algorithm>

using namespace std;

int N, M, memory[100000], team = INT32_MAX;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> M;
    for (int i = 0; i < N; ++i)
        cin >> memory[i];
    sort(memory, memory + N);

    for (int i = 0; i <= N - 1; ++i) {
        int s = i, e = N - 1, curNum = memory[i];
        while (s <= e){
            int m = (s + e) / 2;
            int cmp = memory[m] - curNum;
            if (cmp >= M) {
                if (cmp < team)
                    team = cmp;
                e = m - 1;
            }
            else
                s = m + 1;
        }
    }
    
    cout << team;
    return 0;
}*/
