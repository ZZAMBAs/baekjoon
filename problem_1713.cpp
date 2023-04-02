/*
//
// Created by cho on 23. 3. 6.
//
#include <iostream>
#include <tuple>
#include <algorithm>

using namespace std;

int N, likes, who;
vector<pair<pair<int, int>, int>> f; // {추천 수, 게시 날짜, 학생 번호}

int main(){
    cin >> N >> likes;
    for (int i = 0; i < likes; ++i) {
        bool sw = false;
        cin >> who;
        for (int j = 0; j < f.size(); ++j)
            if (f[j].second == who){
                sw = true;
                f[j].first.first++;
                break;
            }
        if (!sw) {
            if (f.size() == N){
                sort(f.begin(), f.end(), greater());
                f.pop_back();
            }
            f.push_back({ {1, i}, who});
        }
    }
    vector<int> num;
    for (int i = 0; i < f.size(); ++i)
        num.push_back(f[i].second);
    sort(num.begin(), num.end());

    for (int i : num)
        cout << i << " ";
    return 0;
}*/
