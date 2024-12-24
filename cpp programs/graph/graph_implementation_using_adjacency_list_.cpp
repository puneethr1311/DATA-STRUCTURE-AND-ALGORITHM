#include<iostream>
#include<unordered_map>
#include<list>
using namespace std ; 


class graph{
    public: 
    unordered_map<int,list<int> >adjlist ;
    
    void addedge(int u , int v , bool direction){
        //direction=0 -> undirected graph 
        //direction=1 -> directed graph 
        adjlist[u].push_back(v);
        if(direction ==0)
        {
            adjlist[v].push_back(u);
        }
    }
    void printadjlist(){
        for(auto i : adjlist){
            cout<<i.first<<" -> ";
            for(auto j : i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
    
};

int main(){ 
    int n ; 
    cout<<"enter the number of nodes : ";
    cin>>n;

    int m ; 
    cout<<"enter the number of edges : ";
    cin>>m;

    graph g ;
    
    for(int i =0;i<m;i++){
        int u, v;
        cin>>u>>v;
        g.addedge(u,v,0);
    }
    g.printadjlist();

    return 0 ;
}