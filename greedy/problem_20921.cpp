/*
//
// Created by AppDeveloper on 2022-09-27.
//
#include <iostream>

using namespace std;

int N, K, numbers[4242], temp = 1;
bool used[4243];

int main(){
    cin >> N >> K;
    for (int i = 0; i < N; ++i) {
        int restPeople = N - i - 1;
        if (restPeople != 0 && K >= restPeople){
            K -= restPeople;
            numbers[i] = restPeople + 1;
            used[restPeople + 1] = true;
        }
        else{
            if (K != 0){
                numbers[i] = K + 1;
                used[K + 1] = true;
                K = 0;
            }
            else{
                while (used[temp])
                    temp++;
                numbers[i] = temp;
                used[temp] = true;
            }
        }
    }

    for (int i = 0; i < N; ++i)
        cout << numbers[i] << " ";

    return 0;
}*/
