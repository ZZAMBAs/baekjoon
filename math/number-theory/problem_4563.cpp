/*
//
// Created by cho on 23. 3. 30.
// 소인수분해 연관.
#include <iostream>

using namespace std;
typedef long long int ll;

 ll A, res;

 void checking(){
     ll AA = A * A;
     for (ll i = 1; i < A; ++i) { // AA = i * q
         if (AA % i)
             continue;
         ll q = AA / i;
         ll C = (i + q) / 2;
         ll B = q - C;
         if (B > A && AA + B * B == C * C)
             res++;
     }
 }
 
int main(){
    cin >> A;
    while (A != 0){
        res = 0;
        checking();
        cout << res << "\n";

        cin >> A;
    }
    
    return 0;
}*/
