/*
//
// Created by AppDeveloper on 2022-12-02.
// https://scarlettb.tistory.com/66, https://bbeomgeun.tistory.com/110
// 사이클 유무 확인이 필요한 위상 정렬.
#include <iostream>
#include <queue>

using namespace std;

int N, M, visited[1001], inDegree[1001];
vector<vector<int>> nextV(1001);
vector<int> K;

void topologicalSorting(){
    queue<int> q;
    for (int i = 1; i <= N; ++i)
        if (!inDegree[i])
            q.push(i);

    while (!q.empty()){
        int cur = q.front();
        K.emplace_back(cur);
        q.pop();

        for (int n : nextV[cur]) {
            inDegree[n]--;
            if (!inDegree[n])
                q.push(n);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        int loop, pre = 0, cur;
        cin >> loop;
        for (int j = 0; j < loop; ++j) {
            cin >> cur;
            if (pre) {
                nextV[pre].emplace_back(cur);
                inDegree[cur]++;
            }
            pre = cur;
        }
    }

    topologicalSorting();

    if (K.size() != N)
        cout << 0;
    else
        for (int i : K)
            cout << i << "\n";
    return 0;
}*/
