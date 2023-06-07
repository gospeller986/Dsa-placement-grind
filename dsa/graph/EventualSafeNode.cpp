#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    
    bool dfs( int node , vector<vector<int>>& graph ,vector<int>&vis ,
    vector<int>&pathVis , vector<int>&isSafe  ) {
          vis[node] = 1;
          pathVis[node] = 1; 
          isSafe[node] = 0 ; 

          for(auto it : graph[node]) {
              if(!vis[it]){
                 if(dfs(it,graph , vis , pathVis , isSafe ) == true ) {
                     isSafe[node] = 0 ;
                     return true ; 
                 }

              }
              else if (pathVis[it] && vis[it]) {
                  isSafe[node] = 0  ;
                  return true ;
              }
          }
           


           
           isSafe[node] = 1; 
           pathVis[node] = 0 ;
           return false ; 
        }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) { 

        int n = graph.size() ;

        vector<int>vis(n,0) ;
        vector<int>pathVis(n,0) ; 
        vector<int>isSafe(n,0) ;
        vector<int>ans ;
        
        for(int i = 0 ; i < n ; i++) {
            dfs(i,graph,vis,pathVis , isSafe)  ;
        }


        for(int i = 0 ; i < isSafe.size() ; i++) {
            if( isSafe[i] == 1 ) ans.push_back(i) ;  
        }

         
        return ans ; 
        
    }
};

int main() {
  std::cout << "Hello World!\n";
}