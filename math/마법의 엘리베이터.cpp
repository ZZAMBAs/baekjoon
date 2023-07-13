/*
//
// Created by ChoInSoo on 2023-07-13.
//
// 문제 링크: https://school.programmers.co.kr/learn/courses/30/lessons/148653
#include <string>
#include <vector>

using namespace std;

int cal(int storey){
    int ret = 0;
    while(storey){
        int cmpNum = storey % 10;
        if(cmpNum > 5 || (cmpNum == 5 && storey / 10 % 10 >= 5)){
            ret += 10 - cmpNum;
            storey += 10;
        }
        else
            ret += cmpNum;

        storey /= 10;
    }
    return ret;
}

int solution(int storey) {
    int answer = 0;
    answer = cal(storey);
    return answer;
}*/
