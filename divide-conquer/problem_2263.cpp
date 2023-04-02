/*
//
// Created by AppDeveloper on 2022-11-20.
// 좋은 문제.
#include <iostream>
#include <map>

using namespace std;

int inorder[100000], postorder[100000];
map<int, int> inorderIdx;

void divideAndConquer(int iS, int iE, int pS, int pE){
    if (iS > iE || pS > pE)
        return;

    int diff = inorderIdx[postorder[pE]] - iS;
    cout << postorder[pE] << " ";
    divideAndConquer(iS, iS + diff - 1, pS, pS + diff - 1);
    divideAndConquer(iS + diff + 1, iE, pS + diff, pE - 1);
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> inorder[i];
        inorderIdx[inorder[i]] = i;
    }
    for (int i = 0; i < n; ++i)
        cin >> postorder[i];

    divideAndConquer(0, n - 1, 0, n - 1);

    return 0;
}*/