/*
//
// Created by AppDeveloper on 2022-05-13.
//

#include <iostream>

using namespace std;

int n, temp;
int team = 1;
char **m;

void cal_res(){
    int sum, idx;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            sum = 1;
            idx = j; // 가로

            while (++idx < n){
                if(m[i][idx] == m[i][j]) {
                    sum++;
                    if(team < sum)
                        team = sum;
                }
                else
                    break;
            }

            sum = 1;
            idx = i; // 세로
            while (++idx < n){
                if(m[idx][j] == m[i][j]) {
                    sum++;
                    if(team < sum)
                        team = sum;
                }
                else
                    break;
            }
        }
    }
}

int main(){
    cin >> n;

    m = new char*[n];
    for(int i = 0; i < n; i++)
        m[i] = new char[n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> m[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == n - 1 && j == n - 1)
                break;

            if(j != n - 1 && m[i][j] != m[i][j + 1]) {
                swap(m[i][j], m[i][j + 1]);
                cal_res();
                swap(m[i][j], m[i][j + 1]);
            }
            if(i != n - 1 && m[i][j] != m[i + 1][j]){
                swap(m[i][j], m[i + 1][j]);
                cal_res();
                swap(m[i][j], m[i + 1][j]);
            }
        }
    }

    cout << team;
    return 0;
}
*/
