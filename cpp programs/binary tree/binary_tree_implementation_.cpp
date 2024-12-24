#include <iostream>
#include<vector>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    // constructor
    node(int data)
    {

        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void pre_order_traversal(node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        pre_order_traversal(root->left);
        pre_order_traversal(root->right);
    }
}

void post_order_traversal(node *root)
{
    if (root != NULL)
    {
        post_order_traversal(root->left);
        post_order_traversal(root->right);
        cout << root->data << " ";
    }
}
void in_order_traversal(node *root)
{
    if (root != NULL)
    {
        in_order_traversal(root->left);
        cout << root->data << " ";
        in_order_traversal(root->right);
    }
}

void level_order_traversal(node *root)
{
    cout << endl;
    cout << "level order traversal of the binary tree  : " << endl;
    queue<node *> q;
    q.push(root);
    // as one level completed insert null
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
int height_of_the_binary_tree_using_dfs(node* root){
    if(root==NULL){
        return 0 ;
    }
    else
    {
        int dl = height_of_the_binary_tree_using_dfs(root->left);
        int dr  = height_of_the_binary_tree_using_dfs(root->right);
        //height of tree in term of nodes and if want in term of edges do -1 at last ans
        
        return max(dl,dr)+1;
    }
}
int height_of_the_binary_tree_using_level_order_traversal(node *root)
{
    queue<node *> q;
    vector<node*> ans ;
    q.push(root);
   
    
    // as one level completed insert null
    q.push(NULL);

    while (!q.empty())
    {

        node *temp = q.front();
        q.pop();
        ans.push_back(temp);
        if (temp == NULL)
        {
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    int n = ans.size();
    int res =0;
    for(int i =0;i<n;i++){
        if(ans[i]==NULL){
            res++;
        }
    }
    return res;

}

bool searching(node *root, int key)
{
    if (root == NULL)
    {
        return false;
    }

    if (root->data == key)
    {
        return true;
    }
    bool res = searching(root->left, key);
    if (res)
    {

        return true;
    }
    bool res2 = searching(root->right, key);
    if (res2)
    {
        return true;
    }
    return false;
}

bool find_path_of_element(node *root, int key, vector<int> &ans)
{
    // base case
    if (root == NULL)
    {
        return false;
    }
    ans.push_back(root->data);
    if (root->data == key)
    {
        return true;
    }
    bool left = find_path_of_element(root->left, key, ans);
    bool right = find_path_of_element(root->right, key, ans);
    if (left == false && right == false)
    {
        ans.pop_back();
        return false;
    }
    else
    {
        return true;
    }
}
void count_leaf_node(node *root, int &count)
{
    if (root != NULL)
    {
        if (root->left == NULL && root->right == NULL)
        {
            count++;
        }
        count_leaf_node(root->left, count);
        count_leaf_node(root->right, count);
    }
}

node *binary_tree(node *root)
{

    cout << "enter the data  : ";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {

        return NULL;
    }
    cout << "enter the data for inserting in left of " << root->data << " : ";
    root->left = binary_tree(root->left);

    cout << "enter the data for inserting in right of " << root->data << " : ";
    root->right = binary_tree(root->right);

    return root;
}

void print_vector(vector<int> ans)
{
    cout << endl;
    cout << "printing the vector : ";
    int n = ans.size();
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    // node* root = NULL;
    // creation of binary tree according to user :
    // root = binary_tree(root);

    // initializing the binary tree :

    node *root = new node(1);

    node *el2 = new node(2);
    node *el3 = new node(3);
    node *el4 = new node(4);
    node *el5 = new node(5);
    node *el6 = new node(6);
    node *el7 = new node(7);
    node *el8 = new node(8);

    root->left = el2;
    root->right = el3;
    el2->left = el4;
    el2->right = el5;
    el5->left = el8;
    el3->left = el6;
    el3->right = el7;

    // pre order traversal
    //  cout<<"pre_order_traversal : "<<endl;
    //  pre_order_traversal(root);

    // cout<<endl;

    // cout<<"post_order_traversal : "<<endl;
    // post_order_traversal(root);

    // cout<<endl;

    // cout<<"in_order_traversal : "<<endl;
    // in_order_traversal(root);

    cout << endl;

    // searching
    //  int key ;
    //  cout<<"enter the element you want to seach in tree : ";
    //  cin>>key;
    //  if(searching(root,key)){
    //      cout<<"element is found ! "<<endl;
    //  }else{
    //      cout<<"element is not found ! "<<endl;
    //  }

    // vector<int> ans ;
    // if(find_path_of_element(root,key,ans)){
    //     print_vector(ans);
    // }else{
    //     cout<<"element if not present ";
    // }
    // int count = 0 ;

    // count_leaf_node(root, count);
    // cout<<"number of leaf node in this binary tree : "<<count;

    // level order traversal :
    //  level_order_traversal(root);

    //height of the binary tree : 
    // cout<<"height of the binary tree is : ";
    // cout<<height_of_the_binary_tree_using_level_order_traversal(root);

    cout<<"height of the binary tree is : ";
    cout<<height_of_the_binary_tree_using_dfs(root);

    return 0;
}