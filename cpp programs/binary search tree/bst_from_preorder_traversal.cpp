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

node* bst(vector<int>& pre , int &index , int bound){
    if(index==pre.size() || pre[index]>bound) return NULL;
    node* root = new node(pre[index]);
    index++;
    root->left = bst(pre,index,root->data);
    root->right = bst(pre,index,bound);
    return root;
}
int main(){ 
    
    int index = 0;
    vector<int> pre = {10,5,4,8,20,15,17,24,11,19,12,13,14,16,18,31,25,35,32,34,120,235,193};
    node* root = bst(pre,index,INT_MAX);

    inorder_traversal(root);
    return 0 ;
}