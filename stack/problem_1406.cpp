/*
//
// Created by AppDeveloper on 2022-08-17. 재시도 23. 3. 24
// 하나의 덩어리를 둘로 나눌 때, 스택, 큐 등등을 이용하면 벡터를 쓰는 것보다 시간 절약이 가능하다.
#include <iostream>
#include <stack>

using namespace std;

string s;
int M, cursor;
stack<char> l, r;
char cmd, param;

int main(){
    cin >> s >> M;
    int sSize = s.size();
    for (int i = 0; i < sSize; ++i)
        l.push(s[i]);
    for (int i = 0; i < M; ++i) {
        cin >> cmd;
        if (cmd == 'P'){
            cin >> param;
            l.push(param);
        }
        else if (cmd == 'L'){
            if (!l.empty()) {
                r.push(l.top());
                l.pop();
            }
        }
        else if (cmd == 'B'){
            if (!l.empty())
                l.pop();
        }
        else if (cmd == 'D'){
            if (!r.empty()){
                l.push(r.top());
                r.pop();
            }
        }
    }

    while (!l.empty()){
        r.push(l.top());
        l.pop();
    }

    while (!r.empty()) {
        cout << r.top();
        r.pop();
    }
    return 0;
}
*/
