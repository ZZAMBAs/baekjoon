/*
//
// Created by cho on 23. 2. 2.
//
#include <iostream>

using namespace std;

string s;
bool card[4][14]; // P K H T
bool isGRESKA;

int main(){
    cin >> s;
    int cursor = 0;
    int sSize = s.size();
    while (cursor < sSize){
        int r = -1, c = 0;
        switch (s[cursor++]) {
            case 'T': r++;
            case 'H': r++;
            case 'K': r++;
            case 'P': r++;
        }
        c += (s[cursor++] - 48) * 10;
        c += s[cursor++] - 48;

        if (!card[r][c])
            card[r][c] = true;
        else{
            isGRESKA = true;
            break;
        }
    }

    if (isGRESKA)
        cout << "GRESKA";
    else{
        for (int i = 0; i < 4; ++i) {
            int lostNum = 0;
            for (int j = 1; j < 14; ++j)
                if (!card[i][j])
                    lostNum++;

            cout << lostNum << " ";
        }
    }
    return 0;
}*/
