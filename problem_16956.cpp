/*
//
// Created by cho on 23. 5. 31.
//
#include <iostream>

using namespace std;

int R, C, dr[4] = {1, 0 , -1, 0}, dc[4] = {0, 1, 0, -1};
char arr[500][500];
bool sw = true;

int main(){
    cin >> R >> C;
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if (arr[i][j] == 'W'){
                for (int k = 0; k < 4; ++k) {
                    int nextR = i + dr[k];
                    int nextC = j + dc[k];
                    if (nextR >= 0 && nextR < R && nextC >= 0 && nextC < C){
                        if (arr[nextR][nextC] == 'S')
                            sw = false;
                        if (arr[nextR][nextC] == '.')
                            arr[nextR][nextC] = 'D';
                    }
                }
            }
        }
    }

    if (!sw)
        cout << 0;
    else{
        cout << 1 << "\n";
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                cout << arr[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}*/
