#include<iostream>
using namespace std ; 
                 
int main(){ 
    int n ;
    cin>>n;
    for(int i = 1;i<=n;i++){
        unsigned long long total_ways = static_cast<unsigned long long>(i) * i * (i * i - 1) / 2;
        unsigned long long attack_ways = 0;
        if(i>2) attack_ways = 4ULL *(i-1)*(i-2);
        cout<<total_ways-attack_ways<<endl;
    }

    return 0 ;
}