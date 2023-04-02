/*
//
// Created by AppDeveloper on 2022-06-12.
//
#include <iostream>

using namespace std;

int n, pack[1001], sum[1001];

int sec(int n){
    if (sum[n])
        return sum[n];
    
    int maximum = pack[n];
    
    for (int i = 1; i < n; ++i) {
        int cmp = sec(i) + pack[n - i];
        if (maximum < cmp)
            maximum = cmp;
    }

    sum[n] = maximum;
    return sum[n];
}

int main(){
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
        scanf("%d", &pack[i]);

    sum[1] = pack[1];

    cout << sec(n);
    return 0;
}*/
