#include <bits/stdc++.h>
using namespace std ; 
int main(){

return 0 ; 
}

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) { 

        vector<vector<int>>ans(n ,vector<int>(n)) ;
        
        int left = 0 ; 
        int right = n-1 ; 
        int top = 0 ;
        int bottom = n-1 ; 

        int direction = 0 ;  
        int number = 1 ; 
 
        while(left <= right && top <= bottom )  {

             if( direction == 0 ) {
                 for(int i = left ; i <= right ; i++ ){
                     ans[top][i] = number ;
                     number++;
                 } 
                 top++;
                 direction = 1; 
             }

             else if (direction == 1) {
                 for(int i = top ; i <= bottom ; i++) {
                     ans[i][right] = number ;
                     number++ ; 
                 }
                 right--; 
                 direction = 2;
             }

             else if(direction == 2 ) {
                 for(int i = right ; i >= left ; i--) {
                     ans[bottom][i] = number ;
                     number++;
                 }
                 bottom-- ;
                 direction = 3 ; 
             }

             else if (direction == 3 ) {
                 for(int i = bottom ; i >= top ; i--) {
                     ans[i][left] = number ;
                     number++; 
                 }
                 left++;
                 direction = 0 ; 
             }

        }

      return ans ;   
    }
};