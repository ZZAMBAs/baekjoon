/*
//
// Created by AppDeveloper on 2022-08-23.
//
#include <iostream>
#include <stack>

using namespace std;

int fib[46];

int sec(int n){
    if (fib[n] >= 0)
        return fib[n];

    fib[n] = sec(n - 2) + sec(n - 1);
    return fib[n];
}

int main(){
    int T, source;
    fill(fib, fib + 46, -1);
    fib[0] = 0;
    fib[1] = 1;
    sec(45);
    cin >> T;

    while (T--){
        int sum = 0;
        stack<int> stack;
        cin >> source;

        for (int i = 45; i > 0; --i) {
            if (sum + fib[i] > source)
                continue;
            sum += fib[i];
            stack.push(fib[i]);
        }

        while (!stack.empty()) {
            cout << stack.top() << " ";
            stack.pop();
        }
        cout << "\n";
    }

    return 0;
}*/
