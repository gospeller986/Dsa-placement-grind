#include <bits/stdc++.h>
using namespace std ; 
 
/*
  The only difference here is the you find the smallest index for which the target is strictly greater than the element ... 
*/


int upper_bound(vector<int>&v , int n , int target) {
    int start = 0 ; 
    int end = n -1 ; 
    int ans = n ; 

    while( start <= end ) {
        int mid = start + (end-start)/2;

        if(target > v[mid]) {
            ans = mid ; 
            end = mid -1 ; 
        }    
         else {
             start = mid +1  ;
         }

    }

    return ans ;

}


int main(){

return 0 ; 
}