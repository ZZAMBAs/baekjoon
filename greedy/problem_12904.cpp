/*
//
// Created by AppDeveloper on 2022-10-13.
//
#include <iostream>

using namespace std;

string S, T;

int main(){
    cin >> S >> T;

    while (S.size() < T.size()){
        bool sw = false;
        if (T.back() == 'B')
            sw = true;
        T.pop_back();
        if (sw){
            int TSize = T.size();
            for (int i = 0; i < TSize / 2; ++i)
                swap(T[i], T[TSize - 1 - i]);
        }
    }
    if (S.compare(T) == 0)
        cout << 1;
    else
        cout << 0;
    
    return 0;
}*/
