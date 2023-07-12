/*
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int convertToMinutes(string &times){
    int ret = 0, rest = 0;
    bool sw = false;
    for(auto & c : times){
        if(c == ':'){
            sw = true;
            continue;
        }
        if(!sw)
            ret = (ret * 10) + (c - 48) * 60;
        else
            rest = (rest * 10) + (c - 48);
    }
    return ret + rest;
}

string convertToTime(int minutes){
    string ret;
    if(minutes < 0)
        minutes += 1440;

    if(minutes / 60 < 10)
        ret += '0';
    ret += to_string(minutes / 60);
    minutes = minutes - (minutes / 60) * 60;
    ret += ':';
    if(minutes < 10)
        ret += '0';
    ret += to_string(minutes);

    return ret;
}

int busArrived(int busSeq, int &timetableIdx, int &t, vector<string> &timetable, int &m, int &n){
    int curBusTime = 540 + busSeq * t, ret;
    priority_queue<int> waiting;
    waiting.push(curBusTime);
    while(waiting.size() - 1 != m && timetableIdx != timetable.size()){
        int waitTime = convertToMinutes(timetable[timetableIdx]);
        if(waitTime <= curBusTime){
            waiting.push(waitTime);
            timetableIdx++;
        }
        else
            break;
    }
    if(busSeq == n - 1 && waiting.size() - 1 != m)
        ret = waiting.top();
    else{
        waiting.pop();
        ret = waiting.top() + 100000; // 100000: 꽉참 플래그
    }
    return ret;
}

string solution(int n, int t, int m, vector<string> timetable) {
    string answer = "";
    int timetableIdx = 0, finalPassenger;

    sort(timetable.begin(), timetable.end());

    for(int i = 0; i < n; i++){
        finalPassenger =
                busArrived(i, timetableIdx, t, timetable, m, n); // 마지막 탑승자의 시간(또는 버스 도착 시간)을 반환.
    }
    if(finalPassenger / 100000)
        answer = convertToTime(finalPassenger % 10000 - 1);
    else
        answer = convertToTime(finalPassenger);

    return answer;
}*/
