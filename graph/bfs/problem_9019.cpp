/*
//
// Created by cho on 22. 12. 30.
//
#include <iostream>
#include <queue>

using namespace std;

typedef struct temp{
    int now;
    string cmd = "";
    
    bool isSame(int b){
        return now == b;
    }

}temp;

int memory, B;
char appending[4] = {'D', 'S', 'L', 'R'};
bool visited[10000];

void isOk(queue<temp> &q, int next, int seq, string &curCmd) {
    if (!visited[next]){
        visited[next] = true;
        temp p;
        p.now = next;
        p.cmd += curCmd + appending[seq];
        q.push(p);
    }
}

string bfs(){
    fill(visited, visited + 10000, false);
    temp t;
    t.now = memory;
    queue<temp> q;
    q.push(t);
    while (!q.empty()){
        temp cur = q.front();
        int curNum = cur.now;
        q.pop();
        
        if (cur.isSame(B))
            return cur.cmd;
        
        int nextList[4] = { (curNum * 2) % 10000,
                            (curNum - 1 < 0 ? 9999 : curNum - 1),
                            curNum % 1000 * 10 + curNum / 1000,
                            curNum / 10 + curNum % 10 * 1000 };

        for (int i = 0; i < 4; ++i)
            isOk(q, nextList[i], i, cur.cmd);

    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--){
        cin >> memory >> B;
        cout << bfs() << "\n";
    }
    
    return 0;
}*/
