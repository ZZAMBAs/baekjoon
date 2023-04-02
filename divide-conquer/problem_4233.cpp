/*
//
// Created by AppDeveloper on 2022-12-21.
// 특정 숫자 소수 판정의 가장 빠른 방법은 sqrt(숫자) 까지 보는 것. https://jm-park.github.io/algorithm/2018/08/06/Prime-Number(%EC%86%8C%EC%88%98)-%ED%8C%90%EB%B3%84%EB%B2%95-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98.html
// 분할 정복을 이용한 거듭제곱은 거듭제곱의 특성으로 시간이 lgn으로 단축된다.
// https://nahwasa.com/entry/%EB%B6%84%ED%95%A0-%EC%A0%95%EB%B3%B5%EC%9D%84-%EC%9D%B4%EC%9A%A9%ED%95%9C-%EA%B1%B0%EB%93%AD%EC%A0%9C%EA%B3%B1-%EC%B5%9C%EC%A0%81%ED%99%94
#include <iostream>
#include <cmath>

using namespace std;
typedef unsigned long long ll;

bool isPrime(ll num){
    if (num == 2 || num == 3)
        return true;

    int line = (int)sqrt(num);
    for (int i = 2; i <= line; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

ll cal(ll sqr, ll a, ll d){ // a^p mod p 계산
    if (sqr == 1)
        return a;

    if (sqr % 2) {
        ll temp = cal((sqr - 1) / 2, a, d) % d;
        return (temp * temp % d * a) % d;
    }
    ll temp = cal(sqr / 2, a, d) % d;
    return temp * temp % d;
}

int main(){
    ll p, a;
    cin >> p >> a;
    while (p != 0 && a != 0){
        bool isYes = false;
        if (!isPrime(p)){
            if (a == cal(p, a, p))
                isYes = true;
        }
        cout << (isYes ? "yes\n" : "no\n");
        cin >> p >> a;
    }

    return 0;
}*/
