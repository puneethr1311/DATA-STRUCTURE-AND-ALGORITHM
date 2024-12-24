#include<iostream>
using namespace std ; 

class stack{
    public: 
    int top ;
    int size ;
    int*arr;

    //constructor
    stack(int size){
        this->size = size;
        this->top = -1;
        int*arr =new int[size];
    }
    void push(int data){
        if(this->top==this->size-1){
            cout<<"stack overflow "<<endl;
        }else{
            this->top++;
            this->arr[this->top]=data;
            cout<<data<<" element is added "<<endl;

        }
    }

    void pop(){
        if(this->top==-1){
            cout<<"stack underflow "<<endl;
        }else{
            int val = this->arr[this->top];
            this->top--;
            cout<<val<<" element is deleted "<<endl;
        }

    }
    void number_of_elements(){
        cout<<"total "<<this->top+1<<" elements are present"<<endl;
    }

    void peak_element(){
        if(this->top==-1){
            cout<<"stack is empty ,no element is present "<<endl;
        }else{
            cout<<"peak element of this stack is "<<this->arr[this->top]<<endl;
        }
    }

};
                 
int main(){ 
    stack stk(5);
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.number_of_elements();
    stk.push(40);
    stk.peak_element();
    stk.push(50);

    stk.push(20);

    stk.pop();
    stk.pop();
    stk.peak_element();
    stk.pop();
    stk.pop();
    stk.number_of_elements();
    stk.pop();
    stk.pop();
    

    

    return 0 ;
}