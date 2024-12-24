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
//implementation of bst file included with some special functions 
#include "implementation_of_bst.cpp"     
node* lca(node* root , int n1 ,int n2){
    if(root == NULL) return NULL;
    if(root->data>n1 && root->data>n2)  return lca(root->left,n1,n2);
    if(root->data<n1 && root->data<n2)  return lca(root->right,n1,n2);
    return root;
}
int main(){ 
    node* root = create_bst(NULL);
    inorder_traversal(root);
    cout<<endl;

    cout<<lca(root,14,18)->data;


    return 0 ;
}