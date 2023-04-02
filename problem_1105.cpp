/*
//
// Created by AppDeveloper on 2022-08-09.
// 그냥 string으로 푸는게 더 쉽다. 단순 for문 백트래킹으로도 풀리지만 이 문제는 그걸 노린게 아니다.
#include <iostream>
#include <stack>

using namespace std;


int main(){
    int L, R, team = 0;
    stack<int> l, r;
    cin >> L >> R;

    while (L || R){
        l.push(L % 10);
        r.push(R % 10);
        
        L /= 10;
        R /= 10;
    }

    while (!l.empty()){
        int rVal = r.top();
        int lVal = l.top();
        if (rVal == lVal){
            if (rVal == 8)
                team++;
        }
        else
            break;
        l.pop();
        r.pop();
    }
    
    cout << team;

    return 0;
}*/
