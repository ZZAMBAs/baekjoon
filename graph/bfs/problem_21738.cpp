/*
//
// Created by cho on 23. 3. 14.
//
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, S, P, A, B, subtract;
vector<vector<int>> adv(328001);
bool visited[328001];

void bfs(){
    int level = 0, cnt = 0;
    visited[P] = true;
    queue<int> q;
    q.push(P);
    while (!q.empty()){
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i) {
            int cur = q.front();
            q.pop();

            for (int adj : adv[cur]) {
                if (!visited[adj]){
                    visited[adj] = true;
                    if (adj >= 1 && adj <= S) {
                        subtract += level;
                        if (++cnt == 2)
                            return;
                    }
                    else
                        q.push(adj);
                }
            }

        }
        level++;
    }
}

int main(){
    cin >> N >> S >> P;
    for (int i = 0; i < N - 1; ++i) {
        cin >> A >> B;
        adv[A].push_back(B);
        adv[B].push_back(A);
    }
    bfs();
    cout << N - subtract - 3;
    return 0;
}*/
