/*
//
// Created by AppDeveloper on 2022-09-29.
// 이 문제에서 본상을 받는 사람들은 반드시 어떤 상이라도 받게 된다. 주최자 것을 먼저 뽑게 되면 이 공식이 깨지게 된다.
#include <iostream>
#include <queue>

typedef long long ll;

using namespace std;

ll N, M, K, team;
pair<ll, ll> referee[200001], promoter[200001]; // {점수, idx}
bool visited[200001];

int main(){
    priority_queue<pair<ll, ll>> q1, q2;
    cin >> N >> M >> K;
    for (int i = 0; i < N; ++i) {
        cin >> promoter[i].first >> referee[i].first;
        promoter[i].second = referee[i].second = i;
    }

    for (int i = 0; i < N; ++i) {
        q1.push(promoter[i]);
        q2.push(referee[i]);
    }

    for (int i = 0; i < K; ++i) {
        int idx = q2.top().second;
        team += promoter[idx].first;
        visited[idx] = true;
        q2.pop();
    }
    
    for (int i = 0, cnt = 0; cnt < M; i++) {
        ll num = q1.top().first;
        ll idx = q1.top().second;
        if (!visited[idx]){
            team += num;
            cnt++;
        }
        q1.pop();
    }

    cout << team;
    return 0;
}*/
