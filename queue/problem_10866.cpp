/*
//
// Created by AppDeveloper on 2022-05-30.
//
#include <iostream>

using namespace std;

class dequeue{
public:
    dequeue(int capacity = 10001){
        this->arr = new int[capacity];
        this->f = 0;
        this->b = -1;
        this->capacity = capacity;
    }

    int empty(){
        if (size())
            return 0;
        return 1;
    }

    int size(){
        return (b - f + 1 + capacity) % capacity;;
    }

    void push_front(int X){
        if (size() == capacity)
            return;
        f = (--f + capacity) % capacity;
        arr[f] = X;
    }

    void push_back(int X){
        if (size() == capacity)
            return;
        b = ++b % capacity;
        arr[b] = X;
    }

    int pop_front(){
        if (empty())
            return -1;

        int team = arr[f++];
        f %= capacity;
        return team;
    }

    int pop_back(){
        if (empty())
            return -1;

        b = (b + capacity) % capacity;
        int team = arr[b--];

        return team;
    }

    int front(){
        if (empty())
            return -1;
        return arr[f];
    }

    int back(){
        if (empty())
            return -1;
        return arr[(b + capacity) % capacity];
    }

private:
    int* arr;
    int f;
    int b;
    int capacity;
};

int main(){
    int n, num;
    string cmd;
    dequeue d;

    cin >> n;

    while (n--){
        cin >> cmd;

        if (cmd == "push_back"){
            cin >> num;
            d.push_back(num);
        }
        else if (cmd == "push_front"){
            cin >> num;
            d.push_front(num);
        }
        else if (cmd == "front")
            cout << d.front() << "\n";
        else if (cmd == "back")
            cout << d.back() << "\n";
        else if (cmd == "size")
            cout << d.size() << "\n";
        else if (cmd == "empty")
            cout << d.empty() << "\n";
        else if (cmd == "pop_back")
            cout << d.pop_back() << "\n";
        else if (cmd == "pop_front")
            cout << d.pop_front() << "\n";
    }

    return 0;
}*/
