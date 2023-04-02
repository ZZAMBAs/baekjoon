/*
//
// Created by AppDeveloper on 2022-05-30.
//
#include <iostream>
#include <deque>

using namespace std;

int T, n, num, sw = 1, err = 0;
char cmd[700000], trash;

int main(){
    scanf("%d", &T);

    while (T--){
        deque<int> d;
        err = 0;
        sw = 1;

        scanf("%s", &cmd);
        scanf("%d\n", &n);
        scanf("%c", &trash);
        for (int i = 0; i < n; ++i) {
            scanf("%d", &num);
            d.push_back(num);

            if (i != n - 1)
                scanf("%c", &trash);
        }
        scanf("%c", &trash);

        for (int i = 0; cmd[i] != '\0'; ++i) {
            if (cmd[i] == 'R')
                sw *= -1;
            if (cmd[i] == 'D'){
                if (d.empty()){
                    err = 1;
                    break;
                }
                if (sw == 1)
                    d.pop_front();
                else
                    d.pop_back();
            }
        }

        if (err)
            printf("error\n");
        else{
            printf("[");
            int size = d.size();
            for (int i = 0; i < size; ++i) {
                if (sw == 1) {
                    printf("%d", d.front());
                    d.pop_front();
                }
                else {
                    printf("%d", d.back());
                    d.pop_back();
                }

                if (d.size())
                    printf(",");
            }
            printf("]\n");
        }
    }

    return 0;
}*/
