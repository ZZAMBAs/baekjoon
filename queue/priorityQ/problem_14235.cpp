/*
//
// Created by AppDeveloper on 2022-06-13.
//
#include <iostream>
#include <queue>

using namespace std;

int n, a, num;
priority_queue<int> santa;

int main(){
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a;

        if (a == 0) {
            int top;

            if (santa.empty())
                top = -1;
            else {
                top = santa.top();
                santa.pop();
            }
            cout << top << "\n";
        }
        else{
            while (a--){
                cin >> num;
                santa.push(num);
            }
        }

    }
    
    return 0;
}*/
