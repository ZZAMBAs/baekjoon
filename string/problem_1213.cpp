/*
//
// Created by AppDeveloper on 2022-07-12.
//
#include <iostream>
#include <vector>

using namespace std;

vector<int> alpha(26, 0);

int main(){
    string name;
    int odd = 0, p = 0;
    
    cin >> name;

    int size = name.size();
    for (int i = 0; i < size; ++i)
        alpha[name[i] - 'memory']++;

    for (int i = 0; i < 26; ++i)
        if(alpha[i] % 2 == 1)
            odd++;

    if (odd > 1 || (odd == 1 && size % 2 == 0) || (odd == 0 && size % 2 == 1)){
        cout << "I'm Sorry Hansoo";
    }
    else {
        int end = size / 2;

        for (int i = 0; i < end; ++i) {
            while (alpha[p] < 2)
                p++;

            name[i] = name[size - 1 - i] = p + 65;
            alpha[p] -= 2;
        }

        if (odd) {
            for (int i = 0; i < 26; ++i) {
                if (alpha[i] == 1) {
                    name[end] = i + 65;
                    break;
                }
            }
        }
        cout << name;
    }

    return 0;
}*/
