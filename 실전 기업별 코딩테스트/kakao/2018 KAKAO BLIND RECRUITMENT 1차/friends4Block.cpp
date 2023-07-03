/*
#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool erased[30][30];
int num[30]; // 해당 열 지워진 개수

void printBoard(vector<string> &board){
    for(int i = 0; i < board.size(); i++)
        cout << board[i] << "\n";
    for(int i = 0; i < board[0].size(); i++)
        cout << num[i] << " ";
    cout << "\n";
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[0].size(); j++)
            cout << erased[i][j];
        cout << "\n";
    }

}

int checking2x2(int r, int c, vector<string> &board){
    int ret = 0;
    char character = board[r][c];
    if(character != '0' &&
       board[r + 1][c] == character && board[r][c + 1] == character && board[r + 1][c + 1] == character){
        erased[r][c] = erased[r + 1][c] = erased[r + 1][c + 1] = erased[r][c + 1] = true;
        ret = 1;
    }
    return ret;
}

int move(int m, int n, vector<string> &board){
    int ret = 0;

    // m은 row, n은 col
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            if(erased[j][i]){
                board[j][i] = '0';
                ret++;
                num[i]++;
            }
        }
    for(int i = 0; i < n; i++){
        string temp = "";
        for(int j = 0; j < num[i]; j++)
            temp += '0';

        for(int j = 0; j < m; j++)
            if(board[j][i] != '0')
                temp += board[j][i];


        for(int j = 0; j < m; j++)
            board[j][i] = temp[j];
    }

    return ret;
}

int solution(int m, int n, vector<string> board) {
    int answer = 0;
    int sw; // 체크

    while(true){
        sw = 0;
        fill(erased[0], erased[0] + 900, false);

        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < m - 1; j++){
                sw |= checking2x2(j, i, board);
            }
        }
        if(!sw)
            break;
        answer += move(m, n, board);

    }
    return answer;
}*/
