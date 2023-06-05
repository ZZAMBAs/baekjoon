/*
//
// Created by cho on 23. 6. 5.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, arr[8];
vector<int> v;

void bruteforce(int idx, int cnt){
    if (cnt == M){
        for (auto num : v)
            cout << num << " ";
        cout << "\n";
        return;
    }

    for (int i = idx; i < N; ++i) {
        v.emplace_back(arr[i]);
        bruteforce(i, cnt + 1);
        v.pop_back();
    }

}

int main(){
    cin >> N >> M;
    for (int i = 0; i < N; ++i)
        cin >> arr[i];
    sort(arr, arr + N);

    bruteforce(0, 0);

    return 0;
}*/
