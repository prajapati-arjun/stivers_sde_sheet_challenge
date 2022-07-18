#include<unordered_map>
#include<list>
#include<queue>
bool isCycleBFS(int node , unordered_map<int,bool> &visited , unordered_map<int,list<int>> &adj){
    unordered_map<int,int> parent;
    parent[node] = -1;
    visited[node] = true;
    
    queue<int>q;
    q.push(node);
    
    while(!q.empty()){
        int front = q.front();
        q.pop();
        
        for(auto negihbour : adj[front]){
            if(visited[negihbour] == true && negihbour != parent[front])
            {
                return true;
            }
            else if(!visited[negihbour]){
                q.push(negihbour);
                
                visited[negihbour] = true ;
                parent[negihbour] = front;
            }
        }
   }
    return false;
}


string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int ,list<int>> adj;
    
    //prepreng for list
    for(int i=0;i<m;i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    unordered_map<int,bool> visited;
    for(int i = 0 ; i<n ;i++){
        if(!visited[i]){
            bool ans = isCycleBFS(i, visited , adj);
            if(ans == true)
                return "Yes";
          }
       }
        return "No";
    
   
}
