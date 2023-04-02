/*
//
// Created by AppDeveloper on 2022-07-03.
// sec 로 푸는 것이 훨씬 효율적.
#include <iostream>

using namespace std;

int divideConquer(int n){
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n == 3) // 1 + 1 + 1, 1 + 2, 2 + 1, 3
        return 4;

    return divideConquer(n - 1) + divideConquer(n - 2) + divideConquer(n - 3);
}

int main(){
    int T, n;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        cin >> n;
        cout << divideConquer(n) << "\n";
    }

    return 0;
}*/
