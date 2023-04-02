/*
//
// Created by AppDeveloper on 2022-05-25.
// DP의 탑다운, 바텀 업 방식 둘다 알아둘것.
#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> minVal(1000001, 1000001);

int sec(int n){
    int num;

    if (minVal[n] != 1000001)
        return minVal[n];
    
    if (n % 3 == 0) {
        num = sec(n / 3) + 1;
        minVal[n] = min(minVal[n], num);
    }
    if (n % 2 == 0) {
        num = sec(n / 2) + 1;
        minVal[n] = min(minVal[n], num);
    }
    num = sec(n - 1) + 1;
    minVal[n] = min(minVal[n], num);

    return minVal[n];
}

int main(){
    minVal[0] = minVal[1] = 0;

    scanf("%d", &n);

    printf("%d", sec(n));

    return 0;
}*/
