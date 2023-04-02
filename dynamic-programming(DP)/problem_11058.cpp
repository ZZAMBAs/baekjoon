/*
//
// Created by AppDeveloper on 2022-10-23. 재시도: 2023-01-17
// https://kibbomi.tistory.com/96 단순 1차원 배열로 규칙을 찾아내어 풀 수 있다.
#include <iostream>

using namespace std;

typedef long long ll;

int N; 
pair<ll, ll> dp[101]; // {num, clipBoard }

pair<ll, ll> fdp(int n){
    if (dp[n].first)
        return dp[n];
    
    dp[n] = {n, 0};
    for (int i = n - 1; i > 0; --i) {
        int j = i;
        pair<ll, ll> jVal = fdp(j);
        pair<ll, ll> temp;
        while (j != n){
            if (j + 3 <= n){
                jVal.second = jVal.first;
                jVal.first *= 2;
                j += 3;
            }
            else
                for (int k = 0; k < n - j; ++k) {
                    jVal.first += jVal.second;
                    j++;
                }
                
        }
        dp[n] = max(dp[n], jVal);
    }
    return dp[n];
}

int main(){
    cin >> N;
    for (int i = 0; i <= 5; ++i)
        dp[i] = {i, 0};
    cout << fdp(N).first;
    return 0;
}
*/
