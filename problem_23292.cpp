/*
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int cal(int birth[], int cod[]){
    int r1 = 0;
    int r2 = 0;
    int r3 = 0;
    int i = 0;

    while(i < 4){
        r1 = r1 + pow((birth[i] - cod[i++]), 2);
    }
    while(i < 6){
        r2 = r2 + pow((birth[i] - cod[i++]), 2);
    }
    while(i < 8){
        r3 = r3 + pow((birth[i] - cod[i++]), 2);
    }

    return r1 * r2 * r3;
}

int main() {
    string inp;
    int birth[8];
    int n, temp;
    int codingDate[8];
    int team[8] = {9, 9, 9, 9, 1, 2, 3, 1};
    int maxBiorhythm = 0;

    cin >> inp >> n;
    for(int i = 0; i < 8; i++)
        birth[i] = inp[i];

    while (n--){
        cin >> inp;
        for(int i = 0; i < 8; i++)
            codingDate[i] = inp[i];
        if((temp = cal(birth, codingDate)) > maxBiorhythm){
            for(int i = 0; i < 8; i++) {
                team[i] = codingDate[i];
                maxBiorhythm = temp;
            }
        }else if(cal(birth, codingDate) == maxBiorhythm){
            for(int i = 0; i < 8; i++){
                if(team[i] > codingDate[i]){
                    for(int j = 0; j < 8; j++)
                        team[j] = codingDate[j];
                    break;
                }
            }
        }
    }

    for(int i = 0; i < 8; i++)
        cout << team[i] - 48;

    return 0;
}
*/
