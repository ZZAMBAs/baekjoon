/*
//
// Created by cho on 23. 2. 25.
//
#include <iostream>
#define DIV 1000000007

using namespace std;
typedef long long ll;

ll divideAndConquer(ll n){
    if (n < 1)
        return 1;

    ll num = divideAndConquer(n / 2) % DIV;
    if (!(n % 2))
        return (num * num) % DIV;
    else
        return (num * num * 2) % DIV;
}

int main(){
    ll N;
    cin >> N;
    
    cout << divideAndConquer(N - 1);
    return 0;
}*/
