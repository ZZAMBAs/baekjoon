/*
//
// Created by AppDeveloper on 2022-12-17.
// lg n의 풀이를 위해서는 이분탐색, 분할정복(DFS가 아닌) 등을 이용하도록 하자.
// 짧은 풀이: https://www.acmicpc.net/source/51651814
#include <iostream>

using namespace std;
typedef unsigned long long ll;

ll a, b, n;

ll divideAndConquer(int num){
    if (num == 0)
        return 1;

    if (num == 1)
        return 147483634;

    if (num % 2 == 0) {
        ll temp = divideAndConquer(num / 2);
        return temp * temp % 1000000007;
    }
    else {
        ll temp = divideAndConquer((num - 1) / 2);
        return (temp * temp % 1000000007) * 147483634 % 1000000007;
    }
}

int main(){
    cin >> a >> b >> n;
    cout << divideAndConquer(n - 1);
    return 0;
}*/
