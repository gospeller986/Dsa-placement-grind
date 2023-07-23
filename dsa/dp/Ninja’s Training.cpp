#include<bits/stdc++.h>
int dp[100005][4];
int solve(int idx ,  vector<vector<int>> &points , int last ) {
    
    if(idx < 0 ) return 0 ; 

    if(idx == 0 ) {
        int maxi = 0 ;
        for(int i = 0 ; i <= 2 ; i++) {
            if(i != last){
                maxi = max(maxi,points[idx][i]) ;
            }
        }
        return maxi ; 
    }
    
    if(dp[idx][last] != -1) return dp[idx][last] ;

    int maxi = 0 ;

    for(int i = 0 ; i <= 2 ; i++) {
        if(i != last) {
            maxi = max(maxi , points[idx][i] + solve(idx-1,points,i));
        }
    }

    return dp[idx][last] =  maxi ; 



}
int ninjaTraining(int n, vector<vector<int>> &points)
{   
    memset(dp,-1,sizeof(dp)) ;
    return solve(n-1,points,3); 
}
using namespace std ; 
int main(){

return 0 ; 
}