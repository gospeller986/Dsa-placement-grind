#include <bits/stdc++.h>
using namespace std ; 
class Solution {
public: 
    
    void dfs(int node , vector<int>adj[] , vector<int>& visited ) {
        visited[node] = 1 ; 

        for(auto it : adj[node]){
            if(!visited[it]){
                dfs(it, adj , visited) ; 
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) { 

        int n = rooms.size() ;
        vector<int>adj[n] ; 

        for(int i = 0 ; i < n ; i++) {
            for(auto it : rooms[i]){
                adj[i].push_back(it) ;
            }
        } 

        vector<int>visited(n,0) ;

        dfs(0,adj,visited) ;


        bool isIncomplete = false ; 

        for(int i = 0 ; i < n ; i++) {
            if(visited[i] == 0 ) isIncomplete = true ;
        }


        if(isIncomplete) return false ;

        return true ; 



        
    }
};
int main(){

return 0 ; 
}