/*
//
// Created by AppDeveloper on 2022-09-12.
#include <iostream>
#include <cmath>

using namespace std;

int xStart, yStart, xEnd, yEnd, n, cx, cy, r;

int main(){
    int T;
    cin >> T;
    while (T--){
        int team = 0;
        cin >> xStart >> yStart >> xEnd >> yEnd;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> cx >> cy >> r;
            double startDist = pow(cx - xStart, 2) + pow(cy - yStart, 2);
            double endDist = pow(cx - xEnd, 2) + pow(cy - yEnd, 2);

            if ((startDist - pow(r, 2)) * (endDist - pow(r, 2)) < 0)
                team++;
        }
        cout << team << "\n";
    }

    return 0;
}*/
