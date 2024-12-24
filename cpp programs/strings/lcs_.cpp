#include<iostream>
using namespace std ;
int lcs(string s, string t)
{
	//Write your code here
	int count=0;
	int j=0;
	int n =s.size();
	int m=t.size();
	int ans=0;
	
	int arr[1000][1000]={0};
	for(int j =0;j<m;j++){
		for(int i =0;i<n;i++){
			if(s[i]==t[j]){
				arr[j][i]=1;
			}
		}
	}
    
    for(int i =0;i<max(m,n);i++){
		for(int j =0;j<min(m,n);j++){
            cout<<arr[i][j]<<" ";
			if(arr[i][j]==1){
                count++;
                
            }

		}
        cout<<endl;
        if(arr[i][m-1]==1){
            if(count>ans){
                ans=count ;
            }
            
            if(i!=n-1){ 
             count=0;
            }
        }
        
	}
    ans=count;


	return ans ;

}


                 
int main(){ 
    string a="abcdb";
    string b = "bcacdhb";
    cout<<lcs(a,b);


    return 0 ;
}