/*
//
// Created by cho on 23. 5. 8.
// Monotone Stack: https://justicehui.github.io/medium-algorithm/2019/01/01/monotoneStack/
#include <iostream>
#include <stack>

using namespace std;
typedef long long ll;

ll N, h, res;

int main(){
    cin >> N;
    stack<ll> stk;
    for (int i = 0; i < N; ++i) {
        cin >> h;
        while (!stk.empty() && stk.top() <= h)
            stk.pop();
        res += stk.size();
        stk.push(h);
    }

    cout << res;
    return 0;
}*/
