/*
//
// Created by AppDeveloper on 2022-07-26.
//
#include <iostream>

using namespace std;

int arr[999][999];

void printingArr(int n, int findNum){
    // int arr[999][999]; 스택 크기 넘어섬.
    int curR = n / 2, curC = n / 2;
    int num = 1;
    int findX = curR + 1, findY = curC + 1;

    arr[curR][curC] = num++;


    for (int i = 1; i < n; i += 2) {
        curR -= 1;
        for (int j = 0; j <= i; ++j) {
            if (findNum == num){
                findX = curR + 1;
                findY = curC + 1;
            }
            arr[curR][curC] = num++;
            curC++;
        }
        curC--;
        for (int j = 0; j <= i; ++j) {
            curR++;
            if (findNum == num){
                findX = curR + 1;
                findY = curC + 1;
            }
            arr[curR][curC] = num++;
        }
        for (int j = 0; j <= i; ++j) {
            curC--;
            if (findNum == num){
                findX = curR + 1;
                findY = curC + 1;
            }
            arr[curR][curC] = num++;
        }
        for (int j = 0; j <= i; ++j) {
            curR--;
            if (findNum == num){
                findX = curR + 1;
                findY = curC + 1;
            }
            arr[curR][curC] = num++;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    cout << findX << " " << findY;
    return;
}

int main(){
    int n = 0, find = 0;

    cin >> n;
    cin >> find;

    printingArr(n, find);

    return 0;
}
*/
