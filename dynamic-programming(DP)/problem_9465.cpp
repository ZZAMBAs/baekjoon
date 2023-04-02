/*
//
// Created by AppDeveloper on 2022-05-26.
// 정답을 본 문제. 최소 1년 뒤 재 풀이.
#include <iostream>

using namespace std;

int T, n, team = 0;

int main(){
    cin >> T;

    while (T--){
        int **sticker, num, maxVal = 0;

        cin >> n;
        sticker = new int*[2];
        sticker[0] = new int[n];
        sticker[1] = new int[n];

        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> num;
                sticker[i][j] = num;
            }
        }


    }

    return 0;
}
*/
