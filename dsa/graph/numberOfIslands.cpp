#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public: 

    vector<pair<int,int>>dir = {{ 0, 1} , {0,-1} , {1,0} , {-1,0}} ; 
    
    void dfs( int row , int col , int n , int m , vector<vector<char>>& grid ,vector<vector<int>> &visited ) { 
        if( row >= 0 && col >= 0 && row < n && col <m && grid[row][col] == '1' && !visited[row][col] ) {
        visited[row][col] ; 

        grid[row][col] = 0 ;
        
        dfs(row+1 , col , n , m , grid , visited) ;
        dfs(row-1 , col , n , m , grid , visited) ;
        dfs(row , col+1 , n , m , grid , visited) ;
        dfs(row , col-1 , n , m , grid , visited) ;

        }
 
    }

    int numIslands(vector<vector<char>>& grid) { 

       int n = grid.size() ;
       int m = grid[0].size() ; 

       vector<vector<int>>visited(n,vector<int>(m,0)) ; 

       int count =0  ;

       for(int i = 0 ; i < n ; i++) {
           for(int j = 0 ; j < m ; j++) { 

               if(!visited[i][j] && grid[i][j] == '1') {
                   count++; 
                   dfs(i , j , n,m , grid , visited) ;
               }

           }
       }

       return count ; 
        
    }
};

int main(){

return 0 ; 
}