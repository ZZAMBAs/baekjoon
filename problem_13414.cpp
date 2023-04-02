/*
//
// Created by cho on 23. 3. 12.
//
#include <iostream>
#include <queue>
#include <map>

using namespace std;

int K, L, cnt;
string num;
map<string, int> s;

int main(){
    cin >> K >> L;
    queue<string> waiting;
    for (int i = 0; i < L; ++i) {
        cin >> num;
        s[num] = i;
        waiting.push(num);
    }

    for (int i = 0; i < L && cnt < K; ++i) {
        string front = waiting.front();
        waiting.pop();
        if (s[front] != i)
            continue;

        cout << front << "\n";
        cnt++;
    }
    return 0;
}*/
