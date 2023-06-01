#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) { 

        int m = grid.size() ;
        int n = grid[0].size() ; 

        queue< pair<int, pair<int,int>>> q ; 

        vector<vector<int>> visited(m , vector<int>(n)) ;

        // push the co ordinates of all the rotten oranges  
        
        for(int i = 0 ; i < m ; i++) {
            for(int j = 0 ; j < n ; j++ ) {
                  if(grid[i][j] == 2) {
                      visited[i][j] = 1 ;
                      q.push({0,{i,j}}) ;
                  }
            }
        }


        int count = 0 ; 

        vector<vector<int>>dir = {{0,1}, {0,-1} , {1,0} , {-1,0}} ;

        while(!q.empty()){
            int size = q.size() ; 
            while(size--) {
                pair<int,pair<int,int>>p = q.front() ;
                q.pop() ;  
                
                for(int i = 0 ; i < 4 ; i++) {
                    int r = p.second.first + dir[i][0] ;
                    int c = p.second.second + dir[i][1] ; 
                    
                    if(r >= 0 && c >=0 && r < m && c < n && grid[r][c] == 1 && !visited[r][c] ){
                        visited[r][c] = 1 ; 
                        grid[r][c] = 2 ;
                        count = max(count, p.first+1) ;
                        q.push( { p.first+1 , {r,c}}) ;
                    }

                }

            }
        }

        
        bool ansExists = true  ; 

        for(int i = 0 ; i < m ; i++) {
            for(int j = 0 ; j < n ; j++) {
                if(grid[i][j] == 1) {
                    ansExists = false ; 
                    return -1 ;
                }
            }
        }


        return count ;   




        
    }
};

int main(){

return 0 ; 
}