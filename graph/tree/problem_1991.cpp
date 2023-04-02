/*
//
// Created by AppDeveloper on 2022-08-25.
//
#include <iostream>

using namespace std;

int deadEnd;
char c[26][2], node, l, r;

void pre(char cur){ // V L R
    cout << (char)(cur + 65);
    if (c[cur][0] != '.')
        pre(c[cur][0] - 65);
    if (c[cur][1] != '.')
        pre(c[cur][1] - 65);
}

void in(char cur){ // L V R
    if (c[cur][0] != '.')
        in(c[cur][0] - 65);
    cout << (char)(cur + 65);
    if (c[cur][1] != '.')
        in(c[cur][1] - 65);
}

void post(char cur){ // L R V
    if (c[cur][0] != '.')
        post(c[cur][0] - 65);
    if (c[cur][1] != '.')
        post(c[cur][1] - 65);
    cout << (char)(cur + 65);
}

int main(){
    cin >> deadEnd;

    while (deadEnd--){
        cin >> node >> l >> r;
        c[node - 65][0] = l;
        c[node - 65][1] = r;
    }

    pre(0);
    cout << "\n";
    in(0);
    cout << "\n";
    post(0);

    return 0;
}*/
