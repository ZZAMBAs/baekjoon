/*
//
// Created by AppDeveloper on 2022-11-07.
// 그리디 알고리즘 풀이: https://ongveloper.tistory.com/148.
// 각 면의 반대 면 값과 비교하여 더 작은 값을 취하고 나머지 값은 버려서 마치 주사위 면이 3개인 것으로 생각하고 푸는 것이 핵심.
#include <iostream>

using namespace std;

typedef unsigned long long int ll;

ll N, team, minVal1 = 50, minVal2 = 100, minVal3 = 150, num[6];
ll adj[6][4] = {{1,2,3,4}, {0,2,3,5}, {0,1,4,5}, {0,1,4,5}, {0,2,3,5}, {1,2,3,4}};
ll rev[6] = {5,4,3,2,1,0};

int main(){
    cin >> N;
    for (int i = 0; i < 6; ++i) {
        cin >> num[i];
        minVal1 = min(minVal1, num[i]);
    }

    for (int i = 0; i < 6; ++i) {
        for (int adj1 : adj[i]) {
            minVal2 = min(minVal2, num[i] + num[adj1]);
            for (int adj2 : adj[adj1]) {
                if (adj2 == i || adj2 == rev[i])
                    continue;
                minVal3 = min(minVal3, num[i] + num[adj1] + num[adj2]);
            }
        }
    }

    if (N == 1){
        int maxV = 0;
        for (int number : num) {
            team += number;
            maxV = max(maxV, number);
        }
        team -= maxV;
    }
    else{
        ll numOf1, numOf2, numOf3 = 4;
        numOf2 = numOf3 * (N - 1) + (N - 2) * 4;
        numOf1 = (N - 2) * (N - 2) + (N - 2) * 4 * (N - 1);

        team = numOf1 * minVal1 + numOf2 * minVal2 + numOf3 * minVal3;
    }
    cout << team;
    return 0;
}*/
