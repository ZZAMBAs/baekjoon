/*
//
// Created by AppDeveloper on 2022-06-24.
// 탐색이 많을때 유용. c_str 함수는 string을 char* 로 변경.
#include <map>
#include <string>

using namespace std;

int n, M, insNum;
char pokemonName[100000][21], source[100000][21];
map<string, int> stringDogam;
map<int, string> numberDogam;

int main(){
    scanf("%d %d", &n, &M);

    for (int i = 0; i < n; ++i) {
        scanf("%s", &pokemonName[i]);
        numberDogam[i + 1] = pokemonName[i];
        stringDogam[pokemonName[i]] = i + 1;
    }

    for (int i = 0; i < M; ++i) {
        scanf("%s", &source[i]);

        if (source[i][0] >= '0' && source[i][0] <= '9') {
            insNum = atoi(source[i]);
            const map<int, string>::iterator &iterator = numberDogam.find(insNum);
            printf("%s\n", iterator->second.c_str());
        }
        else{
            const map<string, int>::iterator &iterator = stringDogam.find(source[i]);
            printf("%d\n", iterator->second);
        }
    }

    return 0;
}*/
