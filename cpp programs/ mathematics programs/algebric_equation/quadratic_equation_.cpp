#include<iostream>
#include<math.h>
using namespace std ; 
                 
int main(){ 
    double a,b ,c;
    std::cout<<"enter the value of a,b,c for the quadratic equation ax^2+bx+c=0 : "<<endl;
    std::cin>>a>>b>>c;
    

    
    double d=(b*b)-(4*a*c);
    double x1,x2;
    if(d<0){
        
        std::cout<<"now the roots of the quadratic equation are: "<<endl;
        std::cout<<-b/(2*a)<<"+i"<<sqrt(-d)/(2*a)<<" and "<<-b/(2*a)<<"-i"<<sqrt(-d)/(2*a); 
    }else if(d==0){
        std::cout<<"now the roots of the quadratic equation are: "<<endl;
        std::cout<<-b/(2*a)<<" and "<<-b/(2*a);
    }else{
        std::cout<<"now the roots of the quadratic equation are: "<<endl;
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        std::cout<<x1<<" and "<<x2;
    }

    return 0 ;
}