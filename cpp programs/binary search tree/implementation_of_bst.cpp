#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<climits>
#include<string>
#include<utility>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<cmath>
#include<functional>
#include<deque>
#include<list>
#include<chrono>
                    
using namespace std ; 

class node{
    public:
    int data ;
    node*left;
    node*right;

    //constructor
    node(int x){
        this->data = x;
        this->left = NULL;
        this->right = NULL;
    }
};

//insertion in bst 
void insert(node* &croot, int key){
    if(croot==NULL){
        croot = new node(key);
    }else{
        node* prev = NULL;
        node* root = croot;
        while(root!=NULL){
            prev = root;
            if(key==root->data) return ;
            else if(key<root->data) root = root->left;
            else root=root->right;
        }
        node* temp = new node(key);
        if(key<prev->data) prev->left = temp;
        else prev->right = temp;
    }
}
void inorder_traversal(node* root){
    if(root!=NULL){
        inorder_traversal(root->left);
        cout<<root->data<<" ";
        inorder_traversal(root->right);
    }
}
node* search(node* root , int val){
    if(root==NULL) return NULL;
    if(root->data==val) return root;
    else if(root->data>val) return search(root->left,val);
    else return search(root->right,val);
}
string ispresent(node*root,int val){
    if(search(root,val)!=NULL) return "yes";
    else return "no";
}

//deletion of nodes in bst 
node* inorderPredecessor(node* root){
    root = root->left;
    while(root->right!=nullptr){
        root = root->right;
    }
    return root;
}
node* deletion(node* root , int key ){
    if(root==NULL) return NULL;
    if(key<root->data){
        root->left = deletion(root->left,key);
    }
    else if(key>root->data){
        root->right = deletion(root->right,key);
    }
    else{
        if(root->left==NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }else if(root->right==NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        node *iop = inorderPredecessor(root);
        root->data = iop->data;
        root->left = deletion(root->left,iop->data);
    }
    return root;
}
node* create_bst(node* root){
    //insertion of nodes
    insert(root,10);
    insert(root,20);
    insert(root,5);
    insert(root,15);
    insert(root,8);
    insert(root,17);
    insert(root,24);
    insert(root,11);
    insert(root,21);
    insert(root,4);
    insert(root,25);
    insert(root,19);
    insert(root,12);
    insert(root,13);
    insert(root,14);
    insert(root,16);
    insert(root,18);
    insert(root,31);
    insert(root,35);
    insert(root,32);
    insert(root,34);
    insert(root,120);
    insert(root,235);
    insert(root,193);
    return root;
}
// int main(){ 
//     //creation
//     node* root = NULL;
//     root = create_bst(root);
    
//     //traversal
//     cout<<"inorder traversal of bst : ";
//     inorder_traversal(root);
//     cout<<endl;

//     //searching 
//     cout<<ispresent(root,8)<<endl;
//     cout<<ispresent(root,2)<<endl;
//     cout<<ispresent(root,15)<<endl;
    

//     //deletion of nodes 
//     deletion(root, 10);
//     cout<<endl;
//     inorder_traversal(root);

//     deletion(root, 5);
//     cout<<endl;
//     inorder_traversal(root);
//     return 0 ;
// }