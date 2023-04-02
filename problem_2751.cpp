/*
//
// Created by AppDeveloper on 2022-12-25.
// 기본적인 정렬 알고리즘들: https://evan-moon.github.io/2018/10/13/sort-algorithm/
// merge-sort: https://4z7l.github.io/2020/09/04/algorithms-boj-2751.html
// quick-sort: https://velog.io/@peanut_/boj-s5-2751-%EC%88%98-%EC%A0%95%EB%A0%AC%ED%95%98%EA%B8%B0-2-%ED%80%B5-%EC%A0%95%EB%A0%AC
#include <iostream>
#include <vector>

using namespace std;

int N, ins;
vector<vector<int>> arr(1000000);

void mergeSort(){
    while (N > 1) {
        int q = N / 2;
        int r = N % 2;
        for (int j = 0; j < q; j++) {
            vector<int> cmp1 = arr[j * 2];
            vector<int> cmp2 = arr[j * 2 + 1];
            vector<int> temp;
            int idx1 = 0, idx2 = 0;
            int c1size = cmp1.size();
            int c2Size = cmp2.size();
            cmp1.emplace_back(INT32_MAX);
            cmp2.emplace_back(INT32_MAX);
            
            while (idx1 < c1size || idx2 < c2Size){
                if (cmp1[idx1] < cmp2[idx2])
                    temp.emplace_back(cmp1[idx1++]);
                else
                    temp.emplace_back(cmp2[idx2++]);
            }
            arr[j] = temp;
        }
        if (r)
            arr[q] = arr[N - 1];
        N = q + r;
    }
}

int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> ins;
        arr[i].emplace_back(ins);
    }
    
    mergeSort();

    for (int num : arr[0])
        cout << num << "\n";
    return 0;
}*/
