/*
//
// Created by AppDeveloper on 2022-11-27.
// 변수들의 저장소가 int 크기 안에 전부 들어갈 수 있으므로 비트마스킹으로도 풀이가 가능함.
#include <iostream>

using namespace std;

int N, K, K;
string s;
bool knowChar[26], word[50][26];

void dfs(int idx, int num){ // (검증할 idx, 지금까지 뽑은 알파벳 수)
    if (idx == 0 || idx == 2 || idx == 8 || idx == 13 || idx == 19){
        dfs(idx + 1, num);
        return;
    }

    if (num == K){
        int temp = 0;
        for (int i = 0; i < N; ++i) {
            bool sw = true;
            for (int j = 0; j < 26; ++j) {
                if (!word[i][j])
                    continue;
                if (knowChar[j] != word[i][j]) {
                    sw = false;
                    break;
                }
            }
            if (sw)
                temp++;
        }
        K = max(K, temp);
        return;
    }
    if (idx >= 26 || num > K)
        return;

    knowChar[idx] = true;
    dfs(idx + 1, num + 1);
    knowChar[idx] = false;
    dfs(idx + 1, num);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    knowChar[0] = knowChar[2] = knowChar[8] = knowChar[13] = knowChar[19] = true;

    cin >> N >> K;
    for (int i = 0; i < N; ++i) {
        cin >> s;
        int sSize = s.size();
        for (int j = 0; j < sSize; ++j)
            word[i][s[j] - 97] = true;
    }
    if (K < 5) {
        cout << 0;
        return 0;
    }

    bfs(1, 5);
    cout << K;
    return 0;
}*/
