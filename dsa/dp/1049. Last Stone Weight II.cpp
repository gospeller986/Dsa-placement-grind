#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    int dp[31][3001];
    int solve(int index , int total, int sum , int target , vector<int>&stones ){
        if(total >= target || index == stones.size()){
            return abs(total - (sum-total)) ;
        } 

        if(dp[index][total] != -1 ) return dp[index][total] ;
        
        int pick = solve(index+1 , total+stones[index], sum , target , stones) ;
        int notPick = solve(index+1 , total , sum , target , stones) ; 

        return dp[index][total] = min(pick,notPick) ;


    }

    int lastStoneWeightII(vector<int>& stones) {  

        // the main approach is to divide the stones array into 2 subarrays of almost the same size .
        // in best case if both the arrays have equal sum then the diff will be zero .

        memset(dp, -1 , sizeof(dp)) ;

        long long int sum = 0 ;
        for(auto it : stones) {
            sum += it ; 
        }

        int target = (sum/2) ;

        int ans = solve(0,0,sum,target,stones) ;

        return ans ; 
        
    }
};

int main(){

return 0 ; 
}