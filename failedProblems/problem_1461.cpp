/*
//
// Created by AppDeveloper on 2022-08-07. 재시도 2022-10-06
// 정석적인 그리디 + 정렬 풀이: https://gusdnr69.tistory.com/241 (
#include <iostream>
#include <queue>

using namespace std;


int main(){
    int N, M, source, team = 0;
    priority_queue<int, vector<int>, greater<>> arrP, arrN, temp;
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        cin >> source;
        if (source < 0)
            arrN.push(abs(source));
        else
            arrP.push(source);
    }

    if (arrN.size() > M) {
        int resN = arrN.size() % M;
        for (int i = 0; i < resN; ++i) {
            if (i == resN - 1)
                team += arrN.top() * 2;
            arrN.pop();
        }
    }
    if (arrP.size() > M) {
        int resP = arrP.size() % M;
        for (int i = 0; i < resP; ++i) {
            if (i == resP - 1)
                team += arrP.top() * 2;
            arrP.pop();
        }
    }

    while (!arrP.empty()){
        for (int i = 0; i < M - 1 && arrP.size() != 1; ++i)
            arrP.pop();
        temp.push(arrP.top());
        arrP.pop();
    }
    while (!arrN.empty()){
        for (int i = 0; i < M - 1 && arrN.size() != 1; ++i)
            arrN.pop();
        temp.push(arrN.top());
        arrN.pop();
    }

    int tSize = temp.size();
    for (int i = 0; i < tSize - 1; ++i) {
        team += temp.top() * 2;
        temp.pop();
    }
    team += temp.top();

    cout << team;
    return 0;
}
*/
