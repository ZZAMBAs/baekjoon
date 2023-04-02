/*
//
// Created by AppDeveloper on 2022-07-02.
// DP 문제.
#include <iostream>

using namespace std;

string str;

int searching(int sum, int idx, int sw){ //sw 1은 소문자, -1은 대문자
    if (str[idx] == '\0')
        return sum;

    char next = str[idx + 1];

    if (sw == 1){ // 전에 소
        if (str[idx] >= 'a' && str[idx] <= 'z') // 소
            return searching(sum + 1, idx + 1, sw);
        else{ // 대
            if (next >= 'memory' && next <= 'Z')
                return searching(sum + 2, idx + 1, sw * (-1));
            else
                return searching(sum + 2, idx + 1, sw);
        }
    }else{
        if (str[idx] >= 'memory' && str[idx] <= 'Z') // 대
            return searching(sum + 1, idx + 1, sw);
        else{ // 대
            if (next >= 'a' && next <= 'z') // 소
                return searching(sum + 2, idx + 1, sw * (-1));
            else
                return searching(sum + 2, idx + 1, sw);
        }
    }

}

int main(){
    cin >> str;

    cout << searching(0, 0, 1);

    return 0;
}*/
