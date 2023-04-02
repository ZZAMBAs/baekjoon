/*
//
// Created by AppDeveloper on 2022-11-28.
// https://cryptosalamander.tistory.com/59.
// 내 코드는 0이 들어있는 칸마다 후보를 선정하는데, 그냥 1-9 까지 넣고 검사를 수행하는 것이 더 낫다.
#include <iostream>
#include <vector>

using namespace std;

int board[9][9];
vector<vector<vector<int>>> cand(9);
vector<pair<int, int>> blank;
bool isCand[10];

void inspect(int i, int j, int centerRow, int centerCol){
    fill(isCand + 1, isCand + 10, true);
    for (int k = 0; k < 9; ++k) { // 가로
        if (k == j)
            continue;
        isCand[board[i][k]] = false;
    }
    for (int k = 0; k < 9; ++k) { // 세로
        if (k == i)
            continue;
        isCand[board[k][j]] = false;
    }
    for (int k = centerRow - 1; k <= centerRow + 1; ++k) { // 3 x 3
        for (int l = centerCol - 1; l <= centerCol + 1; ++l) {
            if (k == i && l == j)
                continue;
            isCand[board[k][l]] = false;
        }
    }
}

bool dfs(int idx, int end){
    if (idx == end)
        return true;

    pair<int, int> cur = blank[idx];
    for (int c : cand[cur.first][cur.second]) {
        board[cur.first][cur.second] = c;

        for (int i = 1; i <= 7; i += 3)
            for (int j = 1; j <= 7; j += 3)
                if (cur.first >= i - 1 && cur.first <= i + 1 && cur.second >= j - 1 && cur.second <= j + 1) {
                    inspect(cur.first, cur.second, i, j);
                    if (isCand[c]) {
                        if (dfs(idx + 1, end))
                            return true;
                    }
                    break;
                }
    }
    board[cur.first][cur.second] = 0;
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 9; ++i)
        cand[i].resize(9);
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 0)
                blank.emplace_back(i, j);
        }
    }
    for (pair<int, int> b : blank)
        for (int i = 1; i <= 7; i += 3)
            for (int j = 1; j <= 7; j += 3)
                if (b.first >= i - 1 && b.first <= i + 1 && b.second >= j - 1 && b.second <= j + 1) {
                    inspect(b.first, b.second, i, j);
                    for (int k = 1; k <= 9; ++k)
                        if (isCand[k])
                            cand[b.first][b.second].emplace_back(k);
                }


    bfs(0, blank.size());
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}*/
