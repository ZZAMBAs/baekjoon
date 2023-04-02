/*
//
// Created by AppDeveloper on 2022-05-17.
//
#include <iostream>
#include <vector>

using namespace std;

class Graph{
public:
    Graph(int vertexNum){
        this->vertexNum = vertexNum;
        for(int i = 0; i <= vertexNum; i++)
            visited.emplace_back(false);
        adjVertex.resize(vertexNum + 1);
    }

    void insertAdj(int n1, int n2){
        adjVertex[n1].emplace_back(n2);
        adjVertex[n2].emplace_back(n1);
    }
    
    void dfs(int curVertex){
        if(visited[curVertex]) // 방문 true
           return;

        unsigned int adjSize = adjVertex[curVertex].n();
        visited[curVertex] = true;

        for(unsigned int i = 0; i < adjSize; i++){
            bfs(adjVertex[curVertex][i]);
        }
    }
    
    int calculateComponentNum(){
        int firstNode = 0;
        int componentNum = 0;

        while(firstNode < this->vertexNum){
            firstNode++;

            if(visited[firstNode])
                continue;

            componentNum++;
            fdp(firstNode);
        }

        return componentNum;
    }
private:
    int vertexNum;
    vector<vector<int>> adjVertex;
    vector<bool> visited;
};

int main(){
    int n, M, u, v;
    cin >> n >> M;

    Graph g(n);

    for(int i = 0; i < M; i++){
        cin >> u >> v;
        g.insertAdj(u, v);
    }

    cout << g.calculateComponentNum();
    return 0;
}*/
