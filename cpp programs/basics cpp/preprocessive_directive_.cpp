#include<iostream>//file inclusion pp directive
#define val 5// macros

#define gfg 7
  
#if gfg > 200//conditional compilation
   #undef gfg
   #define gfg 200
#elif gfg < 50
   #undef gfg//other  directives
   #define gfg 50
#else
   #undef gfg
   #define gfg 100
#endif
#pragma startup func1;
void func1(int x){
    std::cout<<x;
}


using namespace std ; 
                 
int main(){ 
    int a=val;
    cout<<a<<endl;
    cout<<gfg;
    

    return 0 ;
}