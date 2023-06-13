#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {  
        int ans = INT_MIN ;
        int n = values.size() ;
        int maxi[n] ;
        maxi[0] = values[0] ; 


        for(int i = 1 ; i < n ; i++) {
            ans = max(ans, maxi[i-1]+(values[i]-i)) ;
            maxi[i] = max(maxi[i-1],values[i]+i) ;
        }

        return ans ; 


        
    }
};

int main(){

return 0 ; 
}