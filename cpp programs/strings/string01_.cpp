#include<iostream>
#include<string>
using namespace std ; 
                 
int main(){ 
    char name[20];//char array
    cout<<"enter the name : ";
//     // cin>>name;//after the space,tab ,new line string are declined by processor
//     string name2;
// //for full name
//     getline(cin,name2);
//     cout<<endl;

//     // cout<<name;
//     // cout<<endl;
//     cout<<name2;
    cin>>name;
    cout<<endl;
    // cout<<name[3];
    
    int count[26]={0};
    int n = strlen(name);
    int index;
    for(int i =0; i< n;i++){
        index =name[i]-'a';
        count[index]++;
        }
    cout<<"count of the elements are : "<<endl;
    for(int i =0; i<26  ;i++){
        cout<<" "<<count[i];
    }


    return 0 ;
}