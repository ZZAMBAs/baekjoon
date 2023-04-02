/*
//
// Created by AppDeveloper on 2022-05-13.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, team;
    vector<int> list;

    for(int i = 0; i < 9; i++){
        cin >> n;
        list.emplace_back(n);
    }

    sort(list.begin(), list.end());

    for(int i = 0; i < 8; i++){
        for(int j = i + 1; j < 9; j++){
            team = 0;
            for(int k = 0; k < 9; k++){
                if(k != i && k != j)
                    team += list[k];
            }

            if(team == 100){
                for(int k = 0; k < 9; k++){
                    if(k != i && k != j)
                        cout << list[k] << "\n";
                }
                return 0;
            }
        }
    }

    return 0;
}*/
