/*
//
// Created by AppDeveloper on 2022-08-09.
// 출력에 주의. int로 출력 불가. (10^5 자릿수이기에)
#include <iostream>
#include <vector>

using namespace std;

int numbers[10], sum;
string source;
vector<char> team;

int main(){

    cin >> source;

    for (char insertNum : source) {
        numbers[insertNum - '0']++;
    }

    if (!numbers[0]) {
        cout << -1;
        return 0;
    }

    for (int i = 1; i < 10; ++i)
        sum += numbers[i] * i;

    while (sum / 10 > 0){
        int temp = sum, tempSum = 0;
        while (temp){
            tempSum += temp % 10;
            temp /= 10;
        }

        sum = tempSum;
    }

    if (sum % 3 == 0) {
        for (int i = 9; i >= 0; --i) {

            while (numbers[i]) {
                team.emplace_back(i);
                numbers[i]--;
            }

        }

        for (int result : team) {
            cout << result;
        }
    }
    else
        cout << -1;

    return 0;
}*/
