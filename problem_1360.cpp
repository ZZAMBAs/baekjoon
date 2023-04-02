/*
//
// Created by AppDeveloper on 2022-11-02.
//
#include <iostream>

using namespace std;

typedef struct cmd{
    string command;
    int arg;
    int time;
}cmd;

int main(){
    string insC, team[51] = {"", };
    char insAc;
    int N, insT, insAi, curTime;
    cmd cmds[50];
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> insC;
        if (insC == "type") {
            cin >> insAc;
            cmds[i].arg = insAc;
        }
        else {
            cin >> insAi;
            cmds[i].arg = insAi;
        }
        cin >> insT;
        cmds[i].command = insC;
        cmds[i].time = insT;
    }

    for (int i = 0; i < N; ++i) {
        curTime = cmds[i].time;

        if (cmds[i].command == "type"){
            team[i + 1] = team[i] + (char)cmds[i].arg;
        }
        else{
            for (int j = i - 1; j >= 0; --j) {
                if (cmds[j].time < curTime - cmds[i].arg){
                    team[i + 1] = team[j + 1];
                    break;
                }

                if (j == 0)
                    team[i + 1] = "";
            }
        }

    }
    cout << team[N];
    return 0;
}*/
