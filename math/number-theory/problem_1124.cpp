/*
//
// Created by cho on 23. 4. 30.
// dp 없어도 됌.
#include <iostream>
#include <vector>

using namespace std;

int A, B, dp[100001] = {0, 0}, res;
bool prime[100001] = {false, false};
vector<int> v;

int fdp(int num){
    if (dp[num] >= 0)
        return dp[num];

    for (int i = 0; i < v.size(); ++i) {
        if (v[i] > num)
            break;
        if (num % v[i] == 0){
            dp[num] = fdp(num / v[i]) + 1;
            break;
        }
    }

    return dp[num];
}

int main(){
    cin >> A >> B;
    fill(prime + 2, prime + 100001, true);
    fill(dp + 2, dp + 100001, -1);

    for (int i = 2; i < 100001; ++i) {
        for (int j = 2; i >= j * j; ++j) {
            if (i % j == 0){
                prime[i] = false;
                break;
            }
        }
        if (prime[i])
            v.emplace_back(i);
    }

    for (int i = A; i <= B; ++i) {
        if(prime[fdp(i)])
            res++;
    }

    cout << res;
    return 0;
}*/
