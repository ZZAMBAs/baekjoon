/*
//
// Created by AppDeveloper on 2022-08-15.
//
#include <iostream>
#include <string>

using namespace std;

int sec[5001];
string code;

void dfs(int idx){
    if (idx <= 0)
        return;

    char preC = code[idx - 1], c = code[idx];

    if(c == '0'){
        if (preC != '1' && preC != '2'){
            sec[0] = 0;
            return;
        }

        sec[idx - 1] = sec[idx] % 1000000;
        if (idx - 2 >= 0)
            sec[idx - 2] = sec[idx] % 1000000;
        dfs(idx - 2);
    }
    else if ((c <= '6' && preC == '2') || preC == '1'){ // 분리 가능
        sec[idx - 1] = sec[idx] % 1000000 + sec[idx + 1] % 1000000;
        dfs(idx - 1);
    }
    else{
        sec[idx - 1] = sec[idx] % 1000000;
        dfs(idx - 1);
    }

    return;
}

int main(){
    cin >> code;
    int cSize = code.size();

    if (code[0] != '0')
        sec[cSize] = sec[cSize - 1] = 1;
    bfs(cSize - 1);

    cout << sec[0] % 1000000;
    return 0;
}
*/
