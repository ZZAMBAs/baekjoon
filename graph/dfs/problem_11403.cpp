/*
//
// Created by AppDeveloper on 2022-05-20.
//
#include <iostream>

using namespace std;

class graph{
public:
    graph(int vertexNum){
        this->vertexNum = vertexNum;
    }

    void isVisitedReset() {
        for(int i = 0; i < vertexNum; i++){
            isVisited[i] = 0;
        }
    }

    void dfs(int vertex, bool isFirst){
        if(isVisited[vertex])
            return;

        if(!isFirst)
            isVisited[vertex] = 1;

        for (int k = 0; k < vertexNum; ++k) {
            if(adjMat[vertex][k] == 1)
                bfs(k, false);
        }
    }

    void findPath(int i){
        isVisitedReset();
        fdp(i, true);
    }

    int getIsVisitedVertex(int vertex){
        return isVisited[vertex];
    }

    void setAdjMat(int i, int j, int num){
        adjMat[i][j] = num;
    }

private:
    int vertexNum;
    int adjMat[100][100];
    int isVisited[100];
};

int n, num;

int main(){
    cin >> n;
    graph g(n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> num;
            g.setAdjMat(i, j, num);
        }
    }

    for (int i = 0; i < n; ++i) {
        g.findPath(i);
        for (int j = 0; j < n; ++j) {
            cout << g.getIsVisitedVertex(j) << " ";
        }
        cout << "\n";
    }

    return 0;
}*/
