/*
//
// Created by cho on 23. 3. 15.
//
#include <iostream>

using namespace std;

int main(){
    int N, K, s = 0, e = 0, sum = 0, res = 0;
    int arr[200000], visited[100001];
    fill(visited, visited + 100001, 0);
    cin >> N >> K;
    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    while (e != N){
        if (visited[arr[e]] + 1 > K){
            while (arr[s] != arr[e]){
                visited[arr[s]]--;
                sum--;
                s++;
            }
            visited[arr[s]]--;
            s++;
            sum--;
        }
        else{
            sum++;
            visited[arr[e]]++;
            e++;
            res = max(res, sum);
        }

    }

    cout << res;
    return 0;
}*/
