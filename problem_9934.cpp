/*
//
// Created by AppDeveloper on 2022-09-13.
//
#include <iostream>
#include <cmath>

using namespace std;

int K, tree[1024], source, curNode = 1;
bool visited[2048];

void inorder(int n){
    while (true) {
        int left = curNode * 2;
        int right = curNode * 2 + 1;

        if (!visited[left])
            curNode = left;
        else if (!visited[curNode]) {
            tree[curNode] = n;
            visited[curNode] = true;
            return;
        }
        else if (!visited[right])
            curNode = right;
        else
            curNode /= 2;

    }

}

int main(){
    cin >> K;
    fill(visited + (int)pow(2, K), visited + 2048, true);
    for (int i = 0; i < (int)pow(2, K) - 1; ++i) {
        cin >> source;
        inorder(source);
    }

    int idx = 0;
    for (int i = 0; i < K; ++i) {
        for (int j = 0; j < (int) pow(2, i); ++j) {
            cout << tree[idx + (int)pow(2, i) + j] << " ";
        }
        cout << "\n";
    }
    return 0;
}*/
