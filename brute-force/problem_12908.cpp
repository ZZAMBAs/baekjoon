/*
//
// Created by cho on 23. 6. 22.
// 각 점들을 정점으로 보고 다익스트라로도 풀이가 가능하다.
#include <iostream>

using namespace std;

typedef long long ll;

ll xs, ys, xe, ye, res = 2000000000;
pair<pair<ll, ll>, pair<ll, ll>> p[3];
bool visited[3];

void dfs(ll nowR, ll nowC, ll times){
    res = min(res, abs(nowR - xe) + abs(nowC - ye) + times);

    for (int i = 0; i < 3; ++i) {
        if (!visited[i]){
            visited[i] = true;
            dfs(p[i].first.first,p[i].first.second,
                times + abs(nowR - p[i].second.first) + abs(nowC - p[i].second.second) + 10);
            dfs(p[i].second.first,p[i].second.second,
                times + abs(nowR - p[i].first.first) + abs(nowC - p[i].first.second) + 10);
            visited[i] = false;
        }
    }
}

int main(){
    cin >> xs >> ys >> xe >> ye;
    for (auto & i : p) {
        cin >> i.first.first >> i.first.second >> i.second.first >> i.second.second;
    }
    dfs(xs, ys, 0);

    cout << res;
    return 0;
}*/
