/*
//
// Created by cho on 23. 1. 11.
// 사실 각 벡터의 방향을 기록해 놓으면 맵도 필요 없음.
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int N, x, y, d, g, res, dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
map<pair<int, int>, pair<int, int>> m;
bool board[101][101];

bool boardChecking(int r, int c){
    if (board[r][c] && board[r + 1][c] && board[r][c + 1] && board[r + 1][c + 1])
        return true;
    return false;
}

void makeDragonCurve(){
    vector<pair<int, int>> v;
    v.emplace_back(x, y);
    v.emplace_back(x + dx[d], y + dy[d]);
    for (int i = 0; i < g; ++i) {
        int vSize = v.size();
        for (int j = vSize - 1; j > 0; --j) {
            pair<int, int> end = v[j];
            pair<int, int> cmp = v[j - 1];
            pair<int, int> next = m[{end.first - cmp.first, end.second - cmp.second}];
            v.emplace_back((v.end() - 1)->first + next.first, (v.end() - 1)->second + next.second);
        }
    }

    for (pair<int, int> vec : v)
        board[vec.first][vec.second] = true;
}

int main(){
    cin >> N;
    m[{0, -1}] = {-1, 0};
    m[{0, 1}] = {1, 0};
    m[{1, 0}] = {0, -1};
    m[{-1, 0}] = {0, 1};
    for (int i = 0; i < N; ++i) {
        cin >> x >> y >> d >> g;
        makeDragonCurve();
    }
    for (int i = 0; i < 100; ++i)
        for (int j = 0; j < 100; ++j)
            if (boardChecking(i, j))
                res++;

    cout << res;
    return 0;
}*/
