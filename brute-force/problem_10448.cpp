/*
//
// Created by AppDeveloper on 2022-05-14.
//
#include <iostream>

using namespace std;

int T, K;
int list[45];

int triangleSum(int n){
    return n * (n + 1) / 2;
}

int fdp(int n){
    int sum;

    for(int i = 1; i < 45; i++){
        for(int j = i; j < 45; j++){
            for(int k = j; k < 45; k++){
                sum = list[i] + list[j] + list[k];
                if(sum == n)
                    return 1;
            }
        }
    }

    return 0;
}

int main(){

    list[0] = -1;

    for(int i = 1; i < 45; i++){
        list[i] = triangleSum(i);
    }

    cin >> T;

    while(T--){
        cin >> K;
        cout << searching(K) << "\n";
    }

    return 0;
}*/
