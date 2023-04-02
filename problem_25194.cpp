/*
//
// Created by AppDeveloper on 2022-05-21. 재시도 : 2022-07-16
// 풀이는 아래 브루트포스 말고도 DP, bitmasking 으로도 풀 수 있다.
#include <iostream>
#include <vector>

using namespace std;

int n, num;
vector<int> memory(7, 0);

bool bruteforce(int idx, int sum, vector<int> arr){
    bool b = false;

    if (sum % 7 == 4)
        return true;

    if (idx >= 7)
        return false;

    if (arr[idx] > 0) {
        arr[idx]--;
        b = b | backtracking(idx, sum + idx, arr);
        arr[idx]++;
    }
    b = b | fdp(idx + 1, sum, arr);

    return b;
}

bool can(){
    if (memory[1] >= 4 || memory[2] >= 2 || memory[3] >= 6 || memory[4] >= 1 || memory[5] >= 5 || memory[6] >= 3)
        return true;

    return fdp(1, 0, memory);
}

int main(){

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> num;
        memory[num % 7]++;
    }

    if (can())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
*/
