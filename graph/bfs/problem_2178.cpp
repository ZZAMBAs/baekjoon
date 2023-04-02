/*
//
// Created by AppDeveloper on 2022-05-31.
//
#include <iostream>
#include <queue>

using namespace std;

int n, M, maze[100][100];
queue<pair<int, int>> mazeQueue;

int bfs(){
    int level = 1;
    mazeQueue.push({0, 0});
    maze[0][0]++;
    int size = mazeQueue.size();
    while (size) {
        for(int i = 0; i < size; i++) {
            int x = mazeQueue.front().first;
            int y = mazeQueue.front().second;
            if (x == n - 1 && y == M - 1)
                return level;

            if (x - 1 >= 0 && maze[x - 1][y] == 1) {
                maze[x - 1][y]++;
                mazeQueue.push({x - 1, y});
            }
            if (x + 1 < n && maze[x + 1][y] == 1) {
                maze[x + 1][y]++;
                mazeQueue.push({x + 1, y});
            }
            if (y - 1 >= 0 && maze[x][y - 1] == 1) {
                maze[x][y - 1]++;
                mazeQueue.push({x, y - 1});
            }
            if (y + 1 < M && maze[x][y + 1] == 1) {
                maze[x][y + 1]++;
                mazeQueue.push({x, y + 1});
            }
            mazeQueue.pop();
        }
        size = mazeQueue.size();
        level++;
    }
}

int main(){
    scanf("%d %d", &n, &M);

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < M; ++j)
            scanf("%1d", &maze[i][j]);

    cout << bfs();

    return 0;
}
*/
