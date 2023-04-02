/*
//
// Created by AppDeveloper on 2022-05-21.
//
#include <iostream>
#include <queue>

using namespace std;

int n, M, T, num, seq = 0;
int priorityNum[11];
bool sw = true;

int main(){
    cin >> T;
    
    while (T--){
        queue<int> priority;

        for (int i = 1; i < 11; ++i) {
            priorityNum[i] = 0;
        }
        seq = 0;
        cin >> n >> M;
        for (int i = 0; i < n; ++i) {
            cin >> num;
            priority.push(num);
            priorityNum[num]++;
        }

        while (true){
            bool sw = false;
            int front = priority.front();

            for (int i = front + 1; i <= 10; ++i) {
                if (priorityNum[i] > 0){
                    priority.pop();
                    priority.push(front);
                    M--;
                    if (M < 0)
                        M = priority.n() - 1;
                    sw = true; // 뒤로 미룸.
                    break;
                }
            }
            if (!sw){
                seq++;
                priorityNum[front]--;
                priority.pop();

                if (M-- == 0)
                    break;
            }

        }

        cout << seq << "\n";
    }

    return 0;
}*/
