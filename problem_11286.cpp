/*
//
// Created by AppDeveloper on 2022-09-06.
// Heap: https://gmlwjd9405.github.io/2018/05/10/data-structure-heap.html
// 우선순위 큐를 써도 되나, 이런 기본 자료구조 문제는 직접 만들어본다.
#include <iostream>

using namespace std;

int h[100001], deadEnd, leaf = 1;

void pop(){
    if (h[1] == 0 || leaf == 1)
        cout << 0 << "\n";
    else{
        cout << h[1] << "\n";
        h[1] = h[leaf-- - 1];
        h[leaf] = 0;
        int cur = 1;
        int left = cur * 2;
        int right = cur * 2 + 1;

        while (left < leaf){
            int changeIdx;

            if (right >= leaf)
                changeIdx = left;
            else if (abs(h[left]) == abs(h[right]))
                changeIdx = h[left] < h[right] ? left : right;
            else
                changeIdx = abs(h[left]) < abs(h[right]) ? left : right;

            if (abs(h[changeIdx]) > abs(h[cur]))
                break;
            if (abs(h[changeIdx]) == abs(h[cur]) && h[cur] < h[changeIdx])
                break;

            int temp = h[changeIdx];
            h[changeIdx] = h[cur];
            h[cur] = temp;
            cur = changeIdx;
            left = cur * 2;
            right = cur * 2 + 1;

        }

    }
}

void push(int x){
    h[leaf] = x;
    int cur = leaf++;
    int p = cur / 2;
    while (cur != 1 && (abs(h[cur]) < abs(h[p]) || (abs(h[cur]) == abs(h[p]) && h[cur] < h[p]))) {
        int temp = h[p];
        h[p] = h[cur];
        h[cur] = temp;
        cur = p;
        p = cur / 2;
    }
}

int main(){
    int x;
    cin >> deadEnd;
    for (int i = 0; i < deadEnd; ++i) {
        cin >> x;
        if (x == 0)
            pop();
        else
            push(x);
    }

    return 0;
}*/
