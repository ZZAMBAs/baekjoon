/*
//
// Created by AppDeveloper on 2022-05-19.
// 정답이지만 수학적 규칙 풀이는 다음 참고: https://eunhee-programming.tistory.com/99
#include <iostream>

using namespace std;

int main(){
    int T, x, y, tempX, tempY, min;
    cin >> T;

    while (T--){
        int plus = 0;
        min = 0;
        cin >> x >> y;

        tempX= x;
        tempY = y;

        while (true){
            plus++;
            tempX += plus;

            if(tempX <= tempY)
                min++;
            else
                tempX -= plus;

            if(tempX == tempY)
                break;

            tempY -= plus;
            min++;
            if(tempY < tempX)
                break;
        }

        cout << min << '\n';
    }

    return 0;
}*/
