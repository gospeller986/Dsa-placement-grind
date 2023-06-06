#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public: 

    vector<vector<int>> dir = {{0,1},{0,-1},{1,0},{-1,0}} ; 

    bool isValid(int r , int c , int n , int m ) {
        if( r >= 0 && r < n && c >= 0 && c < m  )  return true ;
        return false ; 
    }
     
    void dfs( int row , int col , int n , int m ,vector<vector<int>>& grid ,vector<vector<int>>& vis ) {
        vis[row][col] = 1;  

        for(int i = 0 ; i < 4 ; i++) {
            int nrow = row + dir[i][0] ;
            int ncol = col + dir[i][1] ;
            
            if(isValid(nrow,ncol,n,m) && !vis[nrow][ncol] && grid[nrow][ncol] == 1) {
                dfs(nrow,ncol , n,m ,grid , vis ) ; 
            }
 
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {  

        int n = grid.size() ;
        int m = grid[0].size() ; 

        vector<vector<int>>vis(n,vector<int>(m,0)) ;
        
        for( int j = 0 ; j < m ; j++) {
            
            if(!vis[0][j] &&  grid[0][j] == 1 ) {
                dfs(0,j,n,m,grid,vis) ;
            }

            if(!vis[n-1][j] &&  grid[n-1][j] == 1 ) {
                dfs(n-1,j,n,m,grid,vis) ;
            }

        }

        for( int i = 0 ; i < n ; i++) {
            if(!vis[i][0] && grid[i][0] == 1) {
                dfs(i,0,n,m,grid,vis) ;
            }
            if(!vis[i][m-1] && grid[i][m-1] == 1) {
                dfs(i,m-1,n,m,grid,vis) ;
            }
        }
        
         int count = 0 ; 

         for(int i = 1 ; i < n-1 ;i++) {
             for(int j = 1 ; j < m-1 ;j++) {

                 if(grid[i][j] == 1 && !vis[i][j]) count++ ;

             }
         }

         return count ;

    }
}; 


int main(){

return 0 ; 
}