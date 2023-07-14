/*
#include <string>
#include <vector>

using namespace std;

void rotate(vector<vector<int>> &key){
    int size = key.size();
    vector<vector<int>> temp(size, vector<int>(size));
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
            temp[j][size - 1 - i] = key[i][j];

    key = temp;
}

bool checking(int r, int c, vector<vector<int>> &key, vector<vector<int>> &lock, int holes){
    int cnt = 0;
    for(int i = key.size() - 1; i >= 0; i--){
        for(int j = key.size() - 1; j >= 0; j--){
            int lockRow = r - (key.size() - 1 - i);
            int lockCol = c - (key.size() - 1 - j);
            if(lockRow < 0 || lockCol < 0 || lockRow >= lock.size() || lockCol >= lock.size())
                continue;

            if(key[i][j] && lock[lockRow][lockCol])
                return false;
            else if(key[i][j] && !lock[lockRow][lockCol])
                cnt++;
        }
    }

    if(cnt == holes)
        return true;
    return false;
}

bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
    bool answer = false;
    int holes = 0;
    for(int i = 0; i < lock.size(); i++)
        for(int j = 0; j < lock.size(); j++)
            if(!lock[i][j]) holes++;

    for(int i = 0; i < 4 && !answer; i++){
        rotate(key);

        for(int r = 0; r < lock.size() + key.size() - 1 && !answer; r++)
            for(int c = 0; c < lock.size() + key.size() - 1 && !answer; c++)
                answer = checking(r, c, key, lock, holes);
    }
    return answer;
}*/
