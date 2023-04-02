/*
//
// Created by AppDeveloper on 2022-07-02.
//
#include <iostream>

using namespace std;

int n, num, minVal = 1000000000, maxVal = 0;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> num;
        if (minVal > num)
            minVal = num;

        if (num - minVal > maxVal)
            maxVal = num - minVal;

        cout << maxVal << " ";
    }

    return 0;
}*/
