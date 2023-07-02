#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:

    int ans = INT_MIN ; 

    void solve (int index , vector<vector<int>>& requests , int req , vector<int>&balance) {

        if(index == requests.size()) {
              for(auto it : balance) {
                  if(it != 0 ) return ; 
              }
              
              ans = max(ans,req) ;
              return ; 
        } 
        

        // don't pick the request 
        
        solve(index+1 , requests, req , balance ) ; 



        //pick the request 

        balance[requests[index][0]]--;
        balance[requests[index][1]]++;
        solve(index+1 , requests , req+1 , balance) ; 
        balance[requests[index][0]]++;
        balance[requests[index][1]]--;
        



        
    }

    int maximumRequests(int n, vector<vector<int>>& requests) { 
    
    vector<int>balance(n,0) ;
    solve(0,requests,0,balance) ;

    return ans ; 
        
        
    }
};

int main(){

return 0 ; 
}