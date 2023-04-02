/*
//
// Created by AppDeveloper on 2022-06-13.
// 재도전
#include <iostream>
#include <vector>

using namespace std;

int n, cmd;
vector<int> arr;

void popArr(){
    if (arr.size() == 0)
        cout << 0 << "\n";
    else {
        int num = arr[0];
        int size = arr.size();

        for (int i = 0; i < size; ++i) {

        }
    }

}

void pushArr(int pushVal){

}

int main(){
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> cmd;
        if (cmd == 0)
            popArr();
        else
            pushArr(cmd);
    }

    return 0;
}*/
