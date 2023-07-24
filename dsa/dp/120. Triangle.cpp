#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:

   int dp[201][201] ;
    
    int solve(int i , int j ,int n , vector<vector<int>>& triangle) {
        if( i == n-1 ) return triangle[i][j] ;

        if(dp[i][j] != -1 ) return dp[i][j] ; 

        int down = triangle[i][j] + solve(i+1,j,n,triangle) ;
        int diag = triangle[i][j] + solve(i+1,j+1,n,triangle) ; 

        return dp[i][j] =  min(down,diag) ; 
    }

    int minimumTotal(vector<vector<int>>& triangle) { 

        int n = triangle.size() ; 

        
        memset(dp,-1,sizeof(dp)) ;

        return solve(0,0 , n,triangle);
        
    }
};

int main(){

return 0 ; 
}