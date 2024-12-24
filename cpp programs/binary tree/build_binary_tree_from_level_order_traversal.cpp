#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class node{
    public:
    int data ;
    node* left;
    node* right;
    //constructor
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right =NULL;
    }
};
node* build(node* root){
    cout<<"enter the data : "<<endl;
    int data ;
    cin>>data;
    root = new node(data);
    if(data==-1) return NULL;
    queue<node*> q ;
    q.push(root); 
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<"enter the data for inserting in left of "<<temp->data<<endl;
        int left_data ;
        cin>>left_data;
        if(left_data!=-1){
            temp->left = new node(left_data);
            q.push(temp->left);
        }
         cout<<"enter the data for inserting in right of "<<temp->data<<endl;
        int right_data ;
        cin>>right_data;
        if(left_data!=-1){
            temp->right = new node(right_data);
            q.push(temp->right);
        }
    }
    return root;
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
int main(){
    node* root = build(NULL);
    level_order_traversal(root);
    return 0;
}