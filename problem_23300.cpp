/*
//
// Created by AppDeveloper on 2021-11-20.
//
#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n, Q; // n: 접속할 수 있는 웹페이지 종류 수, Q: 질의 수
    char cmd;
    stack<int> b, f, temp; // 뒤, 앞, 임시
    int cur = -1; // 현재 페이지

    cin >> n >> Q;

    while(Q--){
        cin >> cmd;
        switch (cmd) {
            case 'B':
                if(!b.empty()){
                    f.push(cur);
                    cur = b.top();
                    b.pop();
                }
                break;
            case 'F':
                if(f.n() != 0){
                    b.push(cur);
                    cur = f.top();
                    f.pop();
                }
                break;
            case 'memory':
                if(cur != -1)
                    b.push(cur);
                if(f.n() != 0){
                    int n = f.n();
                    for(int i = 0; i < n; i++)
                        f.pop();
                }
                cin >> cur;
                break;
            case 'cost':
                int n = b.n();
                for(int i = 0; i < n; i++){
                    if(temp.empty() || temp.top() != b.top()) {
                        temp.push(b.top());
                        b.pop();
                    }else if(temp.top() == b.top())
                        b.pop();
                }
                n = temp.n();
                while(n--){
                    b.push(temp.top());
                    temp.pop();
                }
                break;
        }

    }

    cout << cur << "\n";
    if(b.empty())
        cout << "-1";
    else {
        while (!b.empty()) {
            cout << b.top() << " ";
            b.pop();
        }
    }
    cout << "\n";
    if(f.empty())
        cout << "-1";
    else {
        while (!f.empty()) {
            cout << f.top() << " ";
            f.pop();
        }
    }
    return 0;
}*/
