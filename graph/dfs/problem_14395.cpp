/*
//
// Created by cho on 23. 4. 14.
// int를 사용할 때는 자료형 범위를 벗어나는 값이 들어오는지 확인하자.
#include <iostream>

using namespace std;

typedef long long ll;

int s, t, minRes = INT32_MAX;
string res = "", forDfs[2] = { "", "/" };

void dfs(ll num, int dfsNum){
    if (num > t || forDfs[dfsNum].size() > minRes)
        return;
    if (num == t && forDfs[dfsNum].size() <= minRes){
        minRes = forDfs[dfsNum].size();
        if (res == "")
            res = forDfs[dfsNum];
        else{
            if(res.compare(forDfs[dfsNum]) > 0)
                res = forDfs[dfsNum];
        }
    }

    forDfs[dfsNum] += '+';
    dfs(num * 2, dfsNum);
    forDfs[dfsNum].erase(forDfs[dfsNum].end() - 1);

    if (num != 1) {
        forDfs[dfsNum] += "*";
        dfs(num * num, dfsNum);
        forDfs[dfsNum].erase(forDfs[dfsNum].end() - 1);
    }
}

int main(){
    cin >> s >> t;
    if (s == t)
        cout << 0;
    else {
        dfs(1, 1);
        dfs(s, 0);
        if (res == "")
            cout << -1;
        else
            cout << res;
    }
    return 0;
}*/
