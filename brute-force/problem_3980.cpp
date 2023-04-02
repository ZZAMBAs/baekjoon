/*
//
// Created by AppDeveloper on 2022-11-18.
//
#include <iostream>

using namespace std;

int cost, squad[11][11];

int dfs(int idx, int sum, bool visited[11]){
    if (idx == 11)
        return sum;

    int K = 0;
    for (int i = 0; i < 11; ++i) {
        if (squad[idx][i] && !visited[i]) {
            visited[i] = true;
            K = max(K, dfs(idx + 1, sum + squad[idx][i], visited));
            visited[i] = false;
        }
    }
    return K;
}

int main(){
    cin >> cost;
    while (cost--){
        bool visited[11];
        fill(visited, visited + 11, false);
        for (int i = 0; i < 11; ++i)
            for (int j = 0; j < 11; ++j)
                cin >> squad[i][j];
        cout << bfs(0, 0, visited) << "\n";
    }

    return 0;
}*/
