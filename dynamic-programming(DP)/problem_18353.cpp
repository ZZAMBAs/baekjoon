/*
//
// Created by cho on 23. 4. 26.
//
#include <iostream>
#include <vector>

using namespace std;

int N, arr[2000];
vector<int> dp;

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    dp.emplace_back(arr[0]);
    for (int i = 1; i < N; ++i) {
        int s = 0, e = dp.size() - 1;
        while (s <= e) {
            int m = (s + e) / 2;

            if (dp[m] > arr[i])
                s = m + 1;
            else if (dp[m] < arr[i])
                e = m - 1;
            else {
                s = e = m;
                break;
            }
        }
        if (s == dp.size())
            dp.emplace_back(arr[i]);
        else
            dp[s] = arr[i];
    } // 여기서 dp는 단순히 LDS 개수를 알기 위함이다. 실제로 가장 긴 감소하는 부분 수열을 저장하지는 않는다!

    cout << N - dp.size();
    return 0;
}*/
