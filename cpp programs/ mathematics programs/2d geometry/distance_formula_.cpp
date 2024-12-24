#include<iostream>
#include<algorithm>
#include<utility>
#include<math.h>
using namespace std ; 
                 
int main(){ 
    pair<double,double> pt1;
    std::cout<<"enter the point 1 in manner of (x1,y1) : "<<endl;
    std::cin>>pt1.first>>pt1.second;

    std::cout<<endl;

    pair<double,double> pt2;
    std::cout<<"enter the point 2 in manner of (x2,y2) : "<<endl;
    std::cin>>pt2.first>>pt2.second;

    double res=0;
    res=sqrt(((pow((pt2.first-pt1.first),2)+pow((pt2.second-pt1.second),2))));
    std::cout<<"distance between pt1 and pt2 is : "<<res;



    return 0 ;
}