/*
//
// Created by AppDeveloper on 2022-06-16.
// 반례 주의: 부모는 자식을 여러개 가질 수 있다. (꼭 2개가 아님)
// 아래 풀이는 사이클이 없음을 가정한 풀이임. 간선 개수 n - 1 개로 풀 수도 있다.
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m, a, b, caseNum = 0;

class graph{
public:
    graph(int verticesNum){
        adjVertices.resize(verticesNum + 1);
        visited.resize(verticesNum + 1, false);
        parent.resize(verticesNum + 1, 0);
        this->verticesNum = verticesNum;
    }

    void setEdge(int v1, int v2){
        adjVertices[v1].emplace_back(v2);
        adjVertices[v2].emplace_back(v1);
    }

    int treeNum() {
        int treeNum = 0;

        for (int i = 1; i <= verticesNum; ++i) {
            if (visited[i])
                continue;

            queue<int> q;
            int front = 0;
            int prev = 0;
            bool isTree = true;
            int qSize = 1;
            q.push(i);
            visited[i] = true;

            while (qSize) {
                for (int j = 0; j < qSize; ++j) {
                    front = q.front();
                    q.pop();

                    for (int children: adjVertices[front]) {
                        if (children == parent[front])
                            continue;
                        if (visited[children]) {
                            isTree = false;
                            continue;
                        }
                        parent[children] = front;
                        visited[children] = true;
                        q.push(children);
                    }

                }
                qSize = q.size();
            }

            if (isTree)
                treeNum++;
        }

        return treeNum;
    }

private:
    vector<vector<int>> adjVertices; // index 0은 무시
    vector<bool> visited;
    vector<int> parent;
    int verticesNum;
};

int main(){
    while (++caseNum) {
        scanf("%d %d", &n, &m);

        if (n == 0 && m == 0)
            break;

        graph g(n);

        for (int i = 0; i < m; ++i) {
            scanf("%d %d", &a, &b);
            g.setEdge(a, b);
        }

        printf("Case %d: ", caseNum);
        int treeNum = g.treeNum();
        if (!treeNum)
            printf("No trees.\n");
        else if (treeNum == 1)
            printf("There is one tree.\n");
        else
            printf("memory forest of %d trees.\n", treeNum);
    }

    return 0;
}*/
