/*
//
// Created by cho on 23. 1. 18.
// 문제가 좋진 않음
#include <iostream>

using namespace std;

int res;
string a, b;

int main(){
    cin >> a >> b;
    int aSize = a.size(), bSize = b.size();
    res = aSize + bSize;

    for (int i = 0; i < aSize; ++i) {
        bool isOk = true;
        for (int j = 0; j < min(aSize - i, bSize) && isOk; ++j) {
            if (a[i + j] - 48 + b[j] - 48 > 3)
                isOk = false;
        }
        if (isOk)
            res = min(res, max(aSize, i + bSize));
    }
    for (int i = 0; i < bSize; ++i) {
        bool isOk = true;
        for (int j = 0; j < min(bSize - i, aSize) && isOk; ++j) {
            if (b[i + j] - 48 + a[j] - 48 > 3)
                isOk = false;
        }
        if (isOk)
            res = min(res, max(bSize, i + aSize));
    }

    cout << res;
    return 0;
}*/
