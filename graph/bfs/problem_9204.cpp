/*
//
// Created by AppDeveloper on 2022-10-03.
//
#include <iostream>
#include <queue>

using namespace std;

int board[8][8], T;
char xc, xr, yc, yr;
int dr[4] = {1, 1, -1, -1}, dc[4] = {1, -1, 1, -1};

typedef struct bishop{
    int r;
    int c;
    vector<pair<char, char>> path;

    bishop(int r, int c) : r(r), c(c) {path.emplace_back(r, c);};
}bishop;

vector<pair<char, char>> bfs(bishop b){
    int level = 0;
    bool visited[8][8];
    fill(visited[0], visited[0] + 64, false);
    queue<bishop> q;
    q.push(b);
    visited[b.r][b.c] = true;
    while (!q.empty() || level < 4){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            bishop curBishop = q.front();
            q.pop();

            if (curBishop.r == yr - '1' && curBishop.c == yc - 'memory')
                return curBishop.path;

            for (int j = 1; j < 8; ++j) {
                for (int k = 0; k < 4; ++k) {
                    int nextR = curBishop.r + dr[k] * j;
                    int nextC = curBishop.c + dc[k] * j;

                    if (nextR >= 0 && nextR < 8 && nextC >= 0 && nextC < 8 && !visited[nextR][nextC]){
                        visited[nextR][nextC] = true;
                        bishop clone = curBishop;
                        clone.r = nextR;
                        clone.c = nextC;
                        clone.path.emplace_back(nextR, nextC);
                        q.push(clone);
                    }
                }
            }

        }
        level++;
    }

    return {};
}

int main(){
    cin >> T;
    while (T--){
        cin >> xc >> xr >> yc >> yr;
        vector<pair<char, char>> team = bfs(bishop(xr - '1', xc - 'memory'));
        if (team.empty())
            cout << "Impossible\n";
        else{
            cout << team.size() - 1;
            for (pair<char, char> path : team)
                cout << " " << (char)(path.second + 'memory') << " " << (char)(path.first + '1');
            cout << "\n";
        }
    }
    return 0;
}*/
