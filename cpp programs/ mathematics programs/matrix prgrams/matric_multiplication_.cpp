#include<iostream>
using namespace std ; 
                 
int main(){ 
    int m,n;
    cout<<"enter the order of the matrix a (m*n) : ";
    cin>>m>>n;
    int a[m][n];
    
    int p,q;
    cout<<"enter the order of the matrix b (p*q) : ";
    cin>>p>>q;
    int b[p][q];
    int c[m][q];
    for(int i =1;i<=m;i++){
        for(int j=1;j<=q;j++){
            
            c[i][j]=0;
        }
        }

    // memset( c, 0, sizeof(c) );
    if(n==p){
        cout<<"enter the elements of the matrix a ;"<<endl;
        for(int i =1;i<=m;i++){
        for(int j=1;j<=n;j++){
            
            cin>>a[i][j];
        }
        }

        cout<<"enter the elements of the matrix b ;"<<endl;
        for(int i =1;i<=p;i++){
        for(int j=1;j<=q;j++){
            
            cin>>b[i][j];
        }
        }
        for(int i =1;i<=m;i++){
            for(int j=1;j<=q;j++){
                for(int k =1;k<=p;k++){
                    c[i][j]=c[i][j] + (a[i][k]*b[k][j]);
                }
                

            }
        }

        cout<<"matrix a*b is "<<endl;
        for(int i =1;i<=m;i++){
        for(int j=1;j<=q;j++){
            
            cout<<" "<<c[i][j]<<" ";

        }
        cout<<endl;
        }



    }
    else{
        cout<<"this matrix multiplication is wrong ! ";
        }

    return 0 ;
}