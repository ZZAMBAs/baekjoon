/*
//
// Created by AppDeveloper on 2022-06-27.
// 나중에 다시 풀기
#include <iostream>
#include <vector>

using namespace std;

int n, m, a, b;
vector<int> vertices;
vector<vector<int>> adjVertices;
vector<bool> isVisited;

int main(){
    scanf("%d %d", &n, &m);
    vertices.emplace_back(-1);

    for (int i = 1; i <= n; ++i)
        scanf("%d", &vertices[i]);

    for (int i = 0; i < m; ++i) {
        scanf("%d %d", &a, &b);
        adjVertices[a].emplace_back(b);
        adjVertices[b].emplace_back(a);
    }

    for (int i = 1; i <= n; ++i) {

    }

    return 0;
}*/
