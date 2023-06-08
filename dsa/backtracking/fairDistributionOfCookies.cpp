#include <bits/stdc++.h>
using namespace std ;

class Solution {
public: 
    
    int ans = INT_MAX ; 

    void helper(int index , vector<int>&cookies , vector<int>&distribute , int k ) {
        if(index == cookies.size()){
            int pathUnfairness = *max_element(distribute.begin() ,distribute.end()) ;
            ans = min(ans , pathUnfairness) ;
            return ;
        }
        
        for(int child = 0 ; child < k ; child++) {
            distribute[child] += cookies[index] ;
            helper(index+1, cookies , distribute , k) ;
            distribute[child] -= cookies[index] ;
        }


    }


    int distributeCookies(vector<int>& cookies, int k) {

        vector<int>distribute(k,0) ; 
        helper(0 , cookies , distribute , k) ;
        return ans ;
        
    }
};

int main(){

return 0 ; 
}