/*
//
// Created by cho on 23. 5. 28.
//
#include <iostream>
#include <vector>

using namespace std;

int T, n, m, x, y;
bool res;

void dfs(int idx, int nowColor, int colors[1001], vector<vector<int>> *adj){
    colors[idx] = nowColor;
    nowColor = nowColor % 2 + 1;

    for (int adv : (*adj)[idx]) {
        if (!colors[adv])
            dfs(adv, nowColor, colors, adj);
        else if (colors[adv] != nowColor)
            res = false;
    }
}

int main(){
    cin >> T;
    while (T--){
        int num = 1, colors[1001];
        fill(colors, colors + 1001, 0);
        res = true;
        vector<vector<int>> adj(1001);
        cin >> n >> m;
        for (int i = 0; i < m; ++i) {
            cin >> x >> y;
            adj[x].emplace_back(y);
            adj[y].emplace_back(x);
        }

        for (int i = 1; i <= n; ++i) {
            if (!colors[i])
                dfs(i, num, colors, &adj);
        }
        cout << (res ? "possible" : "impossible") << "\n";
    }

    return 0;
}*/
