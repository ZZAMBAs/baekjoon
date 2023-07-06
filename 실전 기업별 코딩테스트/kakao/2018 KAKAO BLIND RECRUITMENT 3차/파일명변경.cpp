/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct Info{
    string head;
    int number;
    int idx;
    string originalText;

    bool operator< (const Info& b){
        if(head != b.head)
            return head.compare(b.head) < 0 ? true : false;
        if(number != b.number)
            return number - b.number < 0;
        return idx < b.idx;
    }
}Info;

void parsing(vector<Info> &infos, string file, int idx){
    int cursor = 0, headEnd = 0, numberEnd = 0;
    string temp;
    Info newInfo;
    while(cursor < file.size()){
        if(!headEnd && file[cursor] >= '0' && file[cursor] <= '9'){
            headEnd = cursor;
            numberEnd = headEnd;
        }
        if(headEnd && file[cursor] >= '0' && file[cursor] <= '9' && numberEnd - headEnd < 5){
            numberEnd = cursor + 1;
        }
        cursor++;
        cout << "numberEnd: " << numberEnd << "\n";
    }
    for(int i = 0; i < headEnd; i++){
        if(file[i] >= 'A' && file[i] <= 'Z')
            temp += file[i] + 32;
        else
            temp += file[i];
    }

    newInfo.head = temp;
    int number = 0;
    cout << "headEnd: " << headEnd << ", numberEnd: " << numberEnd << "\n";
    for(int i = headEnd; i < numberEnd; i++){
        number *= 10;
        number += file[i] - '0';
        cout << number << "\n";
    }
    newInfo.number = number;
    newInfo.idx = idx;
    newInfo.originalText = file;
    infos.emplace_back(newInfo);
}

vector<string> solution(vector<string> files) {
    vector<string> answer;
    vector<Info> infos; // {head, number, 원본}
    for(int idx = 0; idx < files.size(); idx++){
        parsing(infos, files[idx], idx);
    }
    sort(infos.begin(), infos.end());
    for(auto &i : infos){
        cout << i.head << " " << i.number << " " << i.idx << " " << i.originalText << "\n";
    }

    for(auto &i : infos)
        answer.emplace_back(i.originalText);
    return answer;
}

int main(){
    solution({"muzi1.png1", "MUZI1.png2", "MUZI1.png3", "muzi1.png4"});

    return 0;
}*/
