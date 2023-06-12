/*
//
// Created by cho on 23. 6. 11.
//
#include <iostream>
#include <queue>

using namespace std;

int N, arr[20][20], sharkSize = 2, biteNum, resTime, sharkRow, sharkCol;
int dr[4] = {-1, 0, 1, 0}, dc[4] = {0, 1, 0, -1};

void bfs(){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> candList;// candList: 상어가 먹을 수 있는 후보 좌표들

    do{
        while (!candList.empty())
            candList.pop();

        int level = 0;
        queue<pair<int, int>> q;
        q.emplace(sharkRow, sharkCol);
        bool visited[20][20], sw = false; // sw: 상어가 먹을 수 있는 것이 나타 났는지 여부
        fill(visited[0], visited[0] + 20 * 20, false);
        visited[sharkRow][sharkCol] = true;

        while (!q.empty() && !sw) {
            int qSize = q.size();
            for (int i = 0; i < qSize; ++i) {
                int curRow = q.front().first;
                int curCol = q.front().second;
                q.pop();

                for (int j = 0; j < 4; ++j) {
                    int nextR = curRow + dr[j];
                    int nextC = curCol + dc[j];
                    if (nextR >= 0 && nextR < N && nextC >= 0 && nextC < N
                        && !visited[nextR][nextC] && arr[nextR][nextC] <= sharkSize) {
                        visited[nextR][nextC] = true;
                        if (arr[nextR][nextC] > 0 && arr[nextR][nextC] < sharkSize) {
                            candList.emplace(nextR, nextC);
                            sw = true;
                            continue;
                        }
                        q.emplace(nextR, nextC);
                    }
                }

            }
            level++;
        }
        if (!candList.empty()){
            resTime += level;
            sharkRow = candList.top().first;
            sharkCol = candList.top().second;
            arr[sharkRow][sharkCol] = 0;
            if(++biteNum == sharkSize){
                sharkSize++;
                biteNum = 0;
            }
        }
    } while (!candList.empty());
    
}

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> arr[i][j];
            if (arr[i][j] == 9){
                sharkRow = i;
                sharkCol = j;
                arr[i][j] = 0;
            }
        }
    }
    bfs();
    
    cout << resTime;
    return 0;
}*/
