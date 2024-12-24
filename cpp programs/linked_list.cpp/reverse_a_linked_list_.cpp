#include<iostream>
using namespace std ; 
class node{
    public:
    int data ;
    node* next;

    //constructor
    node(int data){
        this->data = data;
        this->next=NULL;
    }
    //destructor 
    // ~node(){
    //     if(this->next!=NULL){
    //         delete next;
    //         this->next =NULL;
    //     }
    // }
};

void insert_at_first(node* &head , int data){
    node*temp=new node(data);
    if(head==NULL){
        head=temp;
    }else{
        temp->next = head ;
        head = temp;
    }
    
    
}
//iterative way using insertion o(n)
node* reverse_a_linked_list_1(node* head){
    cout<<"reversing a linked list ! "<<endl;
    node* ptr = head;
    node*rev = NULL;
    while(ptr!=NULL){
        insert_at_first(rev,ptr->data);
        ptr=ptr->next;
    }
    return rev;

}

//iterative way using 3 ptr  o
void reverse_a_linked_list_2(node* &head){

    cout<<"reversing a linked list ! "<<endl;
    node* prev = NULL;
    node*curr = head;
    node*forw = head->next;

    while(curr!=NULL){
        curr->next=prev;
        if(forw==NULL){
            head=curr;
        }
        prev = curr;
        
        curr=forw;
        if(forw!=NULL){
            
            forw=forw->next;
        }
        
    }
    

}


void linkedlisttraversal(node*ptr){
    cout<<"element of linked list are : "<<endl;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main(){ 
    node* head= NULL;

    insert_at_first(head,10);
    insert_at_first(head,20);
    insert_at_first(head,30);
    insert_at_first(head,40);
    insert_at_first(head,50);

    linkedlisttraversal(head);

    reverse_a_linked_list_2(head);

    linkedlisttraversal(head);


    return 0 ;
}