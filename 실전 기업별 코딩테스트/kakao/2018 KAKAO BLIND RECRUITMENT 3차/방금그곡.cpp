/*
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void parsing(string infos[4], string music){
    int infosIdx = 0;
    for(auto &c : music){
        if(c == ','){
            infosIdx++;
            continue;
        }

        infos[infosIdx] += c;
    }
}

int calculateTime(string firstTime, string secondTime){
    int times[2][2] = { {0, 0}, {0, 0} }; // times[0]: 처음, times[1]: 끝
    int idx = 0;
    for(auto &c : firstTime){
        if(c == ':'){
            idx = 1;
            continue;
        }

        times[0][idx] *= 10;
        times[0][idx] += c - 48;
    }
    idx = 0;
    for(auto &c : secondTime){
        if(c == ':'){
            idx = 1;
            continue;
        }

        times[1][idx] *= 10;
        times[1][idx] += c - 48;
    }

    return 60 * times[1][0] + times[1][1] - 60 * times[0][0] - times[0][1] ;
}

string realMelody(string infos[4]){ // 진짜 연주되는 멜로디를 반환
    int playTime = calculateTime(infos[0], infos[1]), akboIdx = 0;
    string musicName = infos[2], musicAkbo = infos[3];
    string realPlayMelody;
    for(int i = 0; i < playTime; i++){
        if(akboIdx >= musicAkbo.size())
            akboIdx = 0;

        char first = musicAkbo[akboIdx], second = musicAkbo[akboIdx + 1];
        realPlayMelody += first;
        if(second == '#'){
            realPlayMelody += second;
            akboIdx++;
        }
        akboIdx++;
    }
    return realPlayMelody;
}

vector<string> insertVec(string &original){ // 리얼 멜로디를 음표를 하나하나 뜯어서 벡터로 반환
    vector<string> vec;
    int size = original.size();
    for(int i = 0; i < size; i++){
        string s;
        s += original[i];
        if(i + 1 < size && original[i + 1] == '#'){
            i++;
            s+= '#';
        }
        vec.emplace_back(s);
    }
    return vec;
}

bool checking(vector<string> &mP, vector<string> &musicP){
    bool sw = false;
    for(int i = 0; i <= (int)musicP.size() - (int)mP.size(); i++){ // .size()는 unsigned long 타입을 반환한다..
        for(int j = 0; j < mP.size(); j++){
            if(mP[j] != musicP[i + j])
                break;
            if(j == mP.size() - 1)
                sw = true;
        }
    }

    return sw;
}

void addMelodies(string &m, string infos[4], vector<pair<int, pair<int, string>>> &allMelodies, int &idx){
    string real = realMelody(infos);
    vector<string> melodyPieces = insertVec(real);
    vector<string> mPieces = insertVec(m);
    if(checking(mPieces, melodyPieces))
        allMelodies.push_back({melodyPieces.size(), {idx, infos[2]}});
}

string solution(string m, vector<string> musicinfos) {
    string answer = "(None)";
    vector<pair<int, pair<int, string>>> allMelodies; // { 재생 크기, {idx, 제목} } -> 끝까지 갔을 때 또는 재생 크기가 바뀌는 경우에 그 전을 리턴하도록 하자.
    int mSize = musicinfos.size();
    for(int i = 0; i < mSize; i++){
        string music = musicinfos[i];
        string infos[4] = {"", "", "", ""}; // 시작 시간, 끝 시간, 제목, 기본악보
        parsing(infos, music);
        addMelodies(m, infos, allMelodies, i);
    }
    sort(allMelodies.begin(), allMelodies.end(), greater<>());

    if(!allMelodies.empty()){
        int maxV = allMelodies[0].first;
        answer = allMelodies[0].second.second;
        for(auto &music : allMelodies){
            if(maxV > music.first)
                break;
            answer = music.second.second;
        }
    }

    return answer;
}*/
