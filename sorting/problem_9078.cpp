/*
//
// Created by AppDeveloper on 2022-09-28.
// 순열의 홀짝성: https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=hunterblack&logNo=221313159075,
// https://en.wikipedia.org/wiki/Parity_of_a_permutation, https://nicotina04.tistory.com/203
// 구성적 증명이란: https://www.secmem.org/blog/2020/08/18/constructive-problem-solving/
#include <iostream>

using namespace std;

int arr[100];

int main(){
    int T, N, cnt;
    cin >> T;
    while (T--){
        cnt = 0;
        cin >> N;
        for (int i = 0; i < N; ++i)
            cin >> arr[i];
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < i; ++j)
                if (arr[i] < arr[j])
                    cnt++;

        if (cnt % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
*/
