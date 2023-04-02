/*
//
// Created by AppDeveloper on 2022-07-24.
// 메모리와 시간제한을 잘 보고 DFS로 구현할지 BFS로 구현할지 생각한다.
#include <iostream>
#include <queue>

using namespace std;

vector<short> boardX, boardY;

bool canGo(vector<bool> visited){
    queue<int> q;
    q.push(0);

    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int idx = q.front();
            q.pop();
            visited[idx] = true;
            int vSize = visited.size();

            if (abs(boardX[idx] - boardX[vSize - 1]) + abs(boardY[idx] - boardY[vSize - 1]) <= 1000)
                return true;

            for (int j = 1; j < vSize - 1; ++j) {
                if (idx == j)
                    continue;

                int dist = abs(boardX[j] - boardX[idx]) + abs(boardY[j] - boardY[idx]);
                if (dist <= 1000 && !visited[j])
                    q.push(j);
            }
        }
        
    }
    
    return false;
}

int main(){

    short t, n, x, y;
    cin >> t;

    while (t--){
        vector<bool> visited;
        cin >> n;
        boardX.clear();
        boardY.clear();
        for (int i = 0; i < n + 2; ++i) {
            cin >> x >> y;
            boardX.emplace_back(x);
            boardY.emplace_back(y);
            visited.emplace_back(false);
        }

        if (canGo(visited))
            cout << "happy\n";
        else
            cout << "sad\n";
    }

    return 0;
}*/
