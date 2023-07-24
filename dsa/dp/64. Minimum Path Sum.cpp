#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public: 

    int dp[201][201] ;

    static bool isValid(int i , int j , int m , int n  ) {
         if (i >= 0 && j >= 0 && i < m && j < n ) return true ;
         else return false ; 
    }

    int solve( int i , int j , int m , int n , vector<vector<int>>&grid ) {
        if(isValid(i,j,m,n) == false) return INT_MAX ;
        if( i == m-1 && j == n-1 ) return grid[i][j] ; 

        if(dp[i][j] != -1)  return dp[i][j] ; 

        int down = INT_MAX ;
        int right = INT_MAX ; 
        
        if(isValid(i+1,j,m,n)) 
        down = grid[i][j] + solve(i+1,j,m,n,grid);
        if(isValid(i,j+1,m,n))
        right = grid[i][j] + solve(i,j+1,m,n,grid) ;

        return dp[i][j] = min(down,right) ; 
 

    }

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size() ;
        int n = grid[0].size();

        memset(dp,-1,sizeof(dp)) ; 

        return solve(0,0,m,n,grid) ;
    }
};

int main(){

return 0 ; 
}