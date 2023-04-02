/*
//
// Created by AppDeveloper on 2022-08-04.
//
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

typedef struct candidate{
    int x;
    int y;
    int blankNum;
    
    candidate(int x, int y, int blankNum){
        this->x = x;
        this->y = y;
        this->blankNum = blankNum;
    }
}candidate;

bool cmp(candidate a, candidate b){ // https://artbooks.tistory.com/42
    if (a.blankNum == b.blankNum){
        if (a.x == b.x)
            return a.y < b.y;
        return a.x < b.x;
    }
    return a.blankNum > b.blankNum;
}

int n, student[400], likeStudent[401][4], board[400][400], batchLike;

void batch(int student, int studentInfo[4]){
    vector<candidate> canCoordinate;
    int maxLike = -1, blank, likeCal;
    for (int i = 0; i < n; ++i) { // 비어있는 칸 중에서 좋아하는 학생이 인접한 칸에 가장 많은 칸으로 자리를 정한다.
        for (int j = 0; j < n; ++j) { // 칸 마다 비교
            if (board[i][j])
                continue;

            likeCal = 0;
            blank = 4;

            if (i == 0 || i == n - 1)
                blank -= 1;
            if (j == 0 || j == n - 1)
                blank -= 1;
            
            if (i + 1 < n) {
                if (board[i + 1][j])
                    blank--;
                for (int k = 0; k < 4; ++k) {
                    if (board[i + 1][j] == studentInfo[k]) {
                        ++likeCal;
                        break;
                    }
                }
            }

            if (i - 1 >= 0) {
                if (board[i - 1][j])
                    blank--;
                for (int k = 0; k < 4; ++k) {
                    if (board[i - 1][j] == studentInfo[k]) {
                        ++likeCal;
                        break;
                    }
                }
            }

            if (j + 1 < n) {
                if (board[i][j + 1])
                    blank--;
                for (int k = 0; k < 4; ++k) {
                    if (board[i][j + 1] == studentInfo[k]) {
                        ++likeCal;
                        break;
                    }
                }
            }

            if (j - 1 >= 0) {
                if (board[i][j - 1])
                    blank--;
                for (int k = 0; k < 4; ++k) {
                    if (board[i][j - 1] == studentInfo[k]) {
                        ++likeCal;
                        break;
                    }
                }
            }

            if (likeCal > maxLike){
                maxLike = likeCal;
                canCoordinate.clear();
            }
            if (likeCal >= maxLike)
                canCoordinate.push_back(candidate(i, j, blank));

        }
    }

    sort(canCoordinate.begin(), canCoordinate.end(), cmp);

    candidate finalCoor = canCoordinate[0];
    board[finalCoor.x][finalCoor.y] = student;

    return;
}

void cal(int x, int y){
    int *likes = likeStudent[board[x][y]], likeCal = 0;
    if (x + 1 < n)
        for (int k = 0; k < 4; ++k) {
            if (board[x + 1][y] == likes[k]) {
                ++likeCal;
                break;
            }
        }

    if (x - 1 >= 0)
        for (int k = 0; k < 4; ++k) {
            if (board[x - 1][y] == likes[k]) {
                ++likeCal;
                break;
            }
        }

    if (y + 1 < n)
        for (int k = 0; k < 4; ++k) {
            if (board[x][y + 1] == likes[k]) {
                ++likeCal;
                break;
            }
        }

    if (y - 1 >= 0)
        for (int k = 0; k < 4; ++k) {
            if (board[x][y - 1] == likes[k]) {
                ++likeCal;
                break;
            }
        }

    switch (likeCal) {
            case 1:
                batchLike += 1;
                break;
            case 2:
                batchLike += 10;
                break;
            case 3:
                batchLike += 100;
                break;
            case 4:
                batchLike += 1000;
            default:
                break;
    }
}

int main(){
    cin >> n;

    int studentSize = n * n;
    for (int i = 0; i < studentSize; ++i) {
        cin >> student[i];
        for (int j = 0; j < 4; ++j) {
            cin >> likeStudent[student[i]][j];
        }
    }

    for (int i = 0; i < studentSize; ++i)
        batch(student[i], likeStudent[student[i]]);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cal(i, j);
        }
    }

    cout << batchLike;
    return 0;
}*/
