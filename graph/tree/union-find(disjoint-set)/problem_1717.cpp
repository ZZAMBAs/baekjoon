/*
//
// Created by AppDeveloper on 2022-06-29.
// https://blog.naver.com/kks227/220791837179
#include <iostream>
#include <vector>

using namespace std;

int n, m, cmd, a, b;
vector<int> p;

int find(int num){
    if (p[num] < 0)
        return num;
    p[num] = find(p[num]); // 계산 시간 줄이기
    return p[num];
}

void merge(int n1, int n2){
    int find1 = find(n1);
    int find2 = find(n2);
    if (find1 == find2)
        return;

    p[find2] = find1;
    return;
}

int main(){
    scanf("%d %d", &n, &m);
    p.resize(n + 1, -1);

    for (int i = 0; i < m; ++i) {
        scanf("%d %d %d", &cmd, &a, &b);
        if (!cmd){
            merge(a, b);
        }
        else{
            if (find(a) == find(b))
                printf("YES\n");
            else
                printf("NO\n");
        }
    }

    return 0;
}*/
