#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    int findMin(vector<int>& arr) { 

        int n = arr.size() ;

        int low = 0 ; 
        int high = n-1 ; 

        int ans = INT_MAX ; 

        while(low <= high ) {
            int mid = low + (high - low) / 2 ; 
            
            if(arr[low] <= arr[mid]) {
                 ans = min(ans , arr[low]) ;
                 low = mid+1 ;
            } else {
                high = mid-1 ;
                ans = min(ans,arr[mid]) ;
                
            }


        }
        
        return ans ; 
    }
};

int main(){

return 0 ; 
}