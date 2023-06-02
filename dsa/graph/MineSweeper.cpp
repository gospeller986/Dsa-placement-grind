#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:

    vector<vector<int>>dir = {{1,0},{-1,0} ,{0,1}, {0,-1} , {1,1} , {1,-1} , {-1,1} ,{-1,-1}} ;  



    int adjacentBombs( vector<vector<char>>& board , int  r , int c) {
            
            int bombs = 0 ; 

            for(int i = 0 ; i < 8 ; i++) {
                int nr = r + dir[i][0];
                int nc = c + dir[i][1];
                if( nr >= 0 && nc >= 0 && nr < board.size() && nc < board[0].size() &&  board[nr][nc] == 'M') bombs++ ;
            }

            return bombs ; 

    }
    
    void dfs(int r , int c , int n , int m , vector<vector<char>>& board , vector<vector<int>> &visited  ) {
            
           if(r <0 || c < 0 || r >= n || c>=m || visited[r][c] ) return ;

            visited[r][c] = 1  ; 

        if(board[r][c] == 'M'){
             board[r][c] = 'X' ;
             return ; 
         }

         if(board[r][c] == 'E' ){
             int bomb = adjacentBombs(board , r ,c ) ;

             if(bomb == 0 ) {
                   board[r][c] = 'B' ; 
                   for(int i = 0 ; i < 8 ; i++) {
                    int nr = r + dir[i][0];
                    int nc = c + dir[i][1];
                    dfs(nr,nc,n,m,board,visited) ;

                   }

             }else {
                 board[r][c] = bomb + '0' ;
                 return ;
             }
         }


    
    }


    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) { 
         
         int n = board.size() ;
         int m = board[0].size() ; 

         int r = click[0] ;
         int c = click[1] ;



         vector<vector<int>>visited(n,vector<int>(m)) ;

         dfs(r,c ,n,m, board , visited) ;

         return board ; 
        
    }
};

int main(){

return 0 ; 
}