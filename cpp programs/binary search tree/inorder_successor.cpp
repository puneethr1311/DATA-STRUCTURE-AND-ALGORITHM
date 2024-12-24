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

#include "implementation_of_bst.cpp"                   
//inorder successor of a node in bst
node* inorder_succesor(node* root , int p)
{
    node* ans = NULL;
    while(root!=NULL){
        if(p >=root->data){
            root = root->right;
        }else{
            ans = root;
            root = root->left;
        }
    }
    return ans;
}          
int main(){ 
    node* root = create_bst(NULL);
    inorder_traversal(root);
    cout<<endl;
    cout<< inorder_succesor(root,20)->data;

    return 0 ;
}