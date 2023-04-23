/*
//
// Created by cho on 23. 4. 23.
//
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

ll n, curDay, subtract, sum;
pair<ll, ll> arr[1000000]; // { deadline, consume }

int main(){
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].second >> arr[i].first;
        sum += arr[i].second;
    }
    sort(arr, arr + n);

    curDay = arr[0].first - arr[0].second + 1;
    for (int i = 0; i < n; ++i) {
        curDay += arr[i].second - 1;
        subtract = max((ll)0, curDay - arr[i].first);
        curDay -= subtract;
        curDay++;
    }

    cout << max((ll)0, curDay - sum - 1);
    return 0;
}*/
