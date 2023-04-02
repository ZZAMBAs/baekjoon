/*
//
// Created by cho on 23. 1. 29.
//
#include <iostream>

using namespace std;

int T;
string n;

bool checking(){
    unsigned long nSize = n.size();
    for (int i = 0; i < nSize; ++i) {
        if (n[i] != '0' && n[i] != '1')
            return false;
    }
    return true;
}

int bruteforce(int idx, int sum, int pre, int checkSum){
    if (sum > checkSum)
        return 0;

    if (idx == n.size() - 1){
        if (sum == checkSum)
            return 1;
        return 0;
    }

    return max(bruteforce(idx + 1, sum + (n[idx + 1] - 48), n[idx + 1] - 48, checkSum),
        bruteforce(idx + 1, sum - pre + pre * 10 + (n[idx + 1] - 48), pre * 10 + (n[idx + 1] - 48),checkSum));
}

int cal(){
    int ret = 0, nInt = 0;
    int sum;
    int nSize = n.size();

    for (int i = 0; i < nSize; ++i) {
        nInt *= 10;
        nInt += n[i] - 48;
    }

    for (int i = 1; true; ++i) {
        sum = 0;
        for (int j = 0; j < nSize; ++j) {
            int mul = n[j] - 48;
            int plus = 1;
            for (int k = 0; k < i; ++k)
                plus *= mul;
            sum += plus;
        }
        if (sum > nInt)
            break;

        ret += bruteforce(0, n[0] - 48, n[0] - 48, sum);
    }
    
    return ret;
}

int main(){
    cin >> T;
    while (T--){
        cin >> n;
        if (checking())
            cout << "Hello, BOJ 2023!\n";
        else
            cout << cal() << "\n";
    }

    return 0;
}*/
