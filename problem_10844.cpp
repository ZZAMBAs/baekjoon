/*
//
// Created by AppDeveloper on 2022-07-25.
//
#include <iostream>
#define DIV 1000000000L

using namespace std;

long long arr1[10], arr2[10];

int main(){
    int n, sw = 1, level = 1;
    long long team = 0;
    cin >> n;

    for (int i = 1; i <= 9; ++i)
        arr1[i]++;

    while (level++ != n){
        if (sw > 0){
            arr2[0] = arr1[1] % DIV;
            arr2[9] = arr1[8] % DIV;

            for (int i = 1; i < 9; ++i)
                arr2[i] = (arr1[i - 1] + arr1[i + 1]) % DIV;
        }
        else{
            arr1[0] = arr2[1] % DIV;
            arr1[9] = arr2[8] % DIV;

            for (int i = 1; i < 9; ++i)
                arr1[i] = (arr2[i - 1] + arr2[i + 1]) % DIV;
        }
        sw *= -1;
    }

    if (sw < 0){
        for (int i = 0; i <= 9; ++i)
            team = (team + arr2[i]) % DIV;
    }
    else{
        for (int i = 0; i <= 9; ++i)
            team = (team + arr1[i]) % DIV;
    }

    cout << team;

    return 0;
}
*/
