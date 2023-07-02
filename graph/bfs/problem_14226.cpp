/*
//
// Created by cho on 23. 7. 2.
// dp로도 풀 수 있는 모양.
#include <iostream>
#include <queue>

using namespace std;

int S;
bool visited[2001][2001]; // {cnt, clip}

int bfs(){
    queue<pair<int, int>> q; // {현 위치, 클립보드}
    int level = 0;
    q.emplace(1, 0);
    visited[1][0] = true;
    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int cnt = q.front().first;
            int clip = q.front().second;
            q.pop();

            if (cnt == S)
                return level;

            if (!visited[cnt][cnt]) {
                visited[cnt][cnt] = true;
                q.emplace(cnt, cnt);
            }
            if (cnt < S && !visited[cnt + clip][clip]) {
                visited[cnt + clip][clip] = true;
                q.emplace(cnt + clip, clip);
            }
            if (cnt > 2 && !visited[cnt - 1][clip]) {
                visited[cnt - 1][clip] = true;
                q.emplace(cnt - 1, clip);
            }
        }
        level++;
    }
    return -1;
}

int main(){
    cin >> S;
    cout << bfs();
    return 0;
}*/
