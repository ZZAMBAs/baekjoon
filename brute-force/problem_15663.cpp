/*
//
// Created by cho on 23. 6. 14.
// set을 쓰지 않고 푸는 방법: https://dy-coding.tistory.com/entry/%EB%B0%B1%EC%A4%80-15663%EB%B2%88-N%EA%B3%BC-M-9-java
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int N, M;
int arr[8];
bool visited[8];
vector<int> v;
set<string> s;

void bruteforce(int idx, int cnt){
    if (cnt == M){
        string res;
        for (auto i : v)
            res.append(to_string(i) + " ");
        if (s.find(res) == s.end()) {
            cout << res << "\n";
            s.insert(res);
        }
        return;
    }

    for (int i = 0; i < N; ++i) {
        if (!visited[i]) {
            visited[i] = true;
            v.emplace_back(arr[i]);
            bruteforce(i, cnt + 1);
            v.pop_back();
            visited[i] = false;
        }
    }
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < N; ++i)
        cin >> arr[i];
    sort(arr, arr + N);
    bruteforce(-1, 0);
    return 0;
}*/
