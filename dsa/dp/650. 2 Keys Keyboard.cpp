#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public: 
    
    long long int dp[1001][1001] ;
    set<pair<int,int>> vis ;
    
    long long int  solve(int screen , int clipboard , int n ) {
         
         if(screen > n) return INT_MAX ;
         if(screen == n ) return 0 ; 

         if(vis.find({screen,clipboard}) != vis.end()){
             return INT_MAX ;
         }
         else {
             vis.insert({screen,clipboard}) ; 
         }

         if(dp[screen][clipboard] != -1 ) return dp[screen][clipboard] ;

         long long int copy = (1L* 1) + solve(screen,screen,n) ;
         long long int paste = (1L* 1) + solve(screen + clipboard , clipboard , n ) ; 


         return dp[screen][clipboard] = min(copy,paste) ;

    }

    int minSteps(int n) {

        memset(dp , -1 , sizeof(dp)) ;

        return solve(1 , 0 , n ) ;
        
    }
};

int main(){

return 0 ; 
}