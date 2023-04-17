#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

vector<int> Get_ans(Node* node){
        queue<Node*> Q;
        vector<int> ans;
        Q.push(node);
        while(!Q.empty()){
            struct Node* first = Q.front();
            Q.pop();
            ans.push_back(first->data);
            if(first->left){Q.push(first->left);}
            if(first->right){Q.push(first->right);}
        }
        return ans;
    }
    vector<int> levelOrder(Node* node)
    {
      vector<int> ans;
      if(node){
          ans = Get_ans(node);
          return ans;
      }
      else{
          return ans;
      }
    }