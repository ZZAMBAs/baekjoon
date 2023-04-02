/*
//
// Created by AppDeveloper on 2022-09-24.
//
#include <iostream>

using namespace std;

int main(){
    int T, y, m, d, homeworkM, homeworkD;
    scanf("%d", &T);
    while (T--){
        int maxDay[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int priorD[8], priorM[8], priorY[8], afterD[8], afterM[8], afterY[8];
        scanf("%d/%d/%d %d/%d", &m, &d, &y, &homeworkM, &homeworkD);

        for (int i = 2000; i <= 2200; i = i + 4) {
            if (y == i && i != 2100 && i != 2200)
                maxDay[2] = 29;
        }

        for (int i = 1; i <= 7; ++i) {
            priorD[i] = d - i;
            priorM[i] = m;
            priorY[i] = y;
            if (priorD[i] < 1) {
                priorM[i]--;
                if (priorM[i] == 0) {
                    priorM[i] = 12;
                    priorY[i]--;
                }
                priorD[i] += maxDay[priorM[i]];
            }

            afterD[i] = d + i;
            afterM[i] = m;
            afterY[i] = y;
            if (afterD[i] > maxDay[m]){
                afterM[i]++;
                if (afterM[i] > 12) {
                    afterM[i] = 1;
                    afterY[i]++;
                }
                afterD[i] -= maxDay[m];
            }
        }

        if (m == homeworkM && d == homeworkD)
            printf("SAME DAY\n");
        else{
            for (int i = 1; i <= 7; ++i) {
                if (afterD[i] == homeworkD && afterM[i] == homeworkM){
                    if (i == 1)
                        printf("%d/%d/%d IS 1 DAY AFTER\n", afterM[i], afterD[i], afterY[i]);
                    else
                        printf("%d/%d/%d IS %d DAYS AFTER\n", afterM[i], afterD[i], afterY[i], i);
                    break;
                }
                else if (priorD[i] == homeworkD && priorM[i] == homeworkM){
                    if (i == 1)
                        printf("%d/%d/%d IS 1 DAY PRIOR\n", priorM[i], priorD[i], priorY[i]);
                    else
                        printf("%d/%d/%d IS %d DAYS PRIOR\n", priorM[i], priorD[i], priorY[i], i);
                    break;
                }
                else if (i == 7)
                    printf("OUT OF RANGE\n");
            }
        }
    }

    return 0;
}*/
