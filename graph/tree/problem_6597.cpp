/*
//
// Created by cho on 23. 1. 13.
//
#include <iostream>

using namespace std;

string pre, in;

typedef struct Node{
   char element;
   Node* left;
   Node* right;
}Node;

class BinaryT{
public:
    BinaryT(){
        root = new Node();
        root->element = pre[0];
    }
    
    Node *cutTree(string preO, string inO) {
        if (preO.empty() || inO.empty())
            return nullptr;

        int idx;
        for (int i = 0; i < inO.size(); ++i)
            if (inO[i] == preO[0]){
                idx = i;
                break;
            }

        Node *newNode = new Node();
        newNode->element = preO[0];
        newNode->left = cutTree(preO.substr(1, idx), inO.substr(0, idx));
        newNode-> right = cutTree(preO.substr(1 + idx, preO.size() - idx), inO.substr(idx + 1, in.size() - idx));

        return newNode;
    } 
    
    void initTree(){
        int idx;
        for (int i = 0; i < in.size(); ++i)
            if (in[i] == pre[0]){
                idx = i;
                break;
            }

        string leftPre = pre.substr(1, idx);
        string rightPre = pre.substr(1 + idx, pre.size() - idx);
        string leftIn = in.substr(0, idx);
        string rightIn = in.substr(idx + 1, in.size() - idx);
        
        root->left = cutTree(leftPre, leftIn);
        root->right = cutTree(rightPre, rightIn);
    }
    void postOrder(Node* cur){
        if (cur == nullptr)
            return;

        postOrder(cur->left);
        postOrder(cur->right);
        cout << cur->element;
    }

    Node* getRoot() const {
        return root;
    }

private:
    Node* root;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string inp;
    while (getline(cin, inp) && inp != ""){
        int f = inp.find(' ');
        pre = inp.substr(0, f);
        in = inp.substr(f + 1, inp.length() - f - 1);

        BinaryT t;
        t.initTree();
        t.postOrder(t.getRoot());
        cout << endl;
    }
    return 0;
}*/
