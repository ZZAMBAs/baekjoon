/*
//
// Created by cho on 23. 1. 17. 재시도 23. 3. 20
// 그리디 풀이 불가. (반례: 2133 2)
// 방문 체크는 level 단위로 해야 함.
#include <iostream>
#include <queue>

using namespace std;

string N;
int M, K, num[7], res;

int bfs(){
    queue<int> q;
    int number = 0, level = 0, ret = 0;
    for (int i = 0; i < M; ++i)
        number = number * 10 + num[i];
    q.push(number);
    while (level != K){
        bool visited[1000001];
        fill(visited, visited + 1000001, false);
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int cur = q.front();
            q.pop();
            int curSlice[7];
            for (int j = M - 1; j >= 0; --j) {
                curSlice[j] = cur % 10;
                cur /= 10;
            }
            for (int j = 0; j < M - 1; ++j) {
                for (int k = j + 1; k < M; ++k) {
                    int temp[7], sum = 0;
                    for (int l = 0; l < 7; ++l)
                        temp[l] = curSlice[l];

                    if (j == 0 && temp[k] == 0)
                        continue;

                    swap(temp[j], temp[k]);
                    for (int l = 0; l < M; ++l)
                        sum = sum * 10 + temp[l];

                    if (!visited[sum]) {
                        visited[sum] = true;
                        q.push(sum);
                    }
                }
            }

        }
        level++;
    }
    if (q.empty())
        return -1;
    while (!q.empty()){
        ret = max(ret, q.front());
        q.pop();
    }
    return ret;
}

int main(){
    cin >> N >> K;
    M = N.size();
    for (int i = 0; i < M; ++i)
        num[i] = N[i] - 48;

    cout << bfs();
    return 0;
}
*/
