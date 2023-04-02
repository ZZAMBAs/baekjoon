/*
//
// Created by AppDeveloper on 2022-09-07.
// bfs 기초
#include <iostream>
#include <queue>

using namespace std;

int F, S, G, U, D;
bool visited[1000001];

int bfs(){
    int level = 0;
    queue<int> q;
    q.push(S);
    visited[S] = true;

    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int cur = q.front();
            q.pop();
            int next1 = cur + U;
            int next2 = cur - D;

            if (cur == G)
                return level;

            if (next1 <= F && !visited[next1]) {
                visited[next1] = true;
                q.push(next1);
            }
            if (next2 >= 1 && !visited[next2]){
                visited[next2] = true;
                q.push(next2);
            }
        }
        level++;
    }
    
    return -1;
}

int main(){
    cin >> F >> S >> G >> U >> D;
    int cnt = bfs();
    if (cnt < 0)
        cout << "use the stairs";
    else
        cout << cnt;
    return 0;
}*/
