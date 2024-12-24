#include<iostream>
using namespace std ; 

class node{
    public : 
        int data ;
        node* next;

        //constructor : 
        node(int data){
            this->data = data ;
            
            this->next = NULL ;
        }    

};
class stack{
    public : 
        int top ;
        int size;
        node* ptr ;

        stack(int size){
            this->size = size ;
            this->top =-1;
            this->ptr = NULL;
        }

        void push(int val){
            if(top==size-1){
                cout<<"stack overflow ! "<<endl;
            }else{
                top++;
                if(top==0){
                    
                }
            }
        }
};
                 
int main(){ 
    stack s(5);
    s.push(10);

    

    return 0 ;
}