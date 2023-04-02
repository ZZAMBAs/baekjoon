/*
//
// Created by AppDeveloper on 2022-05-20. 재시도: 2022-07-03
// 아래 풀이 말고도 이진 탐색으로 풀 수 있으며 그것이 더 수행시간, 메모리 사용 면에서 이득이다.
#include <iostream>
#include <set>

using namespace std;

int n, M, num;
set<int> s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> num;
        s.insert(num);
    }
    
    cin >> M;

    for (int i = 0; i < M; ++i) {
        cin >> num;
        const set<int>::iterator iterator = s.find(num);
        if (iterator == s.end())
            cout << 0 << "\n";
        else
            cout << 1 << "\n";
    }
    
    return 0;
}
*/
