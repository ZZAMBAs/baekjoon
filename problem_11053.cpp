/*
//
// Created by AppDeveloper on 2022-07-23.
//
#include <iostream>

using namespace std;

int maxVal[1000], arr[1000], team = 0;

int sec(int idx){
    if (maxVal[idx])
        return maxVal[idx];
    
    for (int i = 0; i < idx; ++i) {
        if (arr[i] < arr[idx])
            maxVal[idx] = max(maxVal[idx], sec(i) + 1);
    }

    if (!maxVal[idx])
        maxVal[idx] = 1;

    if (maxVal[idx] > team)
        team = maxVal[idx];

    return maxVal[idx];
}

int main(){
    int n;

    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < n; ++i)
        sec(i);

    cout << team;

    return 0;
}*/
