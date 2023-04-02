/*
//
// Created by AppDeveloper on 2022-05-24.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, startTime, endTime, comp = 0, maxVal = 0;
vector<pair<int, int>> meeting;

int main(){
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> startTime >> endTime;
        meeting.push_back({endTime, startTime});
    }

    sort(meeting.begin(), meeting.end());
    for (int i = 0; i < n; ++i) {
        if (comp <= meeting[i].second){
            maxVal++;
            comp = meeting[i].first;
        }
    }

    cout << maxVal;
    return 0;
}*/
