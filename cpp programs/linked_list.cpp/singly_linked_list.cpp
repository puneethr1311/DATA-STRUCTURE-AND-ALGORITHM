//creating the singly linked list  : 

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

void linkedlisttraversal(node*ptr){
    cout<<"element of linked list are : "<<endl;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

void insert_at_first(node* &head , int data){
    node*temp=new node(data);
    if(head==NULL){
        head=temp;
    }else{
        temp->next = head ;
        head = temp;
    }
    
    
}

void insert_at_end(node* &head, int data){
    node* temp = new node(data);
    node*ptr = head ;
    while(ptr->next!=NULL){
        ptr=ptr->next;

    }
    ptr->next =temp;
}
void insert_at_middle(node* &head , int data,int position ){
    node*prev=NULL;
    node*curr = head ;
    if(position==1){
        
        insert_at_first(head,data);
        return;
    }

    int count = 1;
    
    while(count<position&&curr!=NULL){
        curr=curr->next ;
        count++;
    }
    prev = head;
    int cp =1;
    while(cp<position-1){
        prev = prev->next;
        cp++;
    }

    node*temp = new node(data);
    prev->next = temp;
    temp->next=curr;



}

void delete_at_end(node* &head){
    node*ptr = head ;
    int i =1;
    while(ptr->next!=NULL){
        ptr=ptr->next;
        i++;
    }
    int j =1;
    node*prev = head ;
    while(j<i-1){
        prev= prev->next;
        j++;
    }
    prev->next = NULL;
    delete ptr ;

}
void delete_at_first(node* &head){
    node* ptr = head;
    head =head->next;
    delete ptr ;
    
}

void delete_at_position(node* &head,int position){
    if(position==1){
        delete_at_first(head);
        return ;
    }
    node* prev = NULL;
    node*curr = head ;
    int i = 1;
    while(i<position){
        prev=curr;
        curr=curr->next;
        i++;
        

    }
    prev->next = curr->next;
    
    delete curr;


}
int  get_length(node* head){
    node* ptr= head ;
    int count = 1;
    while(ptr->next!=NULL){
        ptr =ptr->next;
        count++;
    }
    cout<<endl;
    // cout<<"length of the linked list is : "<< count <<endl;
    return count ;
}

node* middle_element(node* head){
    node* ptr  = head ;
    int len = get_length(head);
    int mid = len/2;
    int i =1;
    while(i<=mid){
        ptr=ptr->next;
        i++;

    }
    return ptr;
}

node* reverse_a_linked_list(node* head){
    cout<<"reversing a linked list ! "<<endl;
    node* ptr = head;
    node*rev = NULL;
    while(ptr!=NULL){
        insert_at_first(rev,ptr->data);
        ptr=ptr->next;
    }
    return rev;

}
void delete_node(node* &head,node* temp){
    if(head==NULL){
        return ;
    }
    node* ptr = head->next ;
    node* prev = head;

    while(ptr!=NULL){
        if(ptr ==  temp){
            prev->next= ptr->next;
            
            delete temp;
          
            return;
        }
        prev = ptr;
        ptr=ptr->next;
    }

}
                 
int main(){ 
    
    node*head = new node(10);
    
    linkedlisttraversal(head);

    insert_at_first(head , 15);

    linkedlisttraversal(head);


    insert_at_first(head , 20);

    linkedlisttraversal(head);

    insert_at_end(head,30);

    linkedlisttraversal(head);

    insert_at_middle(head, 5 , 5);
    linkedlisttraversal(head);

    insert_at_end(head,50);

    linkedlisttraversal(head);

    // delete_at_end(head);
    // linkedlisttraversal(head);

    // delete_at_first(head);
    // linkedlisttraversal(head);

    // delete_at_position(head ,2);
    // linkedlisttraversal(head);
    // get_length(head);
    // cout<<middle_element(head)->data;

    cout<<endl;
    cout<<head<<endl;
    cout<<&head->data<<endl;
    cout<<&head->next<<endl;

    // linkedlisttraversal(reverse_a_linked_list(head));
    delete_node(head,head->next->next);
    linkedlisttraversal(head);


    return 0 ;
}