/*
//
// Created by cho on 23. 2. 5.
//
#include <iostream>

using namespace std;

int N, cnt;
string res;

void bruteforce(string num, int rest){
    if (!rest){
        cnt++;
        if (cnt == N)
            res = num;
        return;
    }

    for (int i = (num == ""? 1 : 0); i <= 9; ++i) {
        if (num != "" && *(num.end() - 1) - 48 <= i)
            continue;
        bruteforce(num + to_string(i), rest - 1);
    }

}

int main(){
    cin >> N;
    if (N < 10)
        cout << max(0, N);
    else {
        cnt = 9;
        for (int i = 2; i <= 10; ++i) { // 자릿수
            bruteforce("", i);
        }

        cout << ((res == "") ? string("-1") : res);
        // 삼항 연산자 타입이 다른 경우: https://ssdragon.tistory.com/5
    }
    return 0;
}*/
