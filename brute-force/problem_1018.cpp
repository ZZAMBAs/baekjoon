/*
//
// Created by AppDeveloper on 2022-05-16.
//
#include <iostream>

using namespace std;

int n, M;
int team = 64;
char sol1[8][8], sol2[8][8], cmd;
char insert[50][50];

void calRes(int x, int y){
    int cal1 = 0; // sol1 과의 비교용
    int cal2 = 0; // sol2 와의 비교용
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            char insVal = insert[x + i][y + j];
            if(insVal != sol1[i][j])
                cal1++;
            if(insVal != sol2[i][j])
                cal2++;
        }
    }

    if(cal1 < team)
        team = cal1;
    if(cal2 < team)
        team = cal2;
}

int main(){
    for(int i = 0; i < 8; i += 2){
        for(int j = 0; j < 8; j++){
            if(i % 2 == 0){
                if(j % 2 == 0){
                    sol1[i][j] = 'W';
                    sol2[i][j] = 'B';
                }
                else{
                    sol1[i][j] = 'B';
                    sol2[i][j] = 'W';
                }

                if(i == 6 && j == 7)
                    i = -1;
            }
            else{
                if(j % 2 == 0){
                    sol2[i][j] = 'W';
                    sol1[i][j] = 'B';
                }
                else{
                    sol2[i][j] = 'B';
                    sol1[i][j] = 'W';
                }
            }
        }
    }
    // 정답 만듦.

    cin >> n >> M;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < M; j++) {
            cin >> cmd;
            insert[i][j] = cmd;
        }
    }
    
    for(int i = 0; i <= n - 8; i++){
        for(int j = 0; j <= M - 8; j++){
            calRes(i, j);
        }
    }

    cout << team;
    return 0;
}
*/
