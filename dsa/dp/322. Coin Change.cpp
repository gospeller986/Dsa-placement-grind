#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:

    int dp[1005][10005] ;
    
    int solve( int index , vector<int>& coins , int target ) {
        if(index == 0 ) {
            if(target % coins[index] == 0 ) return target/coins[index] ;
            else return 1e9 ; 
        }

        if(dp[index][target] != -1 ) return dp[index][target] ;

        int notPick = solve(index-1 , coins , target ) ;
        int pick = INT_MAX ; 
        if(coins[index] <= target) {
            pick = 1+ solve(index  , coins , target-coins[index]) ;
        }

        return dp[index][target] = min(pick,notPick) ; 

    }

    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size() ;
        memset(dp,-1,sizeof(dp)) ;
        int ans = solve(n-1 , coins , amount ) ;

        if(ans== INT_MAX || ans == 1e9 ) return -1 ;
        else return ans ;
        
    }
};


int main(){

return 0 ; 
}