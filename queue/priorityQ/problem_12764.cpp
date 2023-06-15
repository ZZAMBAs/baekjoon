/*
//
// Created by cho on 23. 6. 15.
//
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int N, X, sitCount[100000];
pair<int, int> p[100000];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> timePq; // {끝나는 시간, 자리번호}
priority_queue<int, vector<int>, greater<>> seatPq;

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> p[i].first >> p[i].second;
    }
    sort(p, p + N);
    for (int i = 0; i < N; ++i) {
        int startTime = p[i].first;
        int endTime = p[i].second;

        while (!timePq.empty() && timePq.top().first < startTime){
            seatPq.emplace(timePq.top().second);
            timePq.pop();
        }

        if (!seatPq.empty()){
            int seat = seatPq.top();
            sitCount[seat]++;
            seatPq.pop();
            timePq.emplace(endTime, seat);
        }
        else{
            timePq.emplace(endTime, X);
            sitCount[X]++;
            X++;
        }
        
    }

    cout << X << "\n";
    for (int i = 0; i < N; ++i) {
        if (sitCount[i] == 0)
            break;
        cout << sitCount[i] << " ";
    }
    return 0;
}
*/
