//subtraction can done similarly
#include<iostream>
using namespace std ; 
                 
int main(){ 
    int n;
    int m;

    cout<<"enter the order of the square matrix : ";
    
    cin>>m>>n;
    //order = m*n
    int a[m][n];
    cout<<"enter the elements of the matric a : "<<endl;
    for(int i =1;i<=m;i++){
        for(int j=1;j<=n;j++){
            
            cin>>a[i][j];
        }
    }
    int b[m][n];
    cout<<"enter the elements of the matric b : "<<endl;
    for(int i =1;i<=m;i++){
        for(int j=1;j<=n;j++){
            
            cin>>b[i][j];
        }
    }
    int c[m][n];
    for(int i =1;i<=m;i++){
        for(int j=1;j<=n;j++){
            
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"matric is: "<<endl;
        for(int i =1;i<=m;i++){
        for(int j=1;j<=n;j++){
            
            cout<<" "<<c[i][j]<<" ";

        }
        cout<<endl;
    }

    return 0 ;
}