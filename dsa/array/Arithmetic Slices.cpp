#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) { 

        int n = nums.size() ;
        if(n<3) return 0;
        vector<int>ap_count(n,0) ;

        int ans = 0 ; 

        for(int i = 2 ; i < n ; i++) {
            // if it is an Arithmetic Progression then they will create extension of the prev index and a new one
            if((nums[i] - nums[i-1]) ==( nums[i-1] -nums[i-2] )){
                ap_count[i] = ap_count[i-1] +1 ;
                ans+= ap_count[i] ;
            }

        }

        return ans ;
        


        
    }
};
int main(){

return 0 ; 
}