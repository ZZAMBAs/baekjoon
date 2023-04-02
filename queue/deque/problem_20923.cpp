/*
//
// Created by cho on 23. 1. 21.
//
#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie();

    int N, M, insD, insS, res = -1; // 0: do, 1: su, 2: dosu
    deque<int> deck[2], ground[2];
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        cin >> insD >> insS;
        deck[0].push_front(insD);
        deck[1].push_front(insS);
    }
    int turn = 1;
    while (M-- && res == -1){
        turn = (turn + 1) % 2;
        ground[turn].push_front(deck[turn].front());
        deck[turn].pop_front();

        if (deck[turn].empty()){
            res = (turn + 1) % 2;
            break;
        }

        if (ground[turn].front() == 5 || ground[0].front() + ground[1].front() == 5) { // dodo get
            int my, opponent;
            if (ground[turn].front() == 5)
                my = 0;
            else {
                my = 1;
                if (ground[(turn + 1) % 2].empty())
                    continue;
            }
            opponent = (my + 1) % 2;
            int opSize = ground[opponent].size();
            int mySize = ground[my].size();
            for (int i = 0; i < opSize; ++i) {
                deck[my].push_back(ground[opponent].back());
                ground[opponent].pop_back();
            }
            for (int i = 0; i < mySize; ++i) {
                deck[my].push_back(ground[my].back());
                ground[my].pop_back();
            }
        }

    }
    if (res == -1) {
        if (deck[0].size() == deck[1].size())
            res = 2;
        else if (deck[0].size() > deck[1].size())
            res = 0;
        else
            res = 1;
    }

    if (res == 0)
        cout << "do";
    else if (res == 1)
        cout << "su";
    else if(res == 2)
        cout << "dosu";
    return 0;
}*/
