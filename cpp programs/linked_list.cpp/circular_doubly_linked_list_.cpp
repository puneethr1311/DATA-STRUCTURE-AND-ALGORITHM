#include<iostream>
using namespace std ; 

class  node{
    public:
    int data;
    node*next ;
    node*prev ;

    //constructor

    node(int v){
        this->data = v;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_first(node* &head , int data){
    node* temp = new node(data);
    if(head==NULL){
        temp ->next = temp;
        temp->prev = temp;
        head = temp;
    }else{
        temp->next = head;
        head->prev = temp;
        node* ptr = head;
        while(ptr->next!=head){
            ptr=ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;

        head = temp;
        return ;
       
    }
}
void print(node* head){
    if(head==NULL){
        cout<<"this is empty linked list ! ";
        cout<<endl;
    }else{
        cout<<"element of the linked list are : "<<endl;
        node*ptr = head;
        while(ptr->next!=head){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<ptr->data<<" ";
    }
    cout<<endl;
}

int main(){ 
    node* head = NULL;
    print(head);

    insert_at_first(head,10);
    print(head);

    insert_at_first(head,20);
    print(head->next);

    insert_at_first(head,30);
    print(head->next->next);//this confirm us that is circular doubly linked list !

    insert_at_first(head,40);
    print(head);

    insert_at_first(head,50);
    print(head->prev);

    return 0 ;
}