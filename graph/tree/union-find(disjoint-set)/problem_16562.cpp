/*
//
// Created by AppDeveloper on 2022-06-29.
//
#include <iostream>
#include <vector>

using namespace std;

int n, M, k, a, b, team = 0;
vector<int> friends(10001), parent(10001, -1);

int find(int n){
    if (parent[n] < 0)
        return n;
    parent[n] = find(parent[n]);
    return parent[n];
}

void merge(int n1, int n2){
    int find1 = find(n1);
    int find2 = find(n2);
    if (find1 == find2)
        return;
    if (friends[find1] < friends[find2])
        parent[find2] = find1;
    else
        parent[find1] = find2;
}

int main(){
    scanf("%d %d %d", &n, &M, &k);

    for (int i = 1; i <= n; ++i)
        scanf("%d", &friends[i]);

    for (int i = 0; i < M; ++i) {
        scanf("%d %d", &a, &b);
        merge(a, b);
    }

    for (int i = 1; i <= n; ++i)
        if (parent[i] < 0)
            team += friends[i];

    if (team > k)
        printf("Oh no");
    else
        printf("%d", team);

    return 0;
}*/
