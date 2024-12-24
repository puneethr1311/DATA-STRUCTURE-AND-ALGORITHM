#include<iostream>
#include<set>
using namespace std ; 
                 
int main(){ 
    set<int > s1;//default elements are in ascending order 
    s1.insert(1);
    s1.insert(12);
    s1.insert(13);
    s1.insert(13);
    s1.insert(12);
    s1.insert(123);

    set<int>:: iterator itr = s1.begin();
//.end()iterator : pointing to next of last element of the container
//.begin() iterator : pointing to first element of the container 
    cout<<"elements of the set are : ";
    while(itr!=s1.end()){
       
        cout<<*itr<<" ";
        itr++;
    }
    cout<<endl;

    cout<<s1.size()<<endl;

    cout<<s1.max_size()<<endl;

    cout<<*s1.find(10);

    return 0 ;
}