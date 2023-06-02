#include <bits/stdc++.h>
using namespace std ; 

class Solution {
  public:
    
    bool detectCycle( int i , vector<int>adj[] , vector<int>&visited ) {
        visited[i] = 1 ; 
        
        queue<pair<int,int>> q ;
        q.push({i,-1}) ; 
        
        while(!q.empty()){
            int node = q.front().first ;
            int parent = q.front().second ;
            q.pop() ;
            
            for(auto it : adj[node]){
                if(!visited[it]){
                    visited[it] = 1 ;
                    q.push({it,node}) ;
                }
                else if (parent != it) {
                    return true ; 
                }
            }
        }
        
        return false ; 
    }
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here 
        
        vector<int>visited(V,0) ; 
        for(int i = 0 ; i < V ; i++) {
             if(!visited[i]){
                 if(detectCycle(i,adj , visited)) return true ;
             }
        }
        
        return false ; 
    }
};

int main(){

return 0 ; 
}