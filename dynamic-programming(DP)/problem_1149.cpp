/*
//
// Created by AppDeveloper on 2022-07-02.
//
#include <iostream>

using namespace std;

enum {red = 0, green = 1, blue = 2};

int n, rgb[1000][3], minVal[1000][3];

int sec(int idx, int color){ // 이 코드는 더 줄여질 수 있다.
    if (idx == 0)
        return rgb[0][color];

    if (minVal[idx][color])
        return minVal[idx][color];
    int team = 1000000;

    if (color == red) {
        team = min(team, sec(idx - 1, green) + rgb[idx][red]);
        team = min(team, sec(idx - 1, blue) + rgb[idx][red]);
    }
    if (color == green) {
        team = min(team, sec(idx - 1, red) + rgb[idx][green]);
        team = min(team, sec(idx - 1, blue) + rgb[idx][green]);
    }
    if (color == blue) {
        team = min(team, sec(idx - 1, red) + rgb[idx][blue]);
        team = min(team, sec(idx - 1, green) + rgb[idx][blue]);
    }

    minVal[idx][color] = team;
    return minVal[idx][color];
}

int main(){
    int team;
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> rgb[i][red] >> rgb[i][green] >> rgb[i][blue];

    team = min(min(sec(n - 1, red), sec(n - 1, green)), sec(n - 1, blue));

    cout << team;
    return 0;
}*/
