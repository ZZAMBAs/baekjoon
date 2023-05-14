/*
//
// Created by cho on 23. 5. 14.
//
#include <iostream>
#include <queue>

using namespace std;

int N, S, D, F, B, K, I;
bool visited[100001] = {true, };

int bfs(){
    int level = 0;
    queue<int> loc;
    loc.emplace(S);
    visited[S] = true;
    while (!loc.empty()){
        int lSize = loc.size();
        for (int i = 0; i < lSize; ++i) {
            int cur = loc.front();
            loc.pop();

            if (cur == D)
                return level;

            int next[2] = {cur + F, cur - B};
            for (int j = 0; j < 2; ++j) {
                if (next[j] > 0 && next[j] <= N && !visited[next[j]]){
                    visited[next[j]] = true;
                    loc.emplace(next[j]);
                }
            }
        }
        level++;
    }
    
    return -1;
}

int main(){
    cin >> N >> S >> D >> F >> B >> K;
    for (int i = 0; i < K; ++i) {
        cin >> I;
        visited[I] = true;
    }
    int res = bfs();
    
    cout << (res >= 0 ? to_string(res) : "BUG FOUND");
    return 0;
}*/
