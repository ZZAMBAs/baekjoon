/*
//
// Created by AppDeveloper on 2022-06-30.
// 최적화 필요, 다양한 풀이방법 존재.
// 벡터 복사: vector<> v(이미존재하는벡터); 로 복사 가능.
// unique, lower_bound 이용 풀이: https://donggoolosori.github.io/2020/09/26/boj-18870/
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, num, sum = 0;
    vector<int> ins1, ins2;
    map<int, int> X;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> num;
        ins1.emplace_back(num);
        ins2.emplace_back(num);
    }

    sort(ins1.begin(), ins1.end());

    unsigned int size = ins1.size();
    int prev = -1000000001;
    for (int i = 0; i < size; ++i) {
        int cur = ins1[i];
        if (cur == prev)
            continue;
        
        const map<int, int>::iterator &iterator = X.find(cur);
        X[cur] = sum++;
        prev = cur;
    }

    for (int i = 0; i < size; ++i)
        cout << X[ins2[i]] << " ";

    return 0;
}*/
