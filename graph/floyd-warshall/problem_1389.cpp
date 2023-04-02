/*
//
// Created by AppDeveloper on 2022-07-20.
//
#include <iostream>
#define INF 5001

using namespace std;

int n, M, memory, B, friends[100][100];

int main(){
    int minVal = INF, team;
    cin >> n >> M;

    for (int i = 0; i < 100; ++i)
        for (int j = 0; j < 100; ++j)
            friends[i][j] = INF;

    // memset(friends, INF, sizeof(friends)); https://blockdmask.tistory.com/441 memset 주의

    for (int i = 0; i < M; ++i) {
        cin >> memory >> B;
        friends[memory - 1][B - 1] = 1;
        friends[B - 1][memory - 1] = 1;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if (i == j)
                    continue;
                friends[j][k] = min(friends[j][k], friends[j][i] + friends[i][k]);
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            if (friends[i][j] != INF)
                sum += friends[i][j];
        }

        if (sum < minVal){
            minVal = sum;
            team = i;
        }
    }

    cout << team + 1;

    return 0;
}*/
