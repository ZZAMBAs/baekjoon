/*
//
// Created by AppDeveloper on 2022-12-09.
// https://gmlwjd9405.github.io/2018/08/28/algorithm-mst.html
// 시간복잡도: Prim - O(ElogV), Kruskal - O(ElogE)
#include <iostream>
#include <queue>

using namespace std;

int V, E, memory, B, cost, K;
vector<vector<pair<int, int>>> adv(10001);
bool visited[10001];

int mstSearching(int s){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> q;
    for (pair<int, int> p : adv[s])
        q.push(p);
    visited[s] = true;
    int num = 1, sum = 0;
    while (num != V){
        pair<int, int> top = q.top();
        q.pop();
        if (!visited[top.second]){
            visited[top.second] = true;
            num++;
            sum += top.first;
            for (pair<int, int> a : adv[top.second]) {
                if (!visited[a.second])
                    q.push(a);
            }
        }
    }
    return sum;
}

int main(){
    cin >> V >> E;
    for (int i = 0; i < E; ++i) {
        cin >> memory >> B >> cost;
        adv[memory].emplace_back(cost, B);
        adv[B].emplace_back(cost, memory);
    }

    cout << mstSearching(1);
    return 0;
}*/
