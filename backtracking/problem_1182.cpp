/*
//
// Created by AppDeveloper on 2022-05-20.
//
#include <iostream>
#include <vector>

using namespace std;

int n, S, num, cnt = 0;
vector<int> arr;

void findNum(int idx, int sum);

int main(){
    cin >> n >> S;

    for (int i = 0; i < n; ++i){
        cin >> num;
        arr.emplace_back(num);
    }

    for (int i = 0; i < n; ++i) {
        findNum(i, arr[i]);
    }

    cout << cnt;

    return 0;
}

void findNum(int idx, int sum) {
    if(sum == S) {
        cnt++;
        // return; 을 쓰면 도중 중단이 되기에 안된다.
        // 그 다음 부분 수열의 합이 0이면 그것도 정답이 맞기 때문.
        // 예를 들어 S가 2이면 {1, 1} 도 답이고 {1, 1, -2, 2} 도 답이다.
    }

    for(int i = idx + 1; i < n; i++){
        findNum(i, sum + arr[i]);
    }
}
*/
