/*
#include <string>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

void parsing(string info[3], string &record){
    int idx = 0;
    for(auto &r: record){
        if(r == ' '){
            idx++;
            continue;
        }
        info[idx] += r;
    }
}

void insertUser(string &id, string &nickname, unordered_map<string, pair<string, int>> &nicknames){
    if(nicknames.find(id) == nicknames.end())
        nicknames[id] = make_pair(nickname, 1);
    else{
        nicknames[id].first = nickname;
        nicknames[id].second = 1;
    }
}

void deleteUser(string &id, unordered_map<string, pair<string, int>> &nicknames){
    nicknames[id].second = 0;
}

void modifyUser(string &id, string &nickname, unordered_map<string, pair<string, int>> &nicknames){
    nicknames[id].first = nickname;
}

#include <iostream>
vector<string> solution(vector<string> record) {
    vector<string> answer;
    queue<pair<string, string>> q;
    unordered_map<string, pair<string, int>> nicknames;

    for(auto &r: record){ // O(N)
        string info[3];
        parsing(info, r);
        if(info[0] == "Enter"){
            insertUser(info[1], info[2], nicknames); // O(1)  키 충돌 없음.
            q.push(make_pair(info[1], "님이 들어왔습니다."));
        }else if(info[0] == "Leave"){
            deleteUser(info[1], nicknames);
            q.push(make_pair(info[1], "님이 나갔습니다."));
        }else
            modifyUser(info[1], info[2], nicknames);
    }
    while(!q.empty()){
        pair<string, string> cur = q.front();
        q.pop();

        string nick = nicknames[cur.first].first;
        answer.emplace_back(nick.append(cur.second));
    }

    return answer;
}*/
