/*
//
// Created by cho on 23. 4. 4.
//
#include <iostream>

using namespace std;

int sSize, N, M;
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
char s[101];
char chart[100][100];
bool hasS = false;

void finding(int r, int c, int cnt, int direction){
    if (cnt == sSize){
        hasS = true;
        return;
    }

    int nextR = r + dx[direction];
    int nextC = c + dy[direction];
    if (nextR >= 0 && nextR < N && nextC >= 0 && nextC < M && chart[nextR][nextC] == s[cnt])
        finding(nextR, nextC, cnt + 1, direction);
}

int main(){
    cin.getline(s, 100);
    for (char i : s)
        if (i != '\0')
            sSize++;
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j)
            cin >> chart[i][j];
        cin.ignore();
    }

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            if (chart[i][j] == s[0])
                for (int k = 0; k < 8; ++k)
                    finding(i, j, 1, k);

    if (hasS)
        cout << 1;
    else
        cout << 0;
    return 0;
}*/
