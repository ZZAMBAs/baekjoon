/*
//
// Created by AppDeveloper on 2022-07-31.
//
#include <iostream>
using namespace std;

long long n, numbers[100], sec[100][21];

long long bruteforce(int idx, int sum){
    if (sec[idx][sum] || idx == 0)
        return sec[idx][sum];

    long long v1 = 0, v2 = 0;
    if (sum - numbers[idx] >= 0)
        v1 = backtracking(idx - 1, sum - numbers[idx]);
    if (sum + numbers[idx] <= 20)
        v2 = fdp(idx - 1, sum + numbers[idx]);
    sec[idx][sum] = v1 + v2;
    return sec[idx][sum];
}

int main(){
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> numbers[i];

 */
/*   for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 21; ++j) {
            sec[i][j] = -1;
        }
    }*//*


    sec[0][numbers[0]] = 1L;

    cout << fdp(n - 2, numbers[n - 1]);;

    return 0;
}*/
