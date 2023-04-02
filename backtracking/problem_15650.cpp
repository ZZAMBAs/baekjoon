/*
//
// Created by AppDeveloper on 2022-08-17.
//
#include <iostream>
#include <vector>

using namespace std;

int n, M;


void dfs(vector<int> numbers, int cnt){
    if (cnt == M) {
        for (int number : numbers)
            cout << number << " ";
        cout << "\n";
        return;
    }

    for (int i = *(numbers.end() - 1) + 1; i <= n; ++i) {
        numbers.emplace_back(i);
        dfs(numbers, cnt + 1);
        numbers.erase(numbers.end() - 1);
    }
}

int main(){
    vector<int> numbers;
    cin >> n >> M;

    for (int i = 1; i <= n - M + 1; ++i) {
        numbers.emplace_back(i);
        bfs(numbers, 1);
        numbers.erase(numbers.begin());
    }

}*/
