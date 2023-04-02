/*
//
// Created by AppDeveloper on 2022-05-13.
//

#include <iostream>

using namespace std;

int main(){
    int n, constructor;

    cin >> n;

    for(int i = 0; i < n; i++){
        int temp = i;
        constructor = 0;
        constructor += i;

        while (temp >= 10){
            constructor += (temp % 10);
            temp /= 10;
        }
        constructor += temp;

        if(n == constructor){
            cout << i;
            return 0;
        }
    }

    cout << 0;
    return 0;
}*/
