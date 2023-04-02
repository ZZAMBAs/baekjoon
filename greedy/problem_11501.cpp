/*
//
// Created by cho on 23. 3. 31.
// 내 풀이는 매우 비효율적이다.
// 정석 풀이는 그리디 풀이. 그리디는 가끔 뒤에서부터 보는 것이 더 좋을 때가 있다. 아래 참조.
// https://velog.io/@ehdcks3421/%EB%B0%B1%EC%A4%80-%EC%A3%BC%EC%8B%9D-11501, https://everenew.tistory.com/63
#include <iostream>
#include <queue>

using namespace std;
typedef long long ll;

ll T, N, stock[1000000], preStock[1000001];

int main(){
    cin >> T;
    while (T--){
        ll nowIdx = -1, res = 0;
        priority_queue<pair<ll, ll>> q; // {val, idx}
        cin >> N;
        for (int i = 0; i < N; ++i) {
            cin >> stock[i];
            preStock[i + 1] = preStock[i] + stock[i]; // i까지 합: preStock[i + 1]
            q.emplace(stock[i], i);
        }

        while (!q.empty()){
            pair<int, int> cur = q.top();
            q.pop();
            if (nowIdx >= cur.second)
                continue;

            res += cur.first * (cur.second - nowIdx - 1) - (preStock[cur.second] - preStock[nowIdx + 1]);
            nowIdx = cur.second;
        }

        cout << res << "\n";
    }

    return 0;
}*/
