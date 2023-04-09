/*
//
// Created by cho on 23. 4. 9.
//
#include <iostream>

using namespace std;

int main(){
    int E, EM, M, MH, H, res = 0;
    cin >> E >> EM >> M >> MH >> H;
    while (true){
        if (E > 0)
            E--;
        else if (EM > 0)
            EM--;
        else
            break;

        if (H > 0)
            H--;
        else if (MH > 0)
            MH--;
        else
            break;

        if (EM + M + MH <= 0)
            break;
        if (M > 0)
            M--;
        else if (EM >= MH)
            EM--;
        else
            MH--;

        res++;
    }

    cout << res;
    return 0;
}*/
