/*
//
// Created by cho on 23. 6. 25.
// 나는 직접 구현했지만 규칙을 찾아 분할 정복(재귀)으로 풀 수도 있다.
#include <iostream>

using namespace std;

typedef struct Node{
    int val = 0;
    Node* left = nullptr;
    Node* right = nullptr;
}Node;

Node* root = new Node();

void push(Node* curNode, int value){
    if (!curNode->val){
        curNode->val = value;
        return;
    }

    if (curNode->val > value){
        if (curNode->left != nullptr)
            push(curNode->left, value);
        else{
            Node *lNode = new Node();
            lNode->val = value;
            curNode->left = lNode;
        }
    }else{
        if (curNode->right != nullptr)
            push(curNode->right, value);
        else{
            Node *rNode = new Node();
            rNode->val = value;
            curNode->right = rNode;
        }
    }
}

void postOrder(Node* curNode){
    if (curNode->left != nullptr)
        postOrder(curNode->left);
    if (curNode->right != nullptr)
        postOrder(curNode->right);
    cout << curNode->val << "\n";
}

int main(){
    int value;
    while (cin >> value){
        push(root, value);
    }
    postOrder(root);
    return 0;
}*/
