#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        node* left;
        int data;
        node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* createTree(node* root){
    int data;
    cout<<"Enter data:  "<<endl;
    cin>>data;
    root=new node(data);
    if(data==-1)
        return NULL;
    cout<<"Enter left of    "<<data<<"      "<<endl;
    root->left=createTree(root->left);
    cout<<"Enter right of   "<<data<<"      "<<endl;
    root->right=createTree(root->right);
    return root;
}
void preOrder(node* root){
    if(root==NULL)
        return;
    cout<<root->data<<"  ";
    preOrder(root->left);
    preOrder(root->right);
}
int main(){
    node* root=NULL;
    root=createTree(root);
    preOrder(root);
    return 0;
}