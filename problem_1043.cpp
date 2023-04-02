/*
//
// Created by AppDeveloper on 2022-11-21.
// disjoint-set(union-find) 풀이: https://seokjin2.tistory.com/44
#include <iostream>
#include <queue>

using namespace std;

int N, M, knowPeopleNum, ins, K;
queue<int> trueKnow;
vector<vector<int>> adjParty(51), party(51);
bool partyTrue[51], visited[51];

int main(){
    fill(partyTrue, partyTrue + 51, true);
    cin >> N >> M;
    cin >> knowPeopleNum;
    for (int i = 0; i < knowPeopleNum; ++i) {
        cin >> ins;
        trueKnow.push(ins);
    }
    for (int i = 1; i <= M; ++i) {
        cin >> ins;
        for (int j = 0; j < ins; ++j) {
            int ins2;
            cin >> ins2;
            party[i].emplace_back(ins2);
            adjParty[ins2].emplace_back(i);
        }
    }

    while (!trueKnow.empty()){
        int cur = trueKnow.front();
        trueKnow.pop();
        visited[cur] = true;

        int adjSize = adjParty[cur].size();
        for (int i = 0; i < adjSize; ++i) {
            int adjP = adjParty[cur][i];
            partyTrue[adjP] = false;
            int pSize = party[adjP].size();
            for (int j = 0; j < pSize; ++j) {
                if (!visited[party[adjP][j]])
                    trueKnow.push(party[adjP][j]);
            }
        }
    }
    for (int i = 1; i <= M; ++i)
        K += partyTrue[i] ? 1 : 0;
    cout << K;
    return 0;
}*/
