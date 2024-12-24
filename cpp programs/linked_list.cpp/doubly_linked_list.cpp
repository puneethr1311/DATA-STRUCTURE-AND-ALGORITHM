//creating the doubly linked list and some insertion , deletion and traversal operation 

#include<iostream>

using namespace std ; 
class node{
        public : 
        int data ;
        node* prev;
        node* next;

        //constructor 
        node(int val){
            this->data = val;
            this->next = NULL;
            this->prev = NULL ;
        }
    };

void print(node* head){
    if(head==NULL){
        cout<<"this is empty doubly linked list ! "<<endl;
        return ;
    }else{
        cout<<"elements in the doubly linked list are : "<<endl;
        node*ptr = head ;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next ;
        }
        
    }
    cout<<endl;
}
void insert_at_any_position(node* &head , int data ,int position){
    
    if(position==1){
        node* temp = new node(data);
        temp->next = head ;
        head = temp;
    }else{
        node*temp = new node(data);
        int i = 1;
        node* curr = head ;
        node*pre = NULL;
        while(i<position){
            pre = curr;
            curr=curr->next;
            i++;
        }
        pre->next=temp;
        temp->prev=pre;
        temp->next=curr;
        curr->prev=temp;
    }

}
void insert_at_end(node* &head , int data){
    node* ptr = head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    node* temp = new node(data);
    ptr->next = temp;
    temp->prev= ptr ;
    temp->next = NULL;

}
void delete_at_first(node* &head ){
    node* ptr = head ; 
    
    head = ptr->next;
    head->prev=NULL;
    
    delete ptr ;
   
}

void delete_at_end(node* &head){
    node* ptr= head;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    node* pr = ptr->prev;
    pr->next= NULL;

    ptr->prev = NULL;
    delete ptr ;
}

void delete_at_mid(node* &head, int position){
    node* curr = head ;
    int i =1 ;
    node* pre = NULL;
    while(i<position){
        pre = curr;
        curr =curr->next ;
        i++;

    }
    pre->next = curr->next;
    (curr->next)->prev=pre;

    // curr->prev=NULL;
    // curr->next=NULL;
    delete curr;

}
                 
int main(){ 
    node* head = new node(10);
    
    print(head);

    insert_at_any_position(head, 20 , 1);
    print(head);

    insert_at_any_position(head, 30 , 1);
    print(head);

    insert_at_any_position(head, 40 , 1);
    print(head);

    insert_at_any_position(head,1,4);//except last 
    print(head);

    insert_at_end(head , 100);
    print(head);

    delete_at_first(head);
    print(head);

    delete_at_end(head);
    print(head);

    delete_at_mid(head,2);
    print(head);

    return 0 ;
}