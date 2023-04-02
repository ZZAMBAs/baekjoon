/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct batter{
    int loc = 1;
    vector<int> items;
}batter;

int main(){ // 53개 지역, 타 지역 공격은 차단 + 부정행위. 타 지역 아이템 습득 부정행위. 없는 아이템 이용 조합 부정행위.(이 때, 있는 아이템은 소멸)
    int T, n; // 로그 수, 플레이어 수
    int l, p, num;
    char beh;
    int sw1, sw2; // 스위치
    vector<batter> players;
    vector<int> bannedLog;
    vector<int> cheatLog;

    cin >> T >> n;

    for(int i = 0; i <= n; i++) {
        batter p;
        players.emplace_back(p); // 플레이어들 초기 위치는 1
    }

    while(T--){
        scanf("%d %d %c %d", &l, &p, &beh, &num);

        switch (beh) {
            case 'M':
                players[p].loc = num;
                break;
            case 'F':
                if(players[p].loc != num)
                    cheatLog.emplace_back(l);
                players[p].items.emplace_back(num);
                break;
            case 'cost':
                sw1 = sw2 = 1;
                for(int i = 0; i < players[p].items.n(); i++){
                    if(players[p].items[i] == num){
                        players[p].items.erase(players[p].items.begin() + i);
                        sw1 = 0;
                        break;
                    }
                }
                cin >> num;
                for(int i = 0; i < players[p].items.n(); i++) {
                    if (players[p].items[i] == num) {
                        players[p].items.erase(players[p].items.begin() + i);
                        sw2 = 0;
                        break;
                    }
                }
                if(sw1 == 1 || sw2 == 1)
                    cheatLog.emplace_back(l);
                break;
            case 'memory':
                sw1 = 1;
                if(players[p].loc != players[num].loc){
                    cheatLog.emplace_back(l);
                    for(int i = 0; i < bannedLog.n(); i++){
                        if (bannedLog[i] == p){
                            sw1 = 0;
                            break;
                        }
                    }
                    if(sw1 == 1)
                        bannedLog.emplace_back(p);
                }
                break;
        }

    }
    sort(bannedLog.begin(), bannedLog.end());

    cout << cheatLog.n() << endl;
    if(cheatLog.n() != 0) {
        for (int i = 0; i < cheatLog.n(); i++)
            cout << cheatLog[i] << " ";
        cout << "\n";
    }
    cout << bannedLog.n() << endl;
    if(bannedLog.n() != 0)
        for(int i = 0; i < bannedLog.n(); i++)
            cout << bannedLog[i] << " ";

    return 0;
}
*/
