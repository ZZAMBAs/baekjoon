/*
//
// Created by AppDeveloper on 2022-09-24.
// 브루트포스, 백트래킹
#include <vector>
#include <iostream>

using namespace std;

int maxPlus = 0;
int maxAdv = 0;

void dfs(int, int, vector<int>, vector<int>, vector<vector<int>>, vector<vector<int>>);

vector<int> solution(vector<vector<int>> users, vector<int> emoticons) {
    vector<int> answer(2), costs(7), discount(7);
    vector<vector<int>> discountCosts(7); // 10%, 20%, 30%, 40%
    int eSize = emoticons.size();
    for (int i = 0; i < eSize; ++i) {
        for (int j = 1; j <= 4; ++j)
            discountCosts[i].emplace_back(emoticons[i] * (100 - 10 * j) / 100);
    }

    dfs(0, eSize, costs, discount, discountCosts, users);

    answer[0] = maxPlus;
    answer[1] = maxAdv;
    return answer;
}

void dfs(int idx, int eSize, vector<int> costs, vector<int> discount, vector<vector<int>> discountCosts, vector<vector<int>> users) {
    if (idx == eSize){
        int buyPlus = 0;
        int buyMoney = 0;
        int size = users.size();
        for (int i = 0; i < size; ++i) {
            int userDis = users[i][0];
            int userMoney = users[i][1];
            int userBuy = 0;

            for (int j = 0; j < eSize; ++j) {
                if (discount[j] >= userDis)
                    userBuy += costs[j];
            }

            if (userBuy >= userMoney)
                buyPlus++;
            else
                buyMoney += userBuy;
        }

        if (buyPlus > maxPlus){
            maxPlus = buyPlus;
            maxAdv = buyMoney;
        }
        else if (buyPlus == maxPlus && maxAdv < buyMoney)
            maxAdv = buyMoney;
        return;
    }
    
    for (int i = 0; i < 4; ++i) {
        costs[idx] = discountCosts[idx][i];
        discount[idx] = 10 * (i + 1);
        bfs(idx + 1, eSize, costs, discount, discountCosts, users);
    }
}

int main(){
    vector<vector<int>> users = { {40, 2900}, {23, 10000}, {11, 5200}, {5, 5900}, {40, 3100}, {27, 9200}, {32, 6900}};
    vector<int> emoticons = {1300, 1500, 1600, 4900};
    vector<int> answer = solution(users, emoticons);

    for (int i = 0; i < answer.size(); ++i)
        cout << answer[i] << " ";
    return 0;
}*/
