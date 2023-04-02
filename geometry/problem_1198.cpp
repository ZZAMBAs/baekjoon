/*
//
// Created by AppDeveloper on 2022-11-05.
// 사선 공식: https://ladyang86.tistory.com/entry/%EC%84%B8-%EC%A0%90%EC%9D%98-%EC%A2%8C%ED%91%9C%EB%A1%9C-%EC%82%BC%EA%B0%81%ED%98%95%EC%9D%98-%EB%84%93%EC%9D%B4-%EA%B5%AC%ED%95%98%EB%8A%94-%EA%B3%B5%EC%8B%9D-%EC%82%AC%EC%84%A0%EA%B3%B5%EC%8B%9D-%EC%8B%A0%EB%B0%9C%EB%81%88%EA%B3%B5%EC%8B%9D
// https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=wjdals874&logNo=30115774557
#include <iostream>
#include <cmath>

using namespace std;

int N, team;
pair<int, int> coor[35];

int main(){
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> coor[i].first >> coor[i].second;

    for (int i = 0; i < N - 2; ++i) {
        for (int j = i + 1; j < N - 1; ++j) {
            for (int k = j + 1; k < N; ++k) {
                team = max(team, abs(coor[i].first * coor[j].second + coor[j].first * coor[k].second + coor[k].first * coor[i].second
                    - coor[j].first * coor[i].second - coor[k].first * coor[j].second - coor[i].first * coor[k].second));
            }

        }
    }
    cout << team / 2 << "." << team % 2 * 5;
    return 0;
}*/
