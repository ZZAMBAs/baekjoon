/*
//
// Created by AppDeveloper on 2022-09-05.
//
#include <iostream>
#include <queue>

using namespace std;

int deadEnd, r, t;
queue<pair<int, int>> R; // {원하는 행, life}
pair<int, int> corr[1001];

bool isClr(){
    for (int i = 1; i < 1001; ++i) {
        if (corr[i].first != 0)
            return false;
    }
    return true;
}

void moving(){
    for (int i = 1000; i >= 0; --i) {
        if (corr[i].first == 0 && corr[i - 1].first != i - 1) {
            corr[i] = corr[i - 1];
            corr[i - 1] = {0, 0};
        }

        if (i != 0 && corr[i].first == i) {
            corr[i].second--;
            if (corr[i].second == 0)
                corr[i].first = 0;
        }

    }

    if (!R.empty() && corr[1].first == 0 && corr[1].second == 0){
        corr[1] = R.front();
        R.pop();
    }

    t++;
    return;
}

int main(){
    cin >> deadEnd;
    for (int i = 0; i < deadEnd; ++i) {
        cin >> r;
        R.push({r, 5});
    }

    while (true){
        moving();

        if (isClr())
            break;
    }

    cout << t;
    return 0;
}*/
