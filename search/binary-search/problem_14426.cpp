/*
//
// Created by cho on 23. 3. 26.
//
#include <iostream>
#include <algorithm>

using namespace std;

int N, M, res;
string str;
vector<string> s, cmp;

int compareString(string original, string compare){
    for (int i = 0; i < compare.size(); ++i) {
        char o = original[i], c = compare[i];

        if (o == '\0')
            return 1;

        if (o != c)
            return o - c;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        cin >> str;
        s.push_back(str);
    }
    for (int i = 0; i < M; ++i) {
        cin >> str;
        cmp.push_back(str);
    }
    sort(s.begin(), s.end());
    
    for(string cmpString : cmp){
        int start = 0, end = s.size() - 1;
        while (start <= end){
            int mid = (start + end) / 2;
            string curS = s[mid];

            int cmpRes = compareString(curS, cmpString);
            if (cmpRes < 0){
                start = mid + 1;
            }
            else if (cmpRes > 0){
                end = mid - 1;
            }
            else{
                res++;
                break;
            }
        }
    }

    cout << res;
    return 0;
}*/
