/*
//
// Created by AppDeveloper on 2022-07-10.
//
// 벨만 포드 개념 기초. 음수 가중치를 포함한 최단 거리 알고리즘.
// long long 의 이유: https://www.acmicpc.net/board/view/55270
#include <iostream>
#include <vector>

using namespace std;

const long long INF = 9223372036854775807L;
int n, M, memory, B, cost;
bool isCycle = false;
vector<long long> deadEnd(501, INF);
vector<vector<pair<int, int>>> adjCity(501);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> M;
    
    deadEnd[1] = 0;

    for (int i = 0; i < M; ++i) {
        cin >> memory >> B >> cost;
        adjCity[memory].push_back({B, cost});
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (deadEnd[j] == INF)
                continue;

            for (pair<int, int> children : adjCity[j]){
                int adjIdx = children.first;
                long long adjW = children.second;
                long long weightCal = deadEnd[j] + adjW;
                if (weightCal < deadEnd[adjIdx]) {
                    if (i == n && deadEnd[adjIdx] != INF)
                        // N까지 사이클 돌릴 시 모든 정점은 이제 INF가 아니게 된다. 이 때 이런 갱신이 일어나면 음의 사이클이 있는 것.
                        isCycle = true;

                    deadEnd[adjIdx] = weightCal;
                }
            }
        }

    }

    if (deadEnd[1] < 0 || isCycle)
        cout << -1;
    else{
        for (int i = 2; i <= n; ++i) {
            if (deadEnd[i] != INF)
                cout << deadEnd[i] << "\n";
            else
                cout << -1 << "\n";
        }
    }

    return 0;
}*/
