/*
//
// Created by AppDeveloper on 2022-06-30.
// https://cplusplus.com/reference/string/string/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, M;
string s;
vector<string> dJob, team;

void searching(int start, int end, string str) {
    if (start > end || end < start)
        return;
    
    int m = (start + end) / 2;

    int i = str.compare(dJob[m]);
    if (i == 0){
        team.emplace_back(str);
        return;
    }
    if (i > 0)
        searching(m + 1, end, str);
    else
        searching(start, m - 1, str);
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    cin >> n >> M;

    for (int i = 0; i < n; ++i) {
        cin >> s;
        dJob.emplace_back(s);
    }

    sort(dJob.begin(), dJob.end());

    for (int i = 0; i < M; ++i) {
        cin >> s;
        searching(0, n - 1, s);
    }

    sort(team.begin(), team.end());

    unsigned int size = team.size();
    cout << size << "\n";

    for (int i = 0; i < size; ++i) {
        cout << team[i] << "\n";
    }

    return 0;
}*/
