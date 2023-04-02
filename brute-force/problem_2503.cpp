/*
//
// Created by AppDeveloper on 2022-05-14.
//
#include <iostream>
#include <vector>

using namespace std;

int n, ans, st, ba, num, young[3];
int team = 0;
vector<int> answer, strike, ball;

int check(int idx){
    int realBall = 0;
    int realStrike = 0;
    int minhyuk[3];

    minhyuk[0] = answer[idx] / 100;
    minhyuk[1] = (answer[idx] / 10) % 10;
    minhyuk[2] = answer[idx] % 10;

    if(young[0] == minhyuk[0])
        realStrike++;
    if(young[1] == minhyuk[1])
        realStrike++;
    if(young[2] == minhyuk[2])
        realStrike++;
    if(young[0] == minhyuk[1])
        realBall++;
    if(young[0] == minhyuk[2])
        realBall++;
    if(young[1] == minhyuk[2])
        realBall++;
    if(young[1] == minhyuk[0])
        realBall++;
    if(young[2] == minhyuk[0])
        realBall++;
    if(young[2] == minhyuk[1])
        realBall++;

    if(realBall == ball[idx] && realStrike == strike[idx])
        return 1; // true
    return 0; // false
}

int main(){
    cin >> n;

    num = n;

    while(n--){
        cin >> ans >> st >> ba;
        answer.push_back(ans);
        strike.push_back(st);
        ball.push_back(ba);
    }

    for(int i = 123; i <= 987; i++){
        young[0] = i / 100;
        young[1] = (i / 10) % 10;
        young[2] = i % 10;

        if(young[0] == young[1] || young[0] == young[2] || young[1] == young[2] || young[0] == 0 || young[1] == 0 || young[2] == 0)
            continue;

        for(int j = 0; j < num; j++) {
            if(!check(j))
                break;

            if(j == num - 1)
                team++;
        }
    }

    cout << team;
    return 0;
}*/
