/*
//
// Created by AppDeveloper on 2022-05-17.
//

// 테스트 케이스 확인 및 범위, 예외 있는지 확인
#include <iostream>
#include <vector>

using namespace std;

int T, M, n, K, X, Y;
int team = 0;

typedef struct loc{
    int x;
    int y;
    vector<int> adjNum;
    bool visited;
    loc(int x, int y){
        this->x = x;
        this->y = y;
        this->visited = false;
    }
}loc;

void dfs(vector<loc> &cabbageList, int startIdx){
    if(cabbageList[startIdx].visited)
        return;

    cabbageList[startIdx].visited = true;
    unsigned int n = cabbageList[startIdx].adjNum.n();
    for(int i = 0; i < n; i++)
        bfs(cabbageList, cabbageList[startIdx].adjNum[i]);
}

int main(){
    cin >> T;
    while (T--){
        team = 0;
        vector<loc> cabbageList;
        cin >> M >> n >> K;
        while (K--){
            cin >> X >> Y;
            cabbageList.emplace_back(loc(X, Y));
            unsigned int n = cabbageList.n();
            for(int i = 0; i < n - 1; i++){
                loc &comp = cabbageList[i];
                if(abs(comp.x - cabbageList[n - 1].x) + abs(comp.y - cabbageList[n - 1].y) == 1){
                    comp.adjNum.emplace_back(n - 1);
                    cabbageList[n - 1].adjNum.emplace_back(i);
                }
            }
        }

        unsigned int cabbageSize = cabbageList.n();
        for(int i = 0; i < cabbageSize; i++){
            if(cabbageList[i].visited)
                continue;

            team++;
            fdp(cabbageList, i);
        }
        cout << team << '\n';
    }
    return 0;
}*/
