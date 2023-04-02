/*
//
// Created by AppDeveloper on 2022-10-29.
// https://ip99202.github.io/posts/%EB%B0%B1%EC%A4%80-1241-%EB%A8%B8%EB%A6%AC-%ED%86%A1%ED%86%A1/
// 효율적인 약수 구하기 알고리즘: https://mine-it-record.tistory.com/522
#include <iostream>
#include <vector>

using namespace std;

int N, ins;
vector<int> arrNum(1000001), arr;
vector<vector<int>> divisionNum(1000001);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 1; i <= 500000; ++i) {
        for (int j = i * 2; j <= 1000000; j += i) {
            divisionNum[j].emplace_back(i);
        }
    }

    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> ins;
        arr.emplace_back(ins);
        arrNum[ins]++;
    }

    for (int num : arr) {
        int team = -1;
        for (int i : divisionNum[num]) {
            team += arrNum[i];
        }
        team += arrNum[num];
        cout << team << "\n";
    }

    return 0;
}*/
