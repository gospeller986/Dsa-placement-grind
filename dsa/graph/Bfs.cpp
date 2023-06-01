// bfs Traversal 
// space Complexity :  O(V) ,  V is the number of nodes 
// time Complexity : O(V+E)

#include <bits/stdc++.h>
using namespace std ; 
int main(){
      int V ; 
      cin >> V ; 
      
      vector<int>adj[V+1] ; 

      vector<int>vis(V+1,0) ; 
      queue<int>q ; 

      vis[0] = 1 ;
      q.push(0) ; 

      vector<int>ans ; 

      while (!q.empty())
      {
          int node = q.front() ;
          q.pop() ;
          ans.push_back(node) ; 
          
          for(auto it : adj[node]){
            if(!vis[it]) {
                vis[it] = 1 ;
                q.push(it) ;
            }
          }

      }
      



return 0 ; 
}