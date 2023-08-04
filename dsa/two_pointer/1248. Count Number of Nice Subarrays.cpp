#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public: 

    int atMostSubarrays(vector<int>& nums , int k ){
         
         int i = 0 ;
         int j = 0 ;
         int n = nums.size() ; 
         
         int ans = 0 ;
         int sum = 0 ;

         while(j < n ) {
             sum += nums[j] ;

             while(sum > k) {
                 sum -= nums[i] ;
                 i++;
             }


             ans += j-i+1 ;
             j++ ;
         }

         return ans ; 

    }

    int numberOfSubarrays(vector<int>& nums, int k) { 

        // convert odd numbers to 1 and even numbers to 0 
        // now find the number of sub arrays for the goal k  

        for(auto &it : nums) {
            if(it%2){
                it = 1 ;
            }
            else {
                it = 0 ;
            }
        }

        return atMostSubarrays(nums,k) - atMostSubarrays(nums,k-1) ;
        
    }
};

int main(){

return 0 ; 
}