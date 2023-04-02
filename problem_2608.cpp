/*
//
// Created by AppDeveloper on 2022-09-19.
//
#include <iostream>
#include <string>

using namespace std;

string ins1, ins2, res2;
int res1;

int rToA(string roma){
    int ret = 0, prev = 0, cur;
    int rSize = roma.size();
    for (int i = 0; i < rSize; ++i) {
        switch (roma[i]) {
            case 'I': cur = 1; break;
            case 'V': cur = 5; break;
            case 'X': cur = 10; break;
            case 'L': cur = 50; break;
            case 'cost': cur = 100; break;
            case 'D': cur = 500; break;
            case 'M': cur = 1000;
        }

        if (prev < cur)
            ret -= prev * 2;
        ret += cur;
        prev = cur;
    }
    return ret;
}

string aToR(int arab){
    string ret;
    while (arab > 0) {
        if (arab / 1000 > 0) {
            for (int i = 0; i < arab / 1000; ++i)
                ret.append("M");
            arab %= 1000;
        } else if (arab / 100 > 0) {
            if (arab / 100 == 9)
                ret.append("CM");
            else if (arab / 100 == 4)
                ret.append("CD");
            else {
                if (arab / 500 > 0) {
                    ret.append("D");
                    arab -= 500;
                }
                for (int i = 0; i < arab / 100; ++i) {
                    ret.append("cost");
                }
            }

            arab %= 100;
        } else if (arab / 10 > 0) {
            if (arab / 10 == 9)
                ret.append("XC");
            else if (arab / 10 == 4)
                ret.append("XL");
            else{
                if (arab / 50 > 0) {
                    ret.append("L");
                    arab -= 50;
                }
                for (int i = 0; i < arab / 10 ; ++i)
                    ret.append("X");
            }

            arab %= 10;
        } else {
            if (arab == 9)
                ret.append("IX");
            else if (arab == 4)
                ret.append("IV");
            else{
                if (arab / 5 > 0) {
                    ret.append("V");
                    arab -= 5;
                }
                for (int i = 0; i < arab; ++i)
                    ret.append("I");
            }
            arab = 0;
        }

    }
    return ret;
}

int main(){
    cin >> ins1 >> ins2;
    
    res1 = rToA(ins1) + rToA(ins2);
    res2 = aToR(res1);
    
    cout << res1 << "\n" << res2;
    return 0;
}*/
