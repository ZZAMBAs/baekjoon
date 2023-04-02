/*
//
// Created by cho on 23. 1. 2.
//
#include <iostream>
#include <map>
#include <queue>

using namespace std;

int N, T;

bool bfs(int start, bool visited[21], int manitto[21]){
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()){
        int cur = q.front();
        q.pop();

        if (manitto[cur] == INT32_MAX)
            continue;

        if (!visited[manitto[cur]]){
            visited[manitto[cur]] = true;
            q.push(manitto[cur]);
        }
        else
            return true;
    }
    return false;
}

int main(){
    cin >> N;
    while (N){
        bool visited[20];
        fill(visited, visited + 21, false);
        int idx = 1;
        string s, e;
        map<string, int> m;
        int manitto[20];
        fill(manitto, manitto + 21, INT32_MAX);
        int K = 0;
        for (int i = 0; i < N; ++i) {
            cin >> s >> e;
            if (!m[s])
                m[s] = idx++;
            if (!m[e])
                m[e] = idx++;
            
            manitto[m[s]] = m[e];
        }

        for (int i = 0; i < N; ++i)
            if (!visited[i] && bfs(i, visited, manitto))
                K++;
        
        cout << ++T << " " << K << "\n";

        cin >> N;
    }
    
    return 0;
}
*/
