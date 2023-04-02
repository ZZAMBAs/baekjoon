/*
//
// Created by AppDeveloper on 2022-06-15.
// 조합론 공부 후 재풀이
#include <bits/stdc++.h>

using namespace std;

int n, M, guitars[10], ans;
char yesOrNo;
long long music;

bool guitarEmpty();

int bruteForce();

int main(){
    char guitar[51];
    scanf("%d %d", &n, &M);

    for (int i = 0; i < n; ++i) {
        scanf("%s", guitar);
        scanf("%c", &yesOrNo);

        for (int j = M; j > 0; --j) {
            scanf("%c", &yesOrNo);
            if (yesOrNo == 'Y')
                guitars[i] += pow(2, j - 1);
        }
        scanf("%c", &yesOrNo);
    }

    if (guitarEmpty())
        cout << -1;
    else{
        bruteForce();

        cout << ans;
    }

    return 0;
}

bool guitarEmpty() {
    for (int i = 0; i < n; ++i) {
        if(guitars[i] != 0)
            return false;
    }
    return true;
}

int bruteForce() {

}*/
