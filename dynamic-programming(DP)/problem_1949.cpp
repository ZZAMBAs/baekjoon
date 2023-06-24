/*
//
// Created by cho on 23. 6. 24.
// 해당 문제의 1번 조건과 2번 조건을 만족하면 3번 조건은 자명하다. 1번 조건에 의해 우수 마을 값이 최대가 되어야 하므로,
// 인접한 '우수 마을'이 하나도 없는 '우수 마을'이 아닌 마을은 존재할 수 없기 때문(존재하면 그것도 '우수 마을'로 만들어야 총합이 최대가 된다).
// 따라서 아래의 2(우수와 인접하지 않은 비우수) 상태는 필요가 없다.
// 이런 형식의 문제를 트리의 독립 집합 문제라고 한다.
// 간단 풀이: https://private-space.tistory.com/39
#include <iostream>
#include <vector>

using namespace std;

// 0: 우수 1: 우수와 인접한 비우수 2: 우수와 인접하지 않은 비우수
int N, population[10001], dp[3][10001], res;
vector<vector<int>> adj(10001);
int visited[10001];

int dfs(int idx, int pre, int state){
    if(dp[state][idx])
        return dp[state][idx];

    if (state == 0){
        for(auto &adv : adj[idx]){
            if (adv == pre)
                continue;
            dp[state][idx] += dfs(adv, idx, 1);
        }
        dp[state][idx] += population[idx];
    }else if(state == 1){
        for(auto &adv : adj[idx]){
            if (adv == pre)
                continue;
            dp[state][idx] += max(dfs(adv, idx, 0), dfs(adv, idx, 2));
        }
    }else{
        int cnt = 0, minValIdx = INT32_MAX, minVal = INT32_MAX;
        for(auto &adv : adj[idx]){
            if (adv == pre)
                continue;
            int great = dfs(adv, idx, 0);
            int noGreat = dfs(adv, idx, 2);
            if (minVal > abs(great - noGreat)){
                minVal = abs(great - noGreat);
                minValIdx = adv;
            }
            dp[state][idx] += max(noGreat, great);
            if (noGreat > great) {
                cnt++;
            }
        }
        if (cnt == adj[idx].size()){
            dp[state][idx] += minVal;
        }
    }

    return dp[state][idx];
}

int main(){
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cin >> population[i];
    }
    for (int i = 0; i < N - 1; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].emplace_back(b);
        adj[b].emplace_back(a);
    }
    res = max(dfs(1, 0, 2), dfs(1, 0, 0));

    cout << res;
    return 0;
}*/
