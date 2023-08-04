#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    int characterReplacement(string s, int k) { 

        int i = 0 ; 
        int j = 0 ;
        int n = s.length() ;
        int maxC = 0 ;
        int ans = -1 ; 

        map<char,int>mp ;

        while( j < n ) {
            mp[s[j]]++; 
            maxC = max( maxC , mp[s[j]] ) ;
            
            int currLength = j-i+1 ; 

            if(currLength - maxC  > k ) {
                mp[s[i]]--;
                i++ ;
            }


            ans = max(ans,j-i+1) ;
            j++;

        }

    return ans ;


        
    }
};

int main(){

return 0 ; 
}