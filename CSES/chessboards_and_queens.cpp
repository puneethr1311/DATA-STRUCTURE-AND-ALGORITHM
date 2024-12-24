#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<numeric>

using namespace std ; 

int ans = 0;
bool is_safe(int row ,int col , vector<vector<char> >&board){
    int drow = row;
    int dcol = col;
    while(row>=0 && col>=0){
        if(board[row--][col--]=='Q') return false;
    }
    row = drow;
    col = dcol;
    while(col>=0){
        if(board[row][col--]=='Q') return false;
    }
    row = drow;
    col = dcol;
    while(row<8 && col>=0){
        if(board[row++][col--]=='Q') return false;
    }
    return true;
}
void solve(int col,vector<vector<char> >&board){
    if(col==8){
        ans++;
        return;
    }
    for(int row = 0;row<8;row++){
        if(is_safe(row,col,board)&&board[row][col]=='.'){
            board[row][col]='Q';
            solve(col+1,board);
            board[row][col]='.';
        }
    }
}            
int main(){ 
    vector<vector<char> >board(8,vector<char>(8));
    for(int i = 0;i<8;i++){
        for(int j = 0;j<8;j++){
            cin>>board[i][j];
        }
    }
    solve(0,board);
    cout<<ans;

    return 0 ;
}