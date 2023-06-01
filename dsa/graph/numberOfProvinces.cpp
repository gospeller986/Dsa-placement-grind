#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    
    void dfs(int node ,vector<int>adj[] , vector<bool>&visited ) {
        visited[node] = true ;

        for(auto it : adj[node]) {
            if(!visited[it]){
                dfs(it,adj,visited) ;
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) { 

        int n = isConnected.size() ;
        
        vector<int>adj[n+1] ; 

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n ; j++) {
                if(isConnected[i][j] == 1) {
                    adj[i+1].push_back(j+1) ; 
                }
            }
        }
 

        vector<bool>visited(n+1,false)  ; 
        int count = 0  ;


        for(int i = 1 ; i <= n ; i++) {
            if(!visited[i]) {
                count++ ; 
                dfs(i,adj , visited) ;
            }
        }

        return count ; 



        
    }
};

int main(){

return 0 ; 
}