/*
//
// Created by cho on 23. 5. 2.
//
#include <iostream>
#include <vector>

using namespace std;

int N, happyDay[5000];
vector<int> nums;

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> happyDay[i];
    }
    for (int i = 1; i < N; ++i) {
        int size = nums.size();
        if (!size) {
            nums.emplace_back(happyDay[i] - 1);
            continue;
        }

        bool sw = false;
        for (int j = 0; j < size && !sw; ++j) {
            if ((happyDay[i] - 1) % nums[j] == 0)
                sw = true;
        }

        if (!sw)
            nums.emplace_back(happyDay[i] - 1);
    }

    cout << nums.size();
    return 0;
}*/
