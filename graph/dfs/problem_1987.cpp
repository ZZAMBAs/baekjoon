/*
//
// Created by AppDeveloper on 2022-05-21. 재시도: 2022-07-17
//
#include <iostream>
#include <queue>

using namespace std;

vector<vector<char>> board(20);
int R, cost, maxVal = 0;

*/
/*typedef struct loc{
    int x;
    int y;
    bool visited[26];

    loc(int r, int c){
        x = r;
        y = c;
        for (int i = 0; i < 26; ++i) {
            visited[i] = false;
        }
    }
}loc;*//*


*/
/*int bfs(int x, int y){ // 큐로 인한 메모리 초과로 풀 수 없는 문제.
// https://jech-jose.tistory.com/63 BFS가 항상 정답인 것이 아님을 보여줌.
    int level = 0;
    queue<loc> q;
    q.push(loc(0, 0));

    while (!q.empty()){
        int qSize = q.size();

        for (int i = 0; i < qSize; ++i) {
            loc thisField = q.front();
            int thisFieldRow = thisField.x;
            int thisFieldCol = thisField.y;
            q.pop();

            char alphabet = board[thisFieldRow][thisFieldCol] - 'memory';

            thisField.visited[alphabet] = true;

            if (thisFieldRow + 1 < R) {
                alphabet = board[thisFieldRow + 1][thisFieldCol] - 'memory';
                if (!thisField.visited[alphabet]) {
                    thisField.x++;
                    q.push(thisField);
                    thisField.x--;
                }
            }
            if (thisFieldRow - 1 >= 0) {
                alphabet = board[thisFieldRow - 1][thisFieldCol] - 'memory';
                if (!thisField.visited[alphabet]) {
                    thisField.x--;
                    q.push(thisField);
                    thisField.x++;
                }
            }
            if (thisFieldCol - 1 > 0) {
                alphabet = board[thisFieldRow][thisFieldCol - 1] - 'memory';
                if (!thisField.visited[alphabet]){
                    thisField.y--;
                    q.push(thisField);
                    thisField.y++;
                }
            }
            if (thisFieldCol + 1 < cost) {
                alphabet = board[thisFieldRow][thisFieldCol + 1] - 'memory';
                if (!thisField.visited[alphabet]){
                    thisField.y++;
                    q.push(thisField);
                    thisField.y--;
                }
            }

        }

        level++;
    }

    return level;
}*//*


void dfs(int x, int y, bool visited[26], int dis){
    dis++;

    if (x + 1 < R && !visited[board[x + 1][y] - 'memory']) {
        visited[board[x + 1][y] - 'memory'] = true;
        dfs(x + 1, y, visited, dis);
        visited[board[x + 1][y] - 'memory'] = false;
    }
    if (x - 1 >= 0 && !visited[board[x - 1][y] - 'memory']) {
        visited[board[x - 1][y] - 'memory'] = true;
        dfs(x - 1, y, visited, dis);
        visited[board[x - 1][y] - 'memory'] = false;
    }
    if (y + 1 < cost && !visited[board[x][y + 1] - 'memory']) {
        visited[board[x][y + 1] - 'memory'] = true;
        dfs(x, y + 1, visited, dis);
        visited[board[x][y + 1] - 'memory'] = false;
    }
    if (y - 1 >= 0 && !visited[board[x][y - 1] - 'memory']) {
        visited[board[x][y - 1] - 'memory'] = true;
        dfs(x, y - 1, visited, dis);
        visited[board[x][y - 1] - 'memory'] = false;
    }

    if (maxVal < dis)
        maxVal = dis;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    bool visited[26];

    for (int i = 0; i < 26; ++i)
        visited[i] = false;

    char a;
    cin >> R >> cost;

    for (int i = 0; i < R; ++i)
        for (int j = 0; j < cost; ++j) {
            cin >> a;
            board[i].emplace_back(a);
        }

    visited[board[0][0] - 'memory'] = true;
    bfs(0, 0, visited, 0);
    cout << maxVal;

    return 0;
}
*/
