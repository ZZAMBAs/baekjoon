/*
//
// Created by AppDeveloper on 2022-07-25. 재시도: 23. 4. 6
//
#include <iostream>
#include <vector>

using namespace std;

int W, H, A, res = INT32_MAX;

vector<pair<int, int>> factors(int num){
    vector<pair<int, int>> ret;
    for (int i = 1; num >= i * i; ++i) {
        if (num % i == 0){
            ret.emplace_back(i, num / i);
            if (i != num / i)
                ret.emplace_back(num / i, i);
        }
        
    }    
    return ret;
}

int main(){
    cin >> W >> H >> A;
    const vector<pair<int, int>> cand = factors(A);

    for (pair<int, int> c : cand) {
        if (c.first > W || c.second > H)
            continue;

        int tempW = W, tempH = H, tempRes = 0;
        while (tempW != c.first){
            if (tempW % 2)
                tempW = (tempW + 1) / 2;
            else
                tempW /= 2;

            if (c.first >= tempW)
                tempW = c.first;
            tempRes++;
        }
        while (tempH != c.second){
            if (tempH % 2)
                tempH = (tempH + 1) / 2;
            else
                tempH /= 2;

            if (c.second >= tempH)
                tempH = c.second;
            tempRes++;
        }
        if (res > tempRes)
            res = tempRes;
    }

    cout << (res == INT32_MAX ? -1 : res);
    return 0;
}
*/
