#include<bits/stdc++.h>
using namespace std;

//structure of Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};
// reverse levelorder traversal
vector<int> reverseLevelOrder(Node *root)
{
    queue<Node*> q;
    stack<int> s;
    vector<int> ans;
    if(!root){
        return ans;
    }
    else{
        q.push(root);
        while(!q.empty()){
            struct Node* first = q.front();
            s.push(first->data);
            q.pop();
            if(first->right){q.push(first->right);}
            if(first->left){q.push(first->left);}
        }
        
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        
        return ans;
    }
    
}