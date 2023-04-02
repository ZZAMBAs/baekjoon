/*
//
// Created by cho on 23. 3. 4.
// dfs 문제가 맞으나, 메모리 초과가 어디서 뜨는지 몰라 그냥 bfs 기법으로 해결함.
//
#include <iostream>
#include <queue>

using namespace std;

int T, n, student[100001];
int visited[100001];

void bfs(int seq, int idx){
    queue<int> q;
    q.push(idx);
    while (!q.empty()){
        int cur = q.front();
        q.pop();
        int next = student[cur];

        if (!visited[next]){
            visited[next] = seq;
            q.push(next);
        }
        else if (visited[next] == seq){
            visited[next] *= -1;
            q.push(next);
        }
    }
}

int main(){
    cin >> T;
    while (T--){
        fill(visited, visited + 100001, 0);
        cin >> n;
        int ans = n;
        for (int i = 1; i <= n; ++i)
            cin >> student[i];

        for (int i = 1; i <= n; ++i) {
            if (!visited[i]) {
                visited[i] = i;
                bfs(i, i);
            }
        }
        for (int i = 1; i <= n; ++i) {
            if (visited[i] < 0)
                ans--;
        }

        cout << ans << "\n";
    }
    return 0;
}*/