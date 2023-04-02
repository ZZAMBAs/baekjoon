/*
//
// Created by AppDeveloper on 2022-07-12.
//
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int team = 0, i = 0;
    char source[101];
    scanf("%s", source);

    while(source[i] != '\0'){
        char cur = source[i];
        char next = source[i + 1];

        if (next == '\0'){
            team++;
            i++;
        }
        else{
            char temp[3] = {cur, next, '\0'};
            if (!strcmp(temp, "c=") || !strcmp(temp, "c-") || !strcmp(temp, "d-") || !strcmp(temp, "lj")
            || !strcmp(temp, "nj") || !strcmp(temp, "s=") || !strcmp(temp, "z=")) {
                team++;
                i += 2;
            }
            else if (!strcmp(temp, "dz")){
                team += 2;
                char final = source[i + 2];
                i += 2;

                if(final == '='){
                    team--;
                    i++;
                }
            }
            else {
                team++;
                i++;
            }
        }
    }

    printf("%d", team);

    return 0;
}*/
