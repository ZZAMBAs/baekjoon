/*
//
// Created by AppDeveloper on 2022-12-24.
//
#include <iostream>

using namespace std;

int T, n, w, ins;

int main(){
    cout.precision(7);
    cin >> n >> w;
    while (n != 0 && w != 0){
        int histogram[11], maxHistogramNum = 0, histogramNum = 100 / w + 1;
        fill(histogram, histogram + 11, 0);
        double K = 0;
        for (int i = 0; i < n; ++i) {
            cin >> ins;
            for (int j = 0; j < histogramNum; ++j) {
                if (w * j <= ins && ins < min(101, w * (j + 1)))
                    histogram[j]++;
            }
        }
        for (int i = 0; i < histogramNum; ++i)
            maxHistogramNum = max(maxHistogramNum, histogram[i]);
        for (int i = histogramNum - 1; i >= 0; --i) {
            if (histogram[i]){
                histogramNum = i;
                break;
            }
        }

        int parentValid = histogramNum;
        int chkValid = histogramNum;
        for (int i = 0; i <= histogramNum; ++i) {
            int calC = chkValid-- * histogram[i];
            int calP = parentValid * maxHistogramNum;
            K += (double) calC / (double) calP;
        }
        K += 0.01;
        cout << K << "\n";
        cin >> n >> w;
    }

    return 0;
}*/
