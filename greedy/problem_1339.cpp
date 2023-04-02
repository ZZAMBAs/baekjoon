/*
//
// Created by cho on 22. 12. 31.
// 풀이: https://imnotabear.tistory.com/85
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int N, K, aToN[26], cnt, insNum = 9, board[26][8];
string numStrings[10];
bool visited[26];
priority_queue<pair<int, int>, vector<pair<int, int>>, less<>> convert;

int toInt(string s){
    int ret = 0;
    int sSize = s.size();
    for (int i = 0; i < sSize; ++i) {
        ret *= 10;
        ret += aToN[s[i] - 65];
    }
    return ret;
}

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> numStrings[i];
        string &curString = numStrings[i];
        int size = curString.size();
        for (int j = 0; j < size; ++j)
            board[curString[j] - 65][size - j - 1]++;
    }

    for (int i = 0; i < 26; ++i) {
        int convNum = 0;
        for (int j = 7; j >= 0; --j) {
            convNum *= 10;
            convNum += board[i][j];
        }
        if (convNum)
            convert.emplace(convNum, i);
    }

    while (!convert.empty()){
        aToN[convert.top().second] = insNum--;
        convert.pop();
    }

    for (int i = 0; i < N; ++i)
        K += toInt(numStrings[i]);

    cout << K;
    return 0;
}*/
