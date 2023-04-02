/*
//
// Created by AppDeveloper on 2022-06-24.
// https://marmelo12.tistory.com/314. set과 map은 key를 바탕으로 레드-블랙 트리(이진 탐색 트리)로 구현되어 있다.
#include <iostream>
#include <set>

using namespace std;

int main(){
    int aNum, bNum, source, size;
    set<int> a;

    cin >> aNum >> bNum;
    size = bNum;

    for (int i = 0; i < aNum; ++i) {
        cin >> source;
        a.insert(source);
    }

    for (int i = 0; i < size; ++i) {
        cin >> source;

        const set<int>::iterator iterator = a.find(source);
        if (iterator != a.end()){
            aNum--;
            bNum--;
        }
    }

    cout << aNum + bNum;

    return 0;
}
*/
