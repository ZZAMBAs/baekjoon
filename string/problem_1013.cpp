/*
//
// Created by AppDeveloper on 2022-10-12.
// 정규표현식 풀이: https://imnotabear.tistory.com/441
#include <iostream>

using namespace std;

int main(){
    int T;
    string cmd;
    cin >> T;
    while (T--){
        bool sw = true;
        int idx = 0;
        cin >> cmd;

        while (idx < cmd.size()){
            if (cmd[idx] == '1') { // 100+1+
                if (!(cmd[idx + 1] == '0' && cmd[idx + 2] == '0')){
                    sw = false;
                    break;
                }
                idx += 3;
                while (cmd[idx] == '0')
                    idx++;
                if (idx >= cmd.size()){
                    sw = false;
                    break;
                }
                while (cmd[idx] == '1')
                    idx++;
                if (idx >= cmd.size())
                    break;
                if (cmd[idx + 1] == '1')
                    continue;
                if (cmd[idx - 2] == '1')
                    idx--;
            }
            else{ // 01
                if (cmd[idx + 1] != '1'){
                    sw = false;
                    break;
                }
                idx += 2;
            }
        }

        if (sw)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}*/
