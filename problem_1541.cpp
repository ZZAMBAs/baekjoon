/*
//
// Created by AppDeveloper on 2022-07-05.
// 코드 최적화 필요.
#include <iostream>
#include <vector>

using namespace std;

int num = 0, isMinus = 1, sum = 0, subSum = 0;
vector<int> num, subIdx;
string cal;

int main(){
    cin >> cal;
    unsigned int size = cal.size();

    for (int i = 0; i < size; ++i) {
        if (cal[i] >= '0' && cal[i] <= '9')
            num = num * 10 + (cal[i] - '0');
        else{
            num.emplace_back(num * isMinus);
            num = 0;

            if (cal[i] == '-')
                isMinus = -1;
            else
                isMinus = 1;
        }
    }
    num.emplace_back(num * isMinus);


    size = num.size();
    for (int i = 0; i < size; ++i) {
        sum += num[i];
        if (num[i] < 0)
            subIdx.emplace_back(i);
    }

    subIdx.emplace_back(size);
    size = subIdx.size();
    for (int i = 0; i < size - 1; ++i) {
        subSum = 0;
        int start = subIdx[i];
        int end = subIdx[i + 1];

        while (++start != end)
            subSum += num[start];

        sum = min(sum, sum - 2 * subSum);
    }

    cout << sum;
    return 0;
}*/
