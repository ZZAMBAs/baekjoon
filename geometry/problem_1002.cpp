/*
//
// Created by AppDeveloper on 2022-09-08.
// 실수 풀이는 굉장히 지양해야 하고, 한다고 해도 == 계산은 절대 허용하지 않음.
// 원의 위치관계: https://terms.naver.com/entry.naver?docId=2073725&cid=47324&categoryId=47324
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long T, xStart, y1, r1, xEnd, yEnd, r2;
    cin >> T;
    while (T--){
        long long team, dis;
        cin >> xStart >> y1 >> r1 >> xEnd >> yEnd >> r2;
        long long minR = min(r1, r2);
        long long maxR = r1 + r2 - minR;

        dis = pow(xEnd - xStart, 2) + pow(yEnd - y1, 2);
        if(xStart == xEnd && y1 == yEnd && maxR == minR)
            team = -1;
        else if (pow(r1 + r2, 2) > dis && dis > pow(maxR - minR, 2))
            team = 2;
        else if (pow(r1 + r2, 2) == dis || (dis != 0 && dis == pow(maxR - minR, 2)))
            team = 1;
        else
            team = 0;

        cout << team << "\n";
    }

    return 0;
}*/
