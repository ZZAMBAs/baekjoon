/*
//
// Created by AppDeveloper on 2022-12-14.
// 정렬 풀이: https://scarlettb.tistory.com/49 (문자열 오름차순 정렬 시, 맨 앞 문자부터 차례차례 정렬한다. 긴 것이 짧은 것보다 앞에 있다.)
// 트라이: https://yabmoons.tistory.com/379
// 트라이 풀이: https://yabmoons.tistory.com/397
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int t, n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;
    while (t--){
        map<string, int> m;
        bool K = false;
        string numbers[10000];
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> numbers[i];
            m[numbers[i]] = 1;
        }

        sort(numbers, numbers + n);

        for (int i = 0; i < n && !K; ++i) {
            string cur = numbers[i], ap = "";
            int cSize = cur.size();
            for (int j = 0; j < cSize - 1; ++j) {
                ap += cur[j];
                if (m[ap])
                    K = true;
            }
        }

        cout << (K ? "NO\n" : "YES\n");
    }

    return 0;
}*/
