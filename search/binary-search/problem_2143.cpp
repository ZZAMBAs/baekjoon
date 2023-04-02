/*
//
// Created by cho on 23. 1. 31.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

ll T, n, m, A[1000], B[1000], prefixA[1001], prefixB[1001], res;
vector<ll> sumA, sumB;

int main(){
    ios::sync_with_stdio(false);
    cin.tie();

    cin >> T >> n;
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
        prefixA[i + 1] = prefixA[i] + A[i];
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> B[i];
        prefixB[i + 1] = prefixB[i] + B[i];
    }

    for (int i = 1; i <= n; ++i)
        for (int j = 0; j < i; ++j)
            sumA.push_back(prefixA[i] - prefixA[j]);

    for (int i = 1; i <= m; ++i)
        for (int j = 0; j < i; ++j)
            sumB.push_back(prefixB[i] - prefixB[j]);

    sort(sumA.begin(), sumA.end());
    sort(sumB.begin(), sumB.end());

    int sumASize = sumA.size();
    ll preRes = 0;
    for (int i = 0; i < sumASize; ++i) {
        if (i > 0 && sumA[i - 1] == sumA[i]) {
            res += preRes;
            continue;
        }
        preRes = 0;
        int s = 0, e = sumB.size() - 1;
        while (s <= e){
            int mid = (s + e) / 2;
            ll sum = sumA[i] + sumB[mid];

            if (sum < T)
                s = mid + 1;
            else if (sum > T)
                e = mid - 1;
            else{
                preRes++;
                int l = mid, r = mid;
                while (--l >= 0 && sumB[l] == sumB[mid])
                    preRes++;
                while (++r <= e && sumB[r] == sumB[mid])
                    preRes++;
                res += preRes;
                break;
            }
        }
    }
    cout << res;
    return 0;
}*/
