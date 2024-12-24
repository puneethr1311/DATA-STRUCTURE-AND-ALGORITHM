#include<iostream>
using namespace std ; 

vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) 
{
    // Write your code here.
    vector<int> res;
    int row = n;
    int col = m;

    int count =0;
    int total = row*col;
    int strow = 0;
    int stcol =0;
    int endrow = row-1;
    int endcol = col-1;

    while(count<total){
        //print first row 
        for(int i =strow;count<total&&i<=endcol;i++){
            res.push_back(matrix[strow][i]);
            count++;
        }
        strow++;
        //print ending col
        for(int i =strow;count<total&&i<=endrow;i++){
            res.push_back(matrix[i][endcol]);
            count++;
        }
        endcol--;
        //print ending row
        for(int i =endcol;count<total&&i>=strow;i--){
            res.push_back(matrix[endrow][i]);
            count++;
        }
        endrow--;
        //print starting column 
        for(int i =endrow;count<total&&i>=strow;i--){
            res.push_back(matrix[i][stcol]);
            count++;
        }
        stcol++;
    }
    return res;
}

void print_vector(vector<int> &v, int n){
    cout<<" the vector is : "<<endl;
    for(int i =0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
                 
int main(){ 
    vector<vector<int>>matrix;
    matrix.push_back({1,2,3});
    matrix.push_back({4,5,6});
    matrix.push_back({7,8,9});

    print_vector(spiralPathMatrix(matrix,3,3),9);


    return 0 ;
}