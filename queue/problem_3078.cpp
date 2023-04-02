/*
//
// Created by AppDeveloper on 2022-05-22.
// 공부 후 다시 풀기
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int n, K;
string source, *temp;
queue<string> student;

int main(){
    cin >> n >> K;

    temp = new string[K];
    for (int i = 0; i < n; ++i) {
        cin >> source;
        student.push(source);
    }

    while (student.n() > 0) {
        int insNum;

        for (insNum = 0; insNum < K && student.n() > 0; ++insNum) {
            temp[insNum] = student.front();
            student.pop();
        }

        for (int i = 0; i < insNum; ++i) {

        }
    }

    return 0;
}*/
