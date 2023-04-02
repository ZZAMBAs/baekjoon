/*
//
// Created by AppDeveloper on 2022-11-23.
//
#include <iostream>
#include <vector>
#define plus 1
#define minus 2
#define space 3

using namespace std;

int T, N;
vector<string> K;

void dfs(int n, string stored){
    if (n == N){
        int size = stored.size(), sum = 0, preOp = plus, curV = 0;
        for (int i = 0; i < size; ++i) {
            if (stored[i] > '0' && stored[i] <= '9'){
                curV += stored[i] - 48;
            }
            else if (stored[i] == '+' || stored[i] == '-'){
                sum = sum + (preOp == plus ? curV : -curV);
                curV = 0;
                preOp = (stored[i] == '+' ? plus : minus);
            }
            else{
                curV = curV * 10 + (stored[i++ + 1] - 48);
            }
        }
        sum = sum + (preOp == 1 ? curV : -curV);
        if (!sum)
            K.emplace_back(stored);
        return;
    }

    dfs(n + 1, stored + " " + (char)(n + 1 + 48));
    dfs(n + 1, stored + "+" + (char)(n + 1 + 48));
    dfs(n + 1, stored + "-" + (char)(n + 1 + 48));
}

// " ", "+", "-" 순서
int main(){
    cin >> T;
    while (T--){
        K.clear();
        cin >> N;
        bfs(1, "1");
        for (string r : K) {
            cout << r << "\n";
        }
        cout << "\n";
    }

    return 0;
}*/
