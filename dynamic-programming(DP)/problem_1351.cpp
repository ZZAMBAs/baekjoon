/*
//
// Created by AppDeveloper on 2022-11-03.
//
#include <iostream>
#include <map>

using namespace std;

typedef unsigned long long ll;

ll N, P, Q;
map<ll, ll> m;

ll num(ll n){
    const map<ll, ll>::iterator &iterator = m.find(n);
    if (iterator != m.end())
        return m[n];

    ll team = num(n / P) + num(n / Q);
    m[n] = team;
    return team;
}

int main(){
    cin >> N >> P >> Q;
    m[0] = 1;
    cout << num(N);
    return 0;
}*/
