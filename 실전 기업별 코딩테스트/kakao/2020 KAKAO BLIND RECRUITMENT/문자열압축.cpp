/*
#include <string>
#include <vector>

using namespace std;
#include <iostream>
int checking(int lookCnt, string &s){
    //cout << "--------------------------\nlookCnt: " << lookCnt << "\n";

    int sSize = s.size();
    int ret = sSize;
    int cursor = 0; // 비교를 위한 고정 문자열 첫 인덱스
    while(cursor < sSize){
        int nextCursor = cursor + lookCnt; // 다음 비교할 문자열 첫 인덱스
        int sameCnt = 1; // 반복된 회수
        bool sw = true; // 일치하는지 여부 판단
        while(nextCursor + lookCnt - 1 < sSize && sw){

            for(int i = 0; i < lookCnt && sw; i++){
                //cout << "original: " << s[cursor + i] << ", compare: " << s[nextCursor + i] << "\n";
                if(s[cursor + i] != s[nextCursor + i]) sw = false;
            }

            if(sw){
                nextCursor += lookCnt;
                sameCnt++;
            }
        }
        //cout << "sameCnt: " << sameCnt << "\n";
        if(sameCnt != 1){
            int subtract = 0;
            ret -= (sameCnt - 1) * lookCnt;
            while(sameCnt){
                sameCnt /= 10;
                subtract++;
            }
            cout << subtract << "\n";
            ret += subtract;
        }
        //cout << "ret: " << ret << "\n";
        cursor = nextCursor;
    }

    cout << "finalRet: " << ret << "\n";
    return ret;
}

int solution(string s) {
    int sSize = s.size();
    int answer = sSize;

    for(int i = 1; i <= sSize / 2; i++){
        answer = min(answer, checking(i, s));
    }

    return answer;
}*/
