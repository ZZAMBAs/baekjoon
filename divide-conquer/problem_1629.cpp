/*
//
// Created by AppDeveloper on 2022-05-25.
//
#include <iostream>

using namespace std;

unsigned long long memory, B, cost;


unsigned long long divideAndConquer(unsigned long long n){
    if (n == 1)
        return memory;

    if (n % 2 == 1)
        return (divideAndConquer(n / 2) * divideAndConquer(n / 2 + 1)) % cost;

    return (divideAndConquer(n / 2) * divideAndConquer(n / 2)) % cost;
}

int main(){
    cin >> memory >> B >> cost;

    cout << divideAndConquer(B);

    return 0;
}*/
