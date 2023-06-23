/*
//
// Created by cho on 23. 6. 23.
// 그리디(우선순위 큐) 말고도 이분 탐색으로 풀이가 가능하다.
// 이분탐색 풀이: https://gusdnr69.tistory.com/277
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    int N, M, L, arr[52], divNum[51], dist[51];
    priority_queue<pair<int, int>> pq; // 거리, 시작인덱스
    fill(divNum, divNum + 51, 0);

    cin >> N >> M >> L;
    arr[0] = 0; arr[1] = L;
    for (int i = 2; i <= N + 1; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + N + 2);
    for (int i = 0; i <= N; ++i) {
        pq.emplace(arr[i + 1] - arr[i], i);
        dist[i] = arr[i + 1] - arr[i];
    }
    while (M-- > 0){
        int nowIdx = pq.top().second;
        pq.pop();
        int newDist = dist[nowIdx] / (divNum[nowIdx] + 2);
        dist[nowIdx] % (divNum[nowIdx] + 2) ? newDist++ : newDist;
        divNum[nowIdx]++;
        pq.emplace(newDist, nowIdx);
    }
    
    cout << pq.top().first;
    return 0;
}*/
