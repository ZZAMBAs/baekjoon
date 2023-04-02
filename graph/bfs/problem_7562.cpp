/*
//
// Created by AppDeveloper on 2022-08-07.
// bfs로만 풀 수 있음.
#include <iostream>
#include <queue>

using namespace std;

int l, knightX, knightY, goalX, goalY;
int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
bool visited[300][300];

void visitedClear();

int bfs(){
    int level = 0;
    queue<pair<int,int>> q;
    q.push({knightX, knightY});

    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int curX = q.front().first;
            int curY = q.front().second;
            q.pop();

            if (visited[curX][curY])
                continue;

            visited[curX][curY] = true;

            if (curX == goalX && curY == goalY)
                return level;

            for (int j = 0; j < 8; ++j) {
                if (curX + dx[j] < 0 || curX + dx[j] >= l || curY + dy[j] < 0 || curY + dy[j] >= l)
                    continue;

                q.push({curX +dx[j], curY + dy[j]});
            }

        }
        level++;
    }

    return -1;
}

int main(){
    int T;
    cin >> T;

    while (T--){
        cin >> l;
        cin >> knightX >> knightY;
        cin >> goalX >> goalY;
        visitedClear();
        cout << bfs() << "\n";
    }

    return 0;
}

void visitedClear() {
    for (int i = 0; i < l; ++i)
        for (int j = 0; j < l; ++j)
            visited[i][j] = false;
}
*/
