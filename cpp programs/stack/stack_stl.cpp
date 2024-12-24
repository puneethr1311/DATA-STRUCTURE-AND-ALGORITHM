#include<iostream>
#include<stack>

using namespace std ; 
                 
int main(){ 
    stack<int> s1 ;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(15);

    cout<<s1.top();
    cout<<endl;
    cout<<s1.empty();

    cout<<endl;

    cout<<s1.size()<<endl;



    return 0 ;
}