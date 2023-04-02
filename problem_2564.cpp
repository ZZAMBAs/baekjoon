/*
//
// Created by AppDeveloper on 2022-08-19.
// 아래 풀이는 bfs 풀이다. 그러나 대부분은 그냥 경로를 1개의 일자 길로 보는 풀이를 하였음.
#include <iostream>
#include <queue>
#define deadEnd 1
#define S 2
#define W 3
#define E 4
// N과 S는 왼쪽서부터, W와 E는 위쪽서부터

using namespace std;

int x, y, n, team;
pair<int, int> storesAndDongguen[101];
bool visited[101][101]; // 100으로 하면 안된다...

void visitedClr(){
    for (int i = 1; i < x; ++i)
        for (int j = 1; j < y; ++j)
            visited[j][i] = true;
    for (int i = 0; i <= x; ++i)
        visited[y][i] = visited[0][i] = false;
    for (int i = 0; i <= y; ++i)
        visited[i][x] = visited[i][0] = false;
}

int bfs(pair<int, int> goal){
    visitedClr();

    int dis = 0;
    queue<pair<int, int>> q;
    q.push(storesAndDongguen[n]);

    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            pair<int, int> cur = q.front();
            q.pop();
            if (visited[cur.first][cur.second])
                continue;
            if (goal.first == cur.first && goal.second == cur.second)
                return dis;

            visited[cur.first][cur.second] = true;

            if (cur.first + 1 <= y && !visited[cur.first + 1][cur.second])
                q.push({cur.first + 1, cur.second});
            if (cur.first - 1 >= 0 && !visited[cur.first - 1][cur.second])
                q.push({cur.first - 1, cur.second});
            if (cur.second + 1 <= x && !visited[cur.first][cur.second + 1])
                q.push({cur.first, cur.second + 1});
            if (cur.second - 1 >= 0 && !visited[cur.first][cur.second - 1])
                q.push({cur.first, cur.second - 1});
        }
        dis++;
    }

    return -1;
}

int main(){
    cin >> x >> y;
    cin >> n;

    for (int i = 0; i < n + 1; ++i) {
        cin >> storesAndDongguen[i].first >> storesAndDongguen[i].second;

        if (storesAndDongguen[i].first == deadEnd)
            storesAndDongguen[i].first = 0;
        else if (storesAndDongguen[i].first == S)
            storesAndDongguen[i].first = y;
        else if (storesAndDongguen[i].first == W) {
            storesAndDongguen[i].first = storesAndDongguen[i].second;
            storesAndDongguen[i].second = 0;
        }
        else{
            storesAndDongguen[i].first = storesAndDongguen[i].second;
            storesAndDongguen[i].second = x;
        }
    }

    for (int i = 0; i < n; ++i)
        team += bfs(storesAndDongguen[i]);
    cout << team;
    return 0;
}*/
