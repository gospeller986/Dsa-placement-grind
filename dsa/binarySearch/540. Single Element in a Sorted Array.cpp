#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        if(nums.size() == 1) return nums[0] ; 
        int n = nums.size() ;

        int low = 0 ; 
        int high = n-1 ; 

        while(low <= high){
             
             int mid = low + (high-low) /2 ; 
             
             if(mid == 0 &&  nums[mid] != nums[mid+1] ) return nums[mid] ; 
             else if(mid== nums.size() -1 && nums[mid] != nums[mid-1]) return nums[mid] ; 
             else {
                   if( nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1] )  return nums[mid] ; 
             }
               
             


             if( ((mid%2==0) && (nums[mid] == nums[mid+1])) || ((mid%2 == 1) && (nums[mid] == nums[mid-1]))) {
                 low = mid +1 ;
             }else {
                 high = mid-1 ;
             }
        }

        return -1 ; 
        
    }
};

int main(){

return 0 ; 
}