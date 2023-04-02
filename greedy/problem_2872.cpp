/*
//
// Created by cho on 23. 3. 10.
// 책을 빼서 위로 올릴 때 아주 합리적으로 정렬한다는 생각에서 풀이.
#include <iostream>

using namespace std;

int N, book[300000];

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> book[i];

    int cnt = 0, checkNum = N;
    for (int i = N - 1; i >= 0; --i) {
        if (checkNum == book[i]){
            cnt++;
            checkNum--;
        }
    }

    cout << N - cnt;
    return 0;
}*/
