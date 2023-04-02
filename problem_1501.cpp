/*
//
// Created by AppDeveloper on 2022-11-19.
//
#include <iostream>

using namespace std;

char dictEnd[10000][2];
int dict[10000][52], dictSize[10000];

bool isOk(char curEnd[2], int curDict[52], int cmpIdx){
    if (!(curEnd[0] == dictEnd[cmpIdx][0] && curEnd[1] == dictEnd[cmpIdx][1]))
        return false;
    for (int i = 0; i < 52; ++i) {
        if (curDict[i] != dict[cmpIdx][i])
            return false;
    }

    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    int N, M;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> s;
        cin.ignore();
        dictSize[i] = s.size();
        dictEnd[i][0] = s[0];
        dictEnd[i][1] = *(s.end() - 1);

        for (int j = 1; j < dictSize[i] - 1; ++j) {
            if (s[j] >= 'a')
                dict[i][s[j] - 97]++;
            else
                dict[i][s[j] - 65 + 26]++;
        }
    }
    cin >> M;
    cin.ignore();
    for (int i = 0; i < M; ++i) {
        int K = 1, start = 0, end = 0;
        getline(cin, s, '\n');
        int sSize = s.size();
        while (end <= sSize){
            if (s[end] == ' ' || s[end] == '\0'){
                if (end - start <= 0) {
                    end++;
                    continue;
                }

                int tempRes = 0;
                string temp = s.substr(start, end - start);

                char curEnd[2] = {temp[0], *(temp.end() - 1)};
                int curSize = temp.size(), curDict[52];
                fill(curDict, curDict + 52, 0);

                for (int j = 1; j < curSize - 1; ++j) {
                    if (temp[j] >= 'a')
                        curDict[temp[j] - 97]++;
                    else
                        curDict[temp[j] - 65 + 26]++;
                }

                for (int j = 0; j < N; ++j) {
                    if (curSize != dictSize[j])
                        continue;
                    if (isOk(curEnd, curDict, j))
                        tempRes++;
                }
                K *= tempRes;
                start = end + 1;
            }
            end++;
        }
        cout << K << "\n";
    }
    return 0;
}
*/
