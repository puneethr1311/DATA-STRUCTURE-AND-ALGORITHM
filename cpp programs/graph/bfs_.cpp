#include<iostream>
#include<queue>
#include<unordered_map>
#include<vector>
#include<list>


using namespace std ; 
void prepareadjlist(unordered_map<int,list<int> > &adjlist , vector<pair<int,int> > edges){
    for(int i =0;i<edges.size();i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
}
void bfs(unordered_map<int,list<int> > adjlist ,unordered_map<int,bool> &visited ,vector<int>&ans , int node ){
    queue<int> q ;
    q.push(node);
    while(!q.empty()){
        int first_node = q.front();
        q.pop();

        ans.push_back(first_node);
        for(auto i : adjlist[first_node]){
            if(!visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }


    }

}  
void print_vector(vector<int> ans ){
    cout<<"bfs is : ";
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" , ";
    }
}           
int main(){ 
    vector<pair<int,int> > edges ;
    int v ;
    cout<<"enter the number of vertex : ";
    cin>>v;
    
    int e ;
    cout<<"enter the number of edges : ";
    cin>>e;
    cout<<"enter the nodes between the edges : "<<endl;
    for(int i =0;i<e;i++){
        pair<int,int> p ;
        cin>>p.first>>p.second;
        edges.push_back(p);
    }
    unordered_map<int,list<int> > adjlist ;
    
    prepareadjlist(adjlist,edges);

    vector<int> ans ;

    unordered_map<int ,bool> visited ;
    
    for(int i = 0 ;i<v;i++){
        visited[i+1]=false;
    }

    for(int i =0;i<v;i++){
        if(!visited[i]){
            bfs(adjlist,visited,ans, i);
        }
    }
    
    print_vector(ans);



    return 0 ;
}