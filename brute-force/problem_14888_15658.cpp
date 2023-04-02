/*
//
// Created by AppDeveloper on 2022-07-12.
//
#include <iostream>
#include <vector>

enum cal {pl, mi, mu, di};

using namespace std;

int n, minVal = 1000000000, maxVal = -1000000000, num[11];

void dfs(int idx, int num, vector<int> pmmd, cal method){
    switch (method) {
        case pl:
            num += num[idx];
            pmmd[0]--;
            break;
        case mi:
            num -= num[idx];
            pmmd[1]--;
            break;
        case mu:
            num *= num[idx];
            pmmd[2]--;
            break;
        case di:
            num /= num[idx];
            pmmd[3]--;
            break;
    }

    if (idx == n - 1){
        if (num > maxVal)
            maxVal = num;
        if (num < minVal)
            minVal = num;

        return;
    }

    if (pmmd[0] > 0)
        dfs(idx + 1, num, pmmd, pl);
    if (pmmd[1] > 0)
        dfs(idx + 1, num, pmmd, mi);
    if (pmmd[2] > 0)
        dfs(idx + 1, num, pmmd, mu);
    if (pmmd[3] > 0)
        bfs(idx + 1, num, pmmd, di);

}

int main(){
    vector<int> pmmd(4);

    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> num[i];

    for (int i = 0; i < 4; ++i)
        cin >> pmmd[i];

    pmmd[0]++;
    fdp(0, 0, pmmd, pl);

    cout << maxVal << "\n" << minVal;

    return 0;
}
*/
