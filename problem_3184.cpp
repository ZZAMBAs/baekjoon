/*
//
// Created by AppDeveloper on 2022-07-14.
//
#include <iostream>
#include <queue>

enum {wall = -1 ,sheep = 0, wolf = 1, path = 10, visited = -11};

using namespace std;

int maps[250][250], liveS = 0, liveW = 0, R, cost;
queue<pair<int, int>> location;

void bfs(){
    queue<pair<int, int>> children;

    while (!location.empty()){
        pair<int, int> l = location.front();
        location.pop();
        if (maps[l.first][l.second] == visited)
            continue;

        children.push(l);
        int sheepNum = 0, wolvesNum = 0;

        while (!children.empty()){
            int r = children.front().first;
            int c = children.front().second;
            children.pop();

            if (maps[r][c] == visited)
                continue;

            if (maps[r][c] == wolf)
                wolvesNum++;
            else if (maps[r][c] == sheep)
                sheepNum++;

            maps[r][c] = visited;

            if (r + 1 < R && maps[r + 1][c] >= 0)
                children.push({r + 1, c});
            if (r - 1 >= 0 && maps[r - 1][c] >= 0)
                children.push({r - 1, c});
            if (c + 1 < cost && maps[r][c + 1] >= 0)
                children.push({r, c + 1});
            if (c - 1 >= 0 && maps[r][c - 1] >= 0)
                children.push({r, c - 1});
        }

        if (sheepNum > wolvesNum)
            liveS += sheepNum;
        else
            liveW += wolvesNum;
        
    }
    
}

int main(){
    char c;

    cin >> R >> cost;

    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < cost; ++j) {
            cin >> c;
            switch (c) {
                case 'o':
                    maps[i][j] = sheep;
                    location.push({i, j});
                    break;
                case 'v':
                    maps[i][j] = wolf;
                    location.push({i, j});
                    break;
                case '.':
                    maps[i][j] = path;
                    break;
                case '#':
                    maps[i][j] = wall;
                    break;
            }
        }
    }

    bfs();

    cout << liveS << " " << liveW;

    return 0;
}*/
