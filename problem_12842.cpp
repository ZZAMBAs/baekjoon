/*
//
// Created by cho on 23. 3. 19.
//
#include <iostream>

using namespace std;
typedef unsigned long long int ull;

ull n, s, m, times[100000], restSoboru, res;

int main(){
    cin >> n >> s >> m;
    for (int i = 0; i < m; ++i)
        cin >> times[i];
    restSoboru = n - s;
    int start = 0, end = 100000 * 1000;
    ull endSum = 0;
    while (start <= end){
        ull mid = (start + end) / 2;
        ull sum = 0;
        for (int i = 0; i < m; ++i)
            sum += (mid / times[i]) + 1;

        if (sum >= restSoboru)
            end = mid - 1;
        else if(sum < restSoboru)
            start = mid + 1;
    }
    if (end >= 0)
        for (int i = 0; i < m; ++i)
            endSum += (end / times[i]) + 1;

    int cnt = 0;
    for (int i = 0; i < m && !res; ++i) {
        if (start % times[i] == 0)
            cnt++;
        if (cnt == restSoboru - endSum)
            res = i + 1;
    }

    cout << res;
    return 0;
}*/
