/*
//
// Created by cho on 23. 3. 1.
// bfs로 풀 수 있으나 복잡하다.
// 그리디 + 문자열 풀이: https://www.acmicpc.net/source/55682516
#include <iostream>
#include <queue>

using namespace std;

int M, N, res;
char board[1000][1000];
bool visited[1000][1000];
pair<int, int> chk[4] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

void bfs(int r, int c, int dir){
    int sum = 0;
    queue<pair<int, int>> q;
    q.push({r, c});
    while (!q.empty()){
        pair<int, int> cur = q.front();
        sum++;
        visited[cur.first][cur.second] = true;
        q.pop();

        int dc = 1;
        if (dir % 2 == 0){ // 가로
            for (int i = 0; i < 2; ++i) {
                dc *= -1;
                if (board[cur.first][cur.second + dc] == '.' && !visited[cur.first][cur.second + dc]
                && board[cur.first + chk[dir].first][cur.second + dc + chk[dir].second] == 'X'){
                    q.push({cur.first, cur.second + dc});
                }
            }
        }
        else{ // 세로
            for (int i = 0; i < 2; ++i) {
                dc *= -1;
                if (board[cur.first + dc][cur.second] == '.' && !visited[cur.first + dc][cur.second]
                && board[cur.first + dc + chk[dir].first][cur.second + chk[dir].second] == 'X'){
                    q.push({cur.first + dc, cur.second});
                }
            }
        }
    }
    res += sum / 2;
}

int main(){
    cin >> M >> N;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < 4; ++i) {
        fill(visited[0], visited[0] + 1000 * 1000, false);
        for (int j = 1; j < M - 1; ++j) {
            for (int k = 1; k < N - 1; ++k) {
                if (!visited[j][k] && board[j][k] == '.' && board[j + chk[i].first][k + chk[i].second] == 'X')
                    bfs(j, k, i);
            }
        }
    }

    cout << res;
    return 0;
}*/