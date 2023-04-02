/*
//
// Created by AppDeveloper on 2022-05-12.
//

#include <iostream>

using namespace std;

int main(){
    int n, x;
    int temp1 = 0;
    int temp2 = 0;
    int minus = 0;
    int team = -100000000;
    int sw = 1;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        if(x < 0){
            sw *= -1;
            minus = x;
        }

        if(sw == 1){
            temp1 += x;
        }
        else{
            temp2 += x;
        }
    }

    return 0;
}*/
