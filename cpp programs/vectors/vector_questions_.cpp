#include <iostream>
#include <vector>
using namespace std;

vector<int> findCommonElements(vector<int> &a, vector<int> &b, vector<int> &c)
{
    // Write your code here
    int n = a.size();
    int m =b.size();
    int p = c.size();

    int i =0;
    int j =0;
    int k =0;

    vector<int>ans ;
    while(i<n&&j<m){
        if(a[i]==b[j]){
            if(binary_search(c,a[i],p)==true){
                ans.push_back(a[i]);
                i++;
                j++;
            }else if(a[i]>b[j]){
                j++;
            }else{
                i++;
            }
            
        }
    }
    return ans;

    
}

bool binary_search(vector<int> a,int k,int len){
    int i =0;
    int j=len-1;

    int mid ;
    while(i<=j){
        mid = i+(j-i)/2;

        if(a[mid]==k){
            return true;
        }else if(a[mid]<k){
            i=mid+1;
        }else{
            j=mid-1;
        }
    }
    return false;
}
int main(
    vector<int>a(1,2,3,4,5);
    vector<int>b(3,4,5);

)