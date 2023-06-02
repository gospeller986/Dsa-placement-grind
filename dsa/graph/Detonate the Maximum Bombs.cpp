#include <bits/stdc++.h>
using namespace std ; 
class Solution {
public:
    
    int Bfs (int startNode ,int n  , vector<int>adj[] ) {
         
         queue<int>q ;
         q.push(startNode) ;

         vector<bool>vis(n,false) ;
         vis[startNode] = true ; 

         set<int>reachable ; 

         while(!q.empty()){
             int size = q.size() ;
             while(size--) {
                  int node = q.front() ;
                  q.pop() ;
                  reachable.insert( node ) ; 
                  for(auto it : adj[node]){
                      if(!vis[it]){
                          vis[it] = true ; 
                          q.push(it) ;
                      }
                  }
             }
         }
        
        return reachable.size();



    }

    int maximumDetonation(vector<vector<int>>& bombs) { 

        // create a graph using the condition given  
        int n = bombs.size() ;
        vector<int>adj[n] ; 

        for(int i = 0 ; i < bombs.size() ; i++) {
               
               long x = bombs[i][0];
               long y = bombs[i][1];
               long r = bombs[i][2];

               for(int j = 0 ; j < bombs.size() ; j++) {
                      long x2 = bombs[j][0];
                      long y2 = bombs[j][1];

                      if( ((x-x2)*(x-x2) + (y-y2)*(y-y2))  <= r*r ){
                          adj[i].push_back(j) ;
                      }

               }

        }

        int maxCount = 0 ; 

        for(int i = 0 ; i < bombs.size() ; i++) {
             
             int count = Bfs(i,n ,adj) ;
             maxCount = max(count , maxCount) ; 

        }


        return maxCount ; 
        
    }
};
int main(){

return 0 ; 
}