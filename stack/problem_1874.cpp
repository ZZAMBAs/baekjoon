/*
//
// Created by cho on 23. 2. 7.
//
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int N, now = 1, arrIdx, arr[100000];
bool sw = true;
vector<char> res;

int main(){
    stack<int> s;
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    while (arrIdx != N){
        if (now > N + 1 || (!s.empty() && s.top() > arr[arrIdx])){
            sw = false;
            break;
        }

        if (s.empty() || s.top() < arr[arrIdx]) {
            s.push(now++);
            res.push_back('+');
        }
        else if (s.top() == arr[arrIdx]){
            s.pop();
            arrIdx++;
            res.push_back('-');
        }
    }

    if (!sw)
        cout << "NO";
    else
        for (char c : res)
            cout << c << "\n";
    return 0;
}*/
