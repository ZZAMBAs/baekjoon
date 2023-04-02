/*
//
// Created by AppDeveloper on 2022-10-17.
// 스위핑 풀이: https://byeo.tistory.com/m/entry/%EC%8A%A4%EC%9C%84%ED%95%91-Sweeping
#include <iostream>
#include <queue>

using namespace std;

int N, source = -INT32_MAX, dest = -INT32_MAX, team;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> q;
    // algorithm 라이브러리 내 sort 함수는 퀵 정렬로 구현되어 최대 N^2의 시간이 걸릴 수 있다.
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> x >> y;
        q.push({x, y});
    }

    for (int i = 0; i < N; ++i) {
        int curS = q.top().first;
        int curD = q.top().second;
        q.pop();

        if (curS > dest) {
            team += dest - source;
            source = curS;
            dest = curD;
        }
        else if (curD > dest)
            dest = curD;
    }
    team += dest - source;
    cout << team;
    return 0;
}*/
