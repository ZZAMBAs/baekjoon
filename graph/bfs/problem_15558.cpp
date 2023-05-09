/*
//
// Created by cho on 23. 5. 9.
//
#include <iostream>
#include <queue>

using namespace std;

int N, k;
char path[2][100000];
bool clr;

void bfs(){
    bool visited[2][100000];
    fill(visited[0], visited[0] + 2 * 100000, false);
    int time = 0; // 유저 이동 후 칸이 없어짐
    queue<pair<int, int>> q;
    q.emplace(0, 0); // {줄, 칸}
    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            pair<int, int> cur = q.front();
            q.pop();
            if (cur.second + 1 >= N || cur.second + k >= N){
                clr = true;
                return;
            }
            
            pair<int, int> next[3] = { {cur.first, cur.second + 1}, 
                                       {cur.first, cur.second - 1}, 
                                       {(cur.first + 1) % 2, cur.second + k}
            };
            for (int j = 0; j < 3; ++j) {
                int nextLine = next[j].first;
                int nextLoc = next[j].second;
                if (path[nextLine][nextLoc] == '1' && !visited[nextLine][nextLoc]) {
                    q.emplace(nextLine, nextLoc);
                    visited[nextLine][nextLoc] = true;
                }
            }

            path[0][time] = path[1][time] = '0';
        }
        time++;
    }
}

int main(){
    cin >> N >> k;
    for (int i = 0; i < N; ++i) {
        cin >> path[0][i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> path[1][i];
    }
    bfs();

    cout << (clr ? 1 : 0);
    return 0;
}*/
