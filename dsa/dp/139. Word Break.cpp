#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public: 

    int dp[301] ;
    
    bool solve(int index , string s , vector<string>&wordDict , unordered_set<string>& set) {
          
          if(index == s.size()) return true ; 

          if(dp[index] != -1 ) return dp[index] ;

          for(int i = index ; i < s.size() ; i++) {
              if(set.find(s.substr(index,i+1-index)) != set.end() && solve(i+1 , s, wordDict , set) == true ) {
                  return dp[index] = true ;
              }
          }

          return dp[index] = false ; 


    }

    bool wordBreak(string s, vector<string>& wordDict) { 
        
        memset(dp , -1 , sizeof(dp)) ;

        unordered_set<string>set ;

        for(auto it : wordDict) {
            set.insert(it) ; 
        }


        bool ans = solve(0,s,wordDict , set ) ;

        return ans ; 



        
    }
};

int main(){

return 0 ; 
}