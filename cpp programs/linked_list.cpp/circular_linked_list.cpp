// creating the circular linked list : 

#include<iostream>
using namespace std ; 

class node{
    public :
    int data ;
    node*next ;
     
    node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void insert_at_first(node* &head,int data){
    node*temp = new node(data);
    if(head==NULL){
        
        temp->next=temp;
        head = temp;
    }else{
        node* ptr = head;
        temp->next = head;
        while(ptr->next!=head){
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void insert_at_any_position(node* &head, int data , int position){
    if(position ==1){
        insert_at_first(head, data);
        return ;
    }else{
        node*ex = head;
        int i = 1 ;
        node* prev = NULL;
        node*curr = head;
        while(i<position){
            prev = curr;
            curr=curr->next;
            i++;
        }
        node*temp = new node(data);
        prev->next = temp;
        temp->next = curr;
        head= ex;

    }
}
void delete_at_first(node* &head){
    node*ptr = head ;
    node*curr = head;
    while(curr->next!=head){
        curr = curr->next;
    }
    curr->next=head->next;
    head = curr->next;
    delete ptr;
}
void delete_at_end(node* &head){
    node*ptr = head ;
    node*prev = NULL;
    while(ptr->next!=head){
        prev = ptr;
        ptr=ptr->next;

    }
    
    prev->next=ptr->next;
    delete ptr;

}
void delete_at_mid(node* &head,int position){
    int i = 1;
    node*curr = head;
    node*prev = NULL;
    while(i<position){
        prev=curr;
        curr=curr->next;
        i++;
    }
    prev->next = curr->next;
    
    delete curr;
}
void print(node*head){
    node*ptr = head;
    if(head!=NULL){
        cout<<"elements in the circular linked list are : "<<endl;
         do{
        cout<<ptr->data<<" ";
        ptr=ptr->next ;
        
        }while(ptr!= head);
    }else{
        cout<<"this is the empty circular linked list !"<<endl;
    }
    cout<<endl;
   
}
                 
int main(){ 
    node* head = NULL ;
    print(head); 

    insert_at_first(head, 10);
    print(head);
    insert_at_first(head , 20);
    print(head);

    insert_at_first(head , 30);
    print(head);

    print(head->next);//this confirmed that circular linked list is formed 

    insert_at_any_position(head , 5,2);
    print(head);

    insert_at_first(head,1);
    print(head);

    delete_at_first(head);
    print(head);

    delete_at_end(head);
    print(head);

    delete_at_mid(head,2);
    print(head);


    return 0 ;
}