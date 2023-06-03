#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:

    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) { 

        vector<int>adj[n+1] ; 

        for(auto it : edges ) {
            adj[it[0]].push_back(it[1]) ;
        }

        vector<int>ans ; 
        set<int>s ;
        
        for(int i = 0 ; i < n ; i++){
            for(auto it : adj[i]) {
                s.insert(it) ;
            }
        }

        

        for(int i = 0 ; i < n ; i++) {
            if(s.find(i) == s.end()) ans.push_back(i) ;
        }
        
         return ans ; 

    }
};

int main(){

return 0 ; 
}