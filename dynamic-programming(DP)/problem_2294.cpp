/*
//
// Created by AppDeveloper on 2022-05-28. 재시도: 2022-07-18
// bfs로도 풀 수 있다고도 하는데 어차피 DP 이용하는 것임.
#include <iostream>
#include <vector>

using namespace std;

int n, k, source;
vector<int> coins, sec(10001, -1);

int fdp(int num){
    if (num <= 0)
        return 10001;

    if (sec[num] > 0)
        return sec[num];
    
    int team = 10001;

    int size = coins.size();
    for (int i = 0; i < size; ++i) {
        team = min(team, fdp(num - coins[i]) + 1);
    }

    sec[num] = team;

    return team;
}

int main(){
    cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        cin >> source;
        coins.emplace_back(source);
        sec[source] = 1;
    }
    
    int team = fdp(k);
    if (team == 10001)
        cout << -1;
    else
        cout << team;

    return 0;
}
*/
