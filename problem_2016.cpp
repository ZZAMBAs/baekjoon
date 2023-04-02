/*
//
// Created by AppDeveloper on 2022-09-27.
//
#include <iostream>
#include <queue>

int priority[10][5], manCouple[5], taehyun, team;
bool reject[5][5]; // 행은 1~5, 열은 6~10
bool visited[5]; // 6 ~ 10

using namespace std;

void Clr(){ // 선호도 제외 전부 초기화.
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            reject[i][j] = false;
        }
        manCouple[i] = 0;
    }
}

void cal(int idx){
    if (idx == 5){
        Clr();
        queue<int> women;
        for (int i = 5; i < 10; ++i)
            women.push(i);

        while (!women.empty()){
            int curWoman = women.front();
            women.pop();

            for (int i = 0; i < 5; ++i) {
                int theMan = priority[curWoman][i] - 1; // 지목한 남자
                if (!reject[theMan][curWoman - 5]){ // 퇴짜 아닐 때
                    if (!manCouple[theMan]) // 짝 없으면
                        manCouple[theMan] = curWoman;
                    else{ // 짝 있으면
                        int nowP, changeP; // 우선순위 비교용
                        int nowWoman = manCouple[theMan]; // 현재 남자의 짝
                        for (int j = 0; j < 5; ++j) {
                            if (priority[theMan][j] == nowWoman + 1)
                                nowP = j;
                            if (priority[theMan][j] == curWoman + 1)
                                changeP = j;
                        }
                        if (nowP < changeP) {
                            women.push(curWoman);
                            reject[theMan][curWoman - 5] = true;
                        }
                        else{
                            women.push(nowWoman);
                            reject[theMan][nowWoman - 5] = true;
                            manCouple[theMan] = curWoman;
                        }
                    }
                    break;
                }

            }
            
        }
        int curTaehyun = manCouple[0];
        if (curTaehyun < taehyun){
            team++;
            taehyun = curTaehyun;
        }

        return;
    }

    for (int i = 0; i < 5; ++i) {
        if (!visited[i]){
            priority[0][idx] = i + 6;
            visited[i] = true;
            cal(idx + 1);
            visited[i] = false;
        }
    }

}

int main(){
    int T;
    cin >> T;
    while (T--){
        team = 0;
        taehyun = 10;
        Clr();
        for (int i = 0; i < 5; ++i)
            visited[i] = false;

        for (int i = 1; i < 10; ++i)
            for (int j = 0; j < 5; ++j)
                cin >> priority[i][j];
        cal(0);
        if (team > 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}*/
