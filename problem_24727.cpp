/*
//
// Created by AppDeveloper on 2022-07-03.
// ad hoc (특별한 알고리즘 없음) 문제
#include <iostream>
#define c 1
#define e 2

using namespace std;

int n, cost, E, baricade[100][100];

int searching(){ // A는 왼쪽 위부터, B는 오른쪽 아래부터
    int a = 0, b = 0;

    for (int x = 0; x < n; ++x) {
        for (int y = 0; y <= x; ++y) {
            baricade[x - y][y] = c;
            a++;
            if (a == cost)
                break;
        }
        if (a == cost)
            break;
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 1; j < n - i; ++j) {
            if (a >= cost)
                break;
            baricade[n - j][j + i] = c;
            a++;
        }
        if (a >= cost)
            break;
    }

    for (int x = n - 1; x >= 0; --x) {
        for (int y = n - 1; y >= 0; --y) {
            if (baricade[x][y] == c)
                continue;
            if (x > 0 && baricade[x - 1][y] == c)
                continue;
            if (y > 0 && baricade[x][y - 1] == c)
                continue;
            
            baricade[x][y] = e;
            b++;
            if (b == E)
                break;
        }
        if (b == E)
            break;
    }

    if (b != E)
        return -1;
    return 1;
}

int main(){
    cin >> n;
    cin >> cost >> E;

    int isOk = searching();
    cout << isOk << "\n";

    if (isOk == 1){
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << baricade[i][j];
            }
            cout << "\n";
        }
    }

    return 0;
}*/
