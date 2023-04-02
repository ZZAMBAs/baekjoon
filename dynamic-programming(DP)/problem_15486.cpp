/*
//
// Created by AppDeveloper on 2022-07-19.
// 내 풀이는 최적화가 되어 있지 않다.
// 풀이들: https://yabmoons.tistory.com/337, https://yabmoons.tistory.com/337
#include <iostream>
#include <vector>

using namespace std;

int n;
vector<pair<int, int>> consult(1500000);
vector<vector<int>> children(1500001); // 이것은 메모리 낭비다.
vector<int> sec(1500001, 0);

int fdp(int idx){
    if (idx == 0)
        return 0;

    if (sec[idx])
        return sec[idx];

    int size = children[idx].size();
    sec[idx] = fdp(idx - 1);
    for (int i = 0; i < size; ++i) {
        int ad = children[idx][i];
        sec[idx] = max(sec[idx], fdp(idx - ad) + consult[idx - ad].second);
    }

    return sec[idx];
}

int main(){
    int t, p;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> t >> p;
        consult[i] = {t, p};
        if (i + t <= n)
            children[i + t].emplace_back(t);
    }

    cout << fdp(n);
    
    return 0;
}*/
