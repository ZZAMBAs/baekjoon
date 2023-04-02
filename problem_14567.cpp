/*
//
// Created by AppDeveloper on 2022-10-25.
// 위상 정렬 풀이: https://scarlettb.tistory.com/118
// pdp: https://gusdnr69.tistory.com/232
#include <iostream>
#include <queue>

using namespace std;

int N, M, memory, B;
int semester[1001];
vector<vector<int>> children(1001), parents(1001);

void bfs(int idx){
    queue<int> q;
    q.push(idx);
    int level = 1;
    while (!q.empty()){
        int size = q.size();
        for (int i = 0; i < size; ++i) {
            int cur = q.front();
            q.pop();

            if (semester[cur] < level)
                semester[cur] = level;
            else
                continue;

            for (int c : children[cur])
                q.push(c);
        }
        level++;
    }
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        cin >> memory >> B;
        children[memory].emplace_back(B);
        parents[B].emplace_back(memory);
    }

    for (int i = 1; i <= N; ++i) {
        if (!parents[i].empty())
            continue;
        bfs(i);
    }
    for (int i = 1; i <= N; i++)
        cout << semester[i] << " ";
    return 0;
}*/
