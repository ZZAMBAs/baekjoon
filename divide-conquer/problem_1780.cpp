/*
//
// Created by AppDeveloper on 2022-05-29.
//
#include <iostream>

using namespace std;

int n;
int paper[2188][2188], paperNum[3];

void divideAndConquer(pair<int, int> startIdx, pair<int, int> endIdx){ // pair 없어도 풀 수 있음
    int escape = 0;
    int divideSize = (endIdx.first - startIdx.first) / 3;
    int firstNum = paper[startIdx.first][startIdx.second];

    for (int i = startIdx.first; i < endIdx.first; ++i) { // 같은 수인지 체크
        for (int j = startIdx.second; j < endIdx.second; ++j) {
            if (firstNum != paper[i][j]) {
                escape = 1;
                break;
            }
        }
        if (escape == 1)
            break;
    }

    if (escape == 0)
        paperNum[firstNum + 1]++;
    else{
        for (int i = 0; i < 3; ++i) {
            for (int j = 1; j <= 3; ++j) {
                divideAndConquer({startIdx.first + divideSize * i, startIdx.second + divideSize * (j - 1)},
                                 {startIdx.first + divideSize * (i + 1), startIdx.second + divideSize * j});
            }
        }
    }

}

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &paper[i][j]);
        }
    }

    divideAndConquer({0, 0}, {n, n});

    for (int i = 0; i < 3; ++i) {
        cout << paperNum[i] << "\n";
    }
    return 0;
}*/
