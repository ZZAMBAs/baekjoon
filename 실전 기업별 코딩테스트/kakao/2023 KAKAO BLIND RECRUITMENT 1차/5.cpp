/*
//
// Created by AppDeveloper on 2022-09-24.
// 구현, 파싱
#include <vector>
#include <string>

using namespace std;

string board[50][50];

void update(string basicString, string basicString1);

void update(string r, string c, string num);

vector<string> solution(vector<string> commands) {
    vector<string> answer;
    int size = commands.size();
    for (int i = 0; i < size; ++i) {
        int pos = 0;
        string cmd, r1, c1, r2, c2, num;
        r1 = r2 = c1 = c2 = num = cmd = "";
        while (commands[i][pos++] != ' ')
            cmd += commands[i][pos - 1];

        if (cmd == "UPDATE"){
            while (commands[i][pos++] != ' ')
                r1 += commands[i][pos - 1];
            while (commands[i][pos] != '\0' && commands[i][pos] != ' ')
                c1 += commands[i][pos++];
            while (commands[i][pos] != '\0')
                num += commands[i][pos++];

            if (num == "")
                update(r1, c1);
            else
                update(r1, c1, num);
        }
        else if (cmd == "MERGE"){
            while (commands[i][pos++] != ' ')
                r1 += commands[i][pos - 1];
            while (commands[i][pos++] != ' ')
                c1 += commands[i][pos - 1];
            while (commands[i][pos++] != ' ')
                r2 += commands[i][pos - 1];
            while (commands[i][pos] != '\0')
                c2 += commands[i][pos++];

            merge(r1, c1, r2, c2);
        }else if (cmd == "UNMERGE"){
            while (commands[i][pos++] != ' ')
                r1 += commands[i][pos - 1];
            while (commands[i][pos] != '\0')
                c1 += commands[i][pos++];

            unmerge(r1, c1);
        }
        else{ // PRINT
            while (commands[i][pos++] != ' ')
                r1 += commands[i][pos - 1];
            while (commands[i][pos] != '\0')
                c1 += commands[i][pos++];
            print(r1, c1);
        }
    }
    
    return answer;
}

void update(string r, string c, string num) {

}

void update(string val1, string val2) {
    for (int i = 0; i < 50; ++i)
        for (int j = 0; j < 50; ++j) {
            if (select(i, j) == val1)
                board[i][j] = val2;
        }
}


#include <iostream>
int main(){
    vector<string> team;
    vector<string> commands = {"UPDATE 1 1 menu", "UPDATE 1 2 category", "UPDATE 2 1 bibimbap", "UPDATE 2 2 korean",
                               "UPDATE 2 3 rice", "UPDATE 3 1 ramyeon", "UPDATE 3 2 korean", "UPDATE 3 3 noodle",
                               "UPDATE 3 4 instant", "UPDATE 4 1 pasta", "UPDATE 4 2 italian", "UPDATE 4 3 noodle",
                               "MERGE 1 2 1 3", "MERGE 1 3 1 4", "UPDATE korean hansik", "UPDATE 1 3 group",
                               "UNMERGE 1 4", "PRINT 1 3", "PRINT 1 4"};
    team = solution(commands);
    for (int i = 0; i < team.size(); ++i) {
        cout << team[i] << " ";
    }

    return 0;
}*/
