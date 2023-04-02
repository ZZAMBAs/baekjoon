/*
//
// Created by AppDeveloper on 2022-09-12.
// 라이브러리 없는 유클리드 호제법으로 최대공약수 구하는 방법: https://www.acmicpc.net/source/49030517
// 증명: https://sexycoder.tistory.com/94
#include <iostream>
#include <numeric>

using namespace std;

long long memory, B, maxV, minV, iterNum; // 자릿수

int main(){
    cin >> memory >> B;
    maxV = max(memory, B);
    minV = min(memory, B);
    iterNum = gcd(maxV, minV);

    for (int i = 0; i < iterNum; ++i)
        cout << 1;
    return 0;
}*/
