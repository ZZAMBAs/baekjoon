/*
//
// Created by AppDeveloper on 2022-08-21.
//
#include <iostream>
#include <string>

using namespace std;

int q, l, r, alpha[26][200001]; // 첫째열은 디폴트
char source;
string S;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> S;
    cin >> q;

    int size = S.size();
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < 26; ++j)
            alpha[j][i + 1]= alpha[j][i];
        alpha[S[i] - 97][i + 1]++;
    }
    
    while (q--){
        cin >> source >> l >> r;
        cout << alpha[source - 97][r + 1] - alpha[source - 97][l] << "\n";
    }
    
    return 0;
}*/
