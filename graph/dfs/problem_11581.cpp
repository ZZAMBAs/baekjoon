/*
//
// Created by cho on 23. 4. 25.
// DAG(Directed Acyclic Graph)
#include <iostream>
#include <vector>

using namespace std;

int N, num, nextInter;
vector<vector<int>> adv(101);
bool visited[101] = {false, true, }, sw;

void dfs(int idx){
    if (sw)
        return;
    for (auto adj : adv[idx]) {
        if (visited[adj]){
            sw = true;
            return;
        }
        visited[adj] = true;
        dfs(adj);
        visited[adj] = false;
    }
}

int main(){
    cin >> N;
    for (int i = 1; i < N; ++i) {
        cin >> num;
        for (int j = 0; j < num; ++j) {
            cin >> nextInter;
            adv[i].emplace_back(nextInter);
        }
    }

    dfs(1);

    if (sw)
        cout << "CYCLE";
    else
        cout << "NO CYCLE";
    return 0;
}*/
