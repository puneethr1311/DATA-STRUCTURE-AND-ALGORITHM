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

//implementation of bst file included with some special functions 
#include "implementation_of_bst.cpp"                   
using namespace std ; 

//ceil  value of key in bst : a lowest possible  val that is greater than equal to key 
int ceil_of_bst(node* root,int key){
    int ans = -1;
    while(root!=NULL){
        if(root->data==key){
            ans = root->data;
            return ans;
        }else if(root->data>key){
            ans = root->data;
            root = root->left;
        }else{
            root = root->right;
        }
    }
    return ans;
}

int main(){ 
    node*root = nullptr;
    root = create_bst(root);

    inorder_traversal(root);

    cout<<endl;

    cout<<ceil_of_bst(root,33);
    return 0 ;
}