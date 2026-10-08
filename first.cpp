#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int value)
    {
        data=value;
        left=NULL;
        right=NULL;
    }
};
 void inoder(node*root){
     if(root==NULL)
     return;
     inoder(root->left);
     cout<<root->data;
     inoder(root->right);
 }



int main(){
    node* root=new node(1);
    root-> left=new node(2);
      root-> left=new node(3);
        root-> left->left =new node(4);
          root-> left->right=new node(5);
          cout<<"inoder trasvers: ";
          inoder (root);
          return 0;
}

