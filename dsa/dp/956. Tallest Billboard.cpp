#include <bits/stdc++.h>
using namespace std ; 
class Solution {
public: 
    int dp[21][10004] ;
    
    int solve (vector<int>& rods , int index , int diff ) {
        if(index == rods.size()){
            if(diff == 0 )  return 0 ;
            return INT_MIN ; 
        }

        if(dp[index][diff+5001] != -1) return dp[index][diff+5001] ;
        
        int leftSupport = rods[index] + solve(rods,index+1,diff+rods[index]) ;
        int rightSupport = solve(rods , index+1 , diff-rods[index]) ;
        int notSelect = solve(rods , index+1 , diff) ;

        return dp[index][diff+5001] = max(notSelect,max(leftSupport,rightSupport)) ; 


    }

    int tallestBillboard(vector<int>& rods) { 
        
        memset(dp,-1,sizeof(dp)) ;
        int ans = solve(rods,0,0) ;
        return ans ; 
        
    }
}; 
int main(){

return 0 ; 
}