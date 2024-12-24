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
bool validate_bst(node* root , int min , int max){
    if(root==NULL) return true;
    if(root->data<min || root->data>max) return false;
    return validate_bst(root->left,min,root->data) && validate_bst(root->right,root->data,max);
}

int main(){ 
    node* root = create_bst(NULL);
    inorder_traversal(root);
    cout<<endl;
    cout<<validate_bst(root,INT_MIN,INT_MAX);
    return 0 ;
}