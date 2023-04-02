/*
//
// Created by AppDeveloper on 2022-09-16.
//
#include <iostream>

using namespace std;

int deadEnd, energy[10], team;
bool visited[10];

void bruteforce(int n, int sum, int callCnt){
    int left = n - 1, right = n + 1;
    while (visited[left])
        left--;
    while (visited[right])
        right++;

    sum += energy[left] * energy[right];
    visited[n] = true;

    for (int i = 1; i < deadEnd - 1; ++i) { // deadEnd
        if (!visited[i]) {
            fdp(i, sum, callCnt + 1);
            visited[i] = false;
        }
    }

    if (callCnt == deadEnd - 2)
        team = max(team, sum);

}

int main(){
    cin >> deadEnd;
    for (int i = 0; i < deadEnd; ++i)
        cin >> energy[i];

    for (int i = 1; i < deadEnd - 1; ++i) { // deadEnd
        for (int j = 0; j < deadEnd; ++j) // deadEnd
            visited[j] = false;
        backtracking(i, 0, 1);
    }

    cout << team;
    return 0;
}*/
