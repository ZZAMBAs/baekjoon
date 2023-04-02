/*
//
// Created by AppDeveloper on 2022-09-19.
//
#include <iostream>
#include <stack>

using namespace std;

int deadEnd;
bool isPrime[2000001];

bool isPalindrome(int n){
    stack<int> q;
    int temp = n;
    while (temp != 0){
        q.push(temp % 10);
        temp /= 10;
    }
    while (!q.empty()){
        if (q.top() != n % 10)
            return false;
        q.pop();
        n /= 10;
    }
    return true;
}

int main(){
    fill(isPrime + 2, isPrime + 2000001, true);
    cin >> deadEnd;
    for (int i = 2; i < 1000001; ++i)
        for (int j = i * 2; j < 2000001; j = j + i)
            isPrime[j] = false;

    for (int i = deadEnd; i < 2000001; ++i) {
        if (isPrime[i] && isPalindrome(i)){
            cout << i;
            return 0;
        }
    }
    return 0;
}*/
