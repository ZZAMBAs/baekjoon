/*
//
// Created by AppDeveloper on 2022-05-24. 재도전: 2022-07-11
// 시작, 끝 시간을 모두 정렬
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, a, b, team = 0, nowClass = 0;
vector<int> startClass, endClass;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        startClass.emplace_back(a);
        endClass.emplace_back(b);
    }

    sort(startClass.begin(), startClass.end());
    sort(endClass.begin(), endClass.end());

    int e = 0;

    for (int i = 0; i < n; ++i) {
        int start = startClass[i];

        nowClass++;

        while (start >= endClass[e]){
            nowClass--;
            e++;
        }

        if (nowClass > team)
            team = nowClass;
    }

    cout << team;

    return 0;
}*/
