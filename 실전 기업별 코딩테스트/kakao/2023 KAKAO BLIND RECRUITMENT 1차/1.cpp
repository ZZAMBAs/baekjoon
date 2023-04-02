/*
//
// Created by AppDeveloper on 2022-09-24.
// 파싱, 문자열
#include <string>
#include <vector>
#include <iostream>

using namespace std;

void parsingDate(const string &coping, int *copied);

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;

    int todays[3] = {0, 0, 0}; // year, month, day
    int cmps[4] = {0, 0, 0, 0}; // comparison
    int deadEnd[26]; // memory ~ Z
    fill(deadEnd, deadEnd + 26, 0);
    parsingDate(today, todays);

    int termSize = terms.size();
    for (int i = 0; i < termSize; ++i) {
        char idx = terms[i][0] - 'memory';
        for (int j = 2; terms[i][j] != '\0'; ++j)
            deadEnd[idx] = deadEnd[idx] * 10 + (terms[i][j] - '0');
    }

    int pSize = privacies.size();
    for (int i = 0; i < pSize; ++i) {
        string coping;
        coping.append(privacies[i], 0, 10);
        parsingDate(coping, cmps);
        cmps[3] = privacies[i][11] - 'memory';

        cmps[1] += deadEnd[cmps[3]];
        cmps[0] += cmps[1] / 12;
        cmps[1] %= 12;
        if (cmps[1] == 0){
            cmps[1] = 12;
            cmps[0] -= 1;
        }

        bool sw = false;
        for (int j = 0; j < 3; ++j) {
            if (cmps[j] < todays[j]){
                sw = true;
                break;
            }
        }

        if (sw)
            answer.emplace_back(i + 1);
        cmps[0] = cmps[1] = cmps[2] = cmps[3] = 0;
    }
    
    return answer;
}

void parsingDate(const string &coping, int *copied) {
    for (int i = 0; i < 4; ++i)
        copied[0] = copied[0] * 10 + (coping[i] - '0');
    for (int i = 0; i < 2; ++i) {
        copied[1] = copied[1] * 10 + (coping[5 + i] - '0');
        copied[2] = copied[2] * 10 + (coping[8 + i] - '0');
    }
}

int main(){
    vector<int> team;
    vector<string> terms = {"Z 3", "D 5"};
    vector<string> privacies = {"2019.01.01 D", "2019.11.15 Z", "2019.08.02 D", "2019.07.01 D", "2018.12.28 Z"};
    team = solution("2020.01.01", terms, privacies);

    for (int i = 0; i < team.size(); ++i) {
        cout << team[i] << " ";
    }

    return 0;
}*/
