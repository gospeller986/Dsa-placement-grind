#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    int search(vector<int>& nums, int target) { 

        int n = nums.size() ;

        int start = 0 ;
        int end = n-1 ; 

        while(start <= end ) {
            int mid = start + (end-start) /2 ; 

            if(nums[mid] == target )  return mid ; 

            // either the array is left sorted 
            if(nums[start] <= nums[mid]){
                 if(target >= nums[start] && target <= nums[mid]) end = mid -1 ; 
                 else start = mid +1 ; 
            }
            // or the array is right sorted 
            else {

                if(target >= nums[mid] && target <= nums[end]) start = mid+1 ;
                else end = mid -1 ; 

            }

        }

        return -1 ; 
        
    }
};

int main(){

return 0 ; 
}